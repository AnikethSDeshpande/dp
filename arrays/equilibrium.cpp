#include <iostream>

using namespace std;

// find equilibrium in the array
// left subarray sum = right subarray sum
int main(){
    int arr[] = {10, 3, 4, 11, 2, 15};
    int n = sizeof(arr)/sizeof(int);

    int ls = 0;
    int rs = 0;
    int sum = 0;

    for(int i=0; i<n; i++){sum += arr[i];}

    for(int i=0; i<n; i++){
        sum = sum - arr[i]; // sum is now right sum

        if(sum == ls){cout << arr[i] << endl; return 1;}
        ls+=arr[i];
    }

    cout << "No number" << endl;
    return 1;
}