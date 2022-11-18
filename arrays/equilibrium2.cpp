#include <iostream>

using namespace std;

// finding equilibrium of array using prefix sum and suffix sum
// equilibrium is when prefix sum == suffix sum
int main(){
    int arr[] = {10, 3, 4, 11, 2};
    int n = sizeof(arr)/sizeof(int);

    int ps[n];
    int ss[n];

    // ps[0] = arr[0];
    // for(int i=1; i<n; i++){
    //     ps[i] = ps[i-1] + arr[i];
    // }

    // ss[0] = ps[n-1];
    // for(int i=1; i<n; i++){
    //     ss[i] = ss[i-1] - arr[i-1];
    // }

    // sum 
    int sum=0;
    for(int i=0; i<n ; i++){
        sum += arr[i];
    }

    ps[0] = arr[0];
    ss[0] = sum;
    for(int i=1; i<n; i++){
        ps[i] = ps[i-1] + arr[i];
        ss[i] = ss[i-1] - arr[i-1];

        if(ps[i] == ss[i]){
            cout<< arr[i] << endl;
        }
    }

    // print ps and ss
    // for(int i=0; i<n; i++){
    //     cout << "(" << ps[i] << "," << ss[i] << ")" << endl;
    // }

    return 1;
}