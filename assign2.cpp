#include <iostream>
#include <cstdlib>
using namespace std; //CHANGE according to assignment :)
class game{
    int computerGeneratedNumber;
    int userGuessedNumber=0, attempts=1;
public:
    void generateRandomNumber(){
        computerGeneratedNumber=rand() % 100 +1;
    }
    void startGame(){
    generateRandomNumber();
    do{
        cout<<"Guess the number: ";
        cin>>userGuessedNumber;
        if (computerGeneratedNumber>userGuessedNumber){
            cout<<"Attempt: "<<attempts<<endl;
            cout<<"Message: Guessed number is smaller than computer generated number"<<endl;
        }else if(computerGeneratedNumber<userGuessedNumber){
            cout<<"Attempt: "<<attempts<<endl;
            cout<<"Guessed number is greater than computer generated number"<<endl;
        }else{
            cout<<"Attempt: "<<attempts<<endl;
            cout<<"Message: Congratulation you won the game in "<<attempts<<" attempts"<<endl;
        }
        attempts++;
    } while (computerGeneratedNumber!=userGuessedNumber);
    }
};
int main(){
    game g1;
    g1.startGame();
    return 0;
}
