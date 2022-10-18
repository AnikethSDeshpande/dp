#include <iostream>

using namespace std;

int ct = 0;

void subset(char *input, char *output, int i, int j){
    
    // basecase
    if (input[i] == '\0'){
        output[j] = '\0';
        ct += 1;
        if (output[0] == '\0'){
            cout << "NULL";
        }
        cout << output << endl;
        return;
    }

    // include input[i]
    output[j] = input[i];
    subset(input, output, i+1, j+1);

    // exclude input[i]
    output[j] = '\0';
    subset(input, output, i+1, j);

    return;
}

int main(){
    char ip[100];
    char op[100];
    cin >> ip;

    subset(ip, op, 0, 0);
    
    cout << "Total count: " << ct <<endl;
    return 1;
}