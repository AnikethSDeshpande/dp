#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    int arr[] = {10, 2, 3, 9, 15};
    int n = sizeof(arr) / sizeof(int);

    // find the equilibrium point in the array
    // using ps and ss

    int ps[n], ss[n], sum=0;
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    // ps = [10, 12, 15, 24, 39]
    // ss = [39, 29, 27, 24, 15]
    
    ps[0] = arr[0];
    ss[0] = sum;

    for(int i=1; i<n; i++){
        ps[i] = ps[i-1] + arr[i];
        ss[i] = ss[i-1] - arr[i-1];

        if (ps[i] == ss[i]) {
            cout << "Equilibrium: " << arr[i] << endl;
        }
    }
    

    return 1;
}