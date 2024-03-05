#include <iostream>
using namespace std;
class TickTacToe {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char currentPlayer;
public:
    TickTacToe() : currentPlayer('X'){};
    void printBoard(){
        for (int i=0; i<3;i++) {
            for (int j=0;j<3;j++) {
                cout<<board[i][j];
                if (j<2)cout<<" | ";
            }cout<<endl;
            if(i<2)cout<<"---------"<<endl;
        }
    }
    bool makeMove(int row, int col){
        if (row<0 || row>=3 || col<0 || col>=3 || board[row][col]!=' '){
            cout<<"Move invalid. Try again."<<endl;
            return false;
        }
        board[row][col] = currentPlayer;
        currentPlayer = (currentPlayer == 'X')?'O':'X';
        return true;
    }
    bool checkWin(){
        for (int i = 0; i < 3; ++i){
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
                return true;
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
                return true;
        }
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
            return true;
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
            return true;
        return false;
    }
    bool isBoardFull() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == ' ')
                    return false;
            }
        }
        return true;
    }
    char getCurrentPlayer()const{
        return currentPlayer;
    }
};
int main() {
    TickTacToe game;
    while (true) {
        game.printBoard();
        int row, col;
        cout<<"Player "<<game.getCurrentPlayer()<<"'s turn. Enter row (0-2) and column (0-2): ";
        cin>>row>>col;
        if (game.makeMove(row, col)){
            if (game.checkWin()){
                game.printBoard();
                cout<< "Player "<<game.getCurrentPlayer()<<" loses!"<<endl;
                break;
            }else if(game.isBoardFull()){
                game.printBoard();
                cout<<"It's a draw!"<<endl;
                break;
            }
        }
    }
    return 0;
}