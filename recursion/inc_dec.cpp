#include <iostream>
#define el endl

using namespace std;

void dec(int num) {
    if (num == 0) {
        return ;
    }

    cout << num << ", ";

    dec(num-1);
}

void inc(int num) {
    if (num == 0){
        return ;
    }

    inc(num-1);

    cout << num << ", ";
    
}

int main() {
    int x;
    cin >> x;

    cout << "\n\nIncreament:" << el;

    inc(x);

    cout << "\n\nDecreament:" << el;

    dec(x);

    cout << el;
    return 1;
}