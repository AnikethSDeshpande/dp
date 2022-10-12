#include <iostream>
#define el endl

using namespace std;

int pow(int base, int power){
    if (power == 0){
        return 1;
    }

    int x = pow(base, power - 1);
    
    return base * x;
}

int main(){
    int n = 5;
    int m = 4;

    cout << pow(n,m) << el;

    return 1;
}