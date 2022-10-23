#include <iostream>

using namespace std;

void generateBrackets(string s, int n, int open, int close, int i){
    // base case
    if(i==2*n){
        cout << s << endl;
        return;
    }

    // open
    if(open<n){
        generateBrackets(s+"(", n, open+1, close, i+1);
    }

    // close
    if(close<open){
        generateBrackets(s+")", n, open, close+1, i+1);
    }
}

int main(){
    string s="";
    int n; // count of brackets provided by user

    cin >> n;

    generateBrackets(s, n, 0, 0, 0);

    return 1;
}