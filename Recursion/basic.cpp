// Joseph problem 
// in circular array, remove every kth element in array and tell which number remain in end
// f(n,k) = (f(n-1,k)+k)%n;


// Tail Recursion - recursive call is the last thing executed by the fucntion.
// tail recursive function is way better than normal recursion because modern compiler compiles it in a way that code is not recursive.
// Compilers execute using stack.

// Tail Call Elimination
// compiler basically does tail call elimination to optimize the tail-recursive code