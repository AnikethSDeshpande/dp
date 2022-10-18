#include <iostream>

using namespace std;

void rightDiagonal(int board[][20], int n, int x, int y){
    int i = x;
    int j = y;

    while(i>=0 && j<n){
        board[i][j] = 1;
        i--; j++;
    }
    return;
}

void leftDiagonal(int board[][20], int n, int x, int y){
    int i = x;
    int j = y;

    while(i>=0 && j >=0){
        board[i][j] = 1;
        i--; j--;
    }
    return;
}

void printBoard(int board[][20], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << "  " ;
        }
        cout << endl;
    }
    return;
}

int main(){
    int n, i, j;
    int board[20][20] = {0};

    n = 7;
    i = 5;
    j = 4;

    printBoard(board, n);
    rightDiagonal(board, n, i, j);
    cout << "\nAfter right diagoanl" << endl;
    printBoard(board, n);

    leftDiagonal(board, n, i, j);
    cout << "\nAfter left diagoanl" << endl;
    printBoard(board, n);
    
    return 1;
}