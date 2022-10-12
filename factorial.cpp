#include <iostream>
#define el endl
#define ll long long 

using namespace std;

ll int factorial(ll int num) {
    if (num == 0 || num == 1){
        return 1;
    }

    return num * factorial(num-1);
}

int main() {
    
    ll int fact = factorial(20);

    cout << "fact is: " << fact << el ;
    
    return 1;
}