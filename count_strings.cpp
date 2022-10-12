#include <iostream>

using namespace std;

// to find the number of ways in which a binary string can be formed 
// with two 1s not being adjacent.


// solution:
// recursion relation:
//      f(n-1) + f(n-2)
//      [0 .....] + [1 0 ......]

// base condition:
//      n=0 --> 1; n=1 --> 2;  therefore , n=3 --> 3


int count(int n){
    if (n==0){return 1;}
    if (n==1){return 2;}
    
    return count(n-1) + count(n-2);
}

int main() {
    int n = 4;
    cout << count(n) << endl;
    return 1;
}