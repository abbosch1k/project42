#include <iostream>
using namespace std;

char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

void showBoard() {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void move(int pos, char player) {
    int row = (pos-1)/3;
    int col = (pos-1)%3;
    board[row][col] = player;
}

int main() {
    int pos;
    char player = 'X';

    for(int i=0;i<9;i++) {
        showBoard();
        cout << "Player " << player << " move: ";
        cin >> pos;

        move(pos, player);

        player = (player == 'X') ? 'O' : 'X';
    }

    showBoard();
}
