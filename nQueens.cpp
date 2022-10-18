#include <iostream>

using namespace std;

void printBoard(int board[][20], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << "  " ;
        }
        cout << endl;
    }
}

bool canPlace(int board[][20], int n, int x, int y){
    // check column
    for(int k=0; k<x; k++){
        if(board[k][y] == 1){
            return 0;
        }
    }
    
    // check left diagonal
    int i=x;
    int j=y;

    while(i>=0 && j>=0){
        if(board[i][j] == 1){
            return 0;
        }
        i--; j--;
    }

    // check right diagonal
    i=x;
    j=y;

    while(i>=0 && j<n){
        if(board[i][j] == 1){
            return 0;
        }
        i--; j++;
    }

    return 1;
}

bool solveNQ(int board[][20], int n, int i){
    // base case
    if(i==n){
        printBoard(board, n);
        return true;
    }

    // rec case
    // iterate over all the colums for the ith row
    for(int j=0; j<n; j++){
        if(canPlace(board, n, i, j)){
            board[i][j] = 1;
            bool success = solveNQ(board, n, i+1);
            if(success == 1){
                return true;
            }
            // child was not fit due to parent's position
            // so replace queen's position in parent function call
            board[i][j] = 0;
        }
    }

    return false;
}

int main() {
    int n;
    int board[20][20] = {0};
    cin >> n;

    bool possible = solveNQ(board, n, 0);

    cout << "possible: " << possible << endl;

    return 1;
}