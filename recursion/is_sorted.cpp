#include <iostream>

using namespace std;

bool isSorted(int arr[], int n) {
    if (n <= 1) {
        return 1;
    }

    return (arr[0] < arr[1]) && isSorted(arr+1, n-1);
}

int main() {
    
    int arr[] = {1,2,13,4};
    int n = sizeof(arr) / sizeof(int);

    bool sort = isSorted(arr, n);

    cout << sort << endl;

    return 1;
}