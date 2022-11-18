#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    // pick k elements from either left or right of the array
    // such that the sum of the k elements must be maximum

    // solution
    // using prefix sum to calculate the min sum of the conteguous elements

    int arr[] = {20,1,4,5,2,8};
    int l = sizeof(arr)/sizeof(int);

    int prefixSum[l];

    prefixSum[0] = arr[0];

    for(int i=0; i<l; i++){
        cout << arr[i] << " ";
    }

    for(int i=1; i<l; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    cout << endl;
    for(int i=0; i<l; i++){
        cout << prefixSum[i] << " ";
    }

    cout << "\n Sum between 3rd and 6th element is: " << prefixSum[5] - prefixSum[2] << endl;
    return 1;
}