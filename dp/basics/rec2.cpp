#include <iostream>

using namespace std;

int fun(int n, int i, bool isOne){
    // total number of ways for this state
    int ans = 0;
    
    // base condition
    if(i==n){
        return 1;
    }

    // rec condition
    // if we place 0
    ans += fun(n, i+1, 0);

    // if we place 1
    // cannot place 1 when there is one in previous state
    if(!isOne){
        ans += fun(n, i+1, 1);
    }
    
    return ans;
}

int main(){
    // string length
    int n=6;

    int ans = fun(n, 0, 0);

    cout << "ANS: " << ans << endl;

    return 1;
}