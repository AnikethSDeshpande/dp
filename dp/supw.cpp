#include <iostream>

using namespace std;

// every student of the school must be participating in dance
// student must not skip this activity for more than 3 days
// find the least possible effort the student can do

int main(){
    int effort[] = {2, 2, 3, 2, 2};
    int l = sizeof(effort) / sizeof(int);
    int dp[l];

    dp[0] = effort[0];
    dp[1] = effort[1];
    dp[2] = effort[2];

    for(int i=3; i<l; i++){
        dp[i] = min({dp[i-1], dp[i-2], dp[i-3]}) + effort[i];
    }

    int ans = min({dp[l-1], dp[l-2], dp[l-3]});
    cout << "Ans: " << ans << endl;
    return 1;
}