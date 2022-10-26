// find number of ways to form a string of length N
// using only 0s and 1s
// such that there are no consecutive 1s

#include <iostream>

using namespace std;

// step one, function represent state
int fun(int n, int i, bool isOne){
    // n is the length of string
    // i is the current index to fill
    // isOne is a flag that informs whether there is one just previously
    
    int ans = 0;

    // base case
    if(i==n){
        return 1;
    }
    
    // recursive case
    // place 0
    ans += fun(n, i+1, false);

    // place 1
    if(!isOne){
        ans += fun(n, i+1, true);
    }

    return ans;
}

int main(){
    int n=5;

    int ans = fun(n, 0, 0);

    cout << "COUNT: " << ans << endl;

    return 1;
}