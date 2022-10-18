#include <iostream>

using namespace std;

void star(int l){
    for(int i=0; i<l; i++){
        for(int j=0; j<l; j++){
            if(i==j){
                cout << '.';
            }
            else if (j==l-i-1){
                cout << '.';
            }
            else if (i==l/2){
                cout << '.';
            }
            else if (j==l/2){
                cout << '.';
            }
            else{
                cout << " ";
            }
            cout << "  ";
        }
        // row completed
        cout << endl;
    }
}

int main(){
    int l;
    cin >> l;

    if(!(l&1)){
        cout << "l needs to be odd"<<endl;
    }

    star(l);
    // cout << borders(l) << endl;

    return 1;
}