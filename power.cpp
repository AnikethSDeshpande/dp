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

int fastPow(int base, int pow) {
    if (pow == 0) {
        return 1;
    }

    int subProb = fastPow(base, pow/2);
    int subProbSq = subProb * subProb;

    if (pow & 1){
        return subProbSq * base;
    }

    return subProbSq;
}

int main(){
    int b = 5;
    int p = 4;

    cout << pow(b, p) << el;
    cout << fastPow(b, p) << el;
    
    return 1;
}