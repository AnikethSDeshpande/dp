#include <iostream>

using namespace std;

void printBoard(int board[][20], int n){
    cout << "\nAnother possibility \n\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << "  ";
        }
        // end of row
        cout << endl;
    }
}

bool canPlace(int board[][20], int n, int x, int y){
    // column check
    for(int k=0; k<x; k++){
        if(board[k][y]==1){
            return false;
        } 
    }

    // left diagonal check
    int i=x;
    int j=y;

    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--; j--;
    }

    // right diagonal check
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

int solveNQ(int board[][20], int n, int i){
    // base case
    if(i==n){
        printBoard(board, n);
        return 1;
    }

    int count = 0;
    // rec case
    for(int j=0; j<n; j++){
        // check if its safe to place queen here
        if(canPlace(board, n, i, j)){
            board[i][j] = 1;
            count += solveNQ(board, n, i+1);
            // backtrack
            board[i][j] = 0;
        }
    }
    return count;
}

int main(){
    int board[20][20] = {0};
    int count;
    int n;

    cin >> n;
    count = solveNQ(board, n, 0);

    cout << "TOTAL POSSIBILITIES: " << count << endl;
    
    return 1;
}