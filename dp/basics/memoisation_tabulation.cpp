#include <iostream>

using namespace std;

// memoisation
int mem[20] = {0};
int memoisation(int n){
    // base case
    if(n==0 || n==1){
        return 1;
    }

    // recursive case
    if(!(mem[n] == 0)){
        return mem[n];
    }
    mem[n] = memoisation(n-1) + memoisation(n-2);
    return mem[n];
}

// tabluation
int tabluation(int n){
    int tab[20] = {0};
    tab[1] = 1; 
    tab[2] = 2;

    for(int i=3; i<=n; i++){
        tab[i] = tab[i-1] + tab[i-2];
    }

    return tab[n];
}


int main(){
    // finding nth fibonacci number
    int n = 7;

    cout<<tabluation(n)<<endl;
    cout<<memoisation(n)<<endl;
}