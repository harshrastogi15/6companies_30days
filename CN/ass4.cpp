#include <bits/stdc++.h>
#include <bitset>
#include <vector>

using namespace std;

// CRC Function
bitset<16> crc(bitset<16> data) {
    bitset<17> polynomial("10001000000100001"); 
    bitset<17> remainder;

    for (int i = 0; i < 16; i++) {
        remainder[i] = data[i];
    }

    for (int i = 0; i < 16; i++) {
        if (remainder[15] == 1) {
            remainder = remainder^polynomial;
        }
        remainder <<= 1;
        remainder[0] = data[16 + i];
    }

    return remainder.to_ulong();
}

// Hamming Code Function
vector<int> hammingCode(vector<int> data) {
    int n = data.size();
    int r = 0;
    while (n + r + 1 > (1 << r)) {
        r++;
    }

    vector<int> hamming(n + r);

    int j = 0;
    for (int i = 0; i < n + r; i++) {
        if (i == (1 << j) - 1) {
            hamming[i] = 0;
            j++;
        } else {
            hamming[i] = data[i - j];
        }
    }

    for (int i = 0; i < r; i++) {
        int parity = 0;
        for (int j = (1 << i) - 1; j < n + r; j += (1 << i + 1)) {
            for (int k = 0; k < (1 << i); k++) {
                if (j + k < n + r) {
                    parity ^= hamming[j + k];
                }
            }
        }
        hamming[(1 << i) - 1] = parity;
    }

    return hamming;
}

// Parity Function
bool parity(vector<int> data) {
    int sum = 0;
    for (int i = 0; i < data.size(); i++) {
        sum += data[i];
    }
    return sum % 2 == 0;
}

// 2D Parity Function
bool parity2D(vector<vector<int>> data) {
    int rows = data.size();
    int cols = data[0].size();

    for (int i = 0; i < rows; i++) {
        int row_sum = 0;
        for (int j = 0; j < cols; j++) {
            row_sum += data[i][j];
        }
        if (row_sum % 2 != 0) {
            return false;
        }
    }

    for (int i = 0; i < cols; i++) {
        int col_sum = 0;
        for (int j = 0; j < rows; j++) {
            col_sum += data[j][i];
        }
        if (col_sum % 2 != 0) {
            return false;
        }
    }

    return true;
}

// Checksum Function
int checksum(vector<int> data) {
    int sum = 0;
    for (int i = 0; i < data.size(); i++) {
        sum += data[i];
        if (sum > 255) {
            sum -= 255;
        }
    }
    return 255 - sum;
}

int main() {
    // Example usage
    bitset<16> data("1101011010111100");

    // CRC
    bitset<16> crc_result = crc(data);
    cout << "CRC: " << crc_result << endl;

    // Hamming Code
    vector<int> hamming_data = {1, 0, 1, 1};
    vector<int> hamming_result = hammingCode(hamming_data);
    cout << "Hamming Code: ";
    for (int i = 0; i < hamming_result.size(); i++) {
        cout << hamming_result[i];
    }
    cout << endl;

    // Parity
    vector<int> parity_data = {1, 0, 1, 1};
    bool parity_result = parity(parity_data);
    cout << "Parity: " << parity_result << endl;

    // 2D Parity
    vector<vector<int>> parity2D_data = {{1, 0, 1}, {0, 1, 1}, {1, 1, 0}};
    bool parity2D_result = parity2D(parity2D_data);
    cout << "2D Parity: " << parity2D_result << endl;

    // Checksum
    vector<int> checksum_data = {1, 2, 3, 4};
    int checksum_result = checksum(checksum_data);
    cout << "Checksum: " << checksum_result << endl;

    return 0;
}