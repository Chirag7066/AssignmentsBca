#include <iostream>
#include <stdlib.h>
using namespace std;
class atm{
    int id,pass,login_id,login_pass,bal=0,dep,with;
    char choice;
public:
    void printIntroMenu(){
        cout<<"Please select an option from the menu below:"<<endl;
        cout<<"l-> Login \nc-> Create New Account \nq -> Quit"<<endl;
        cin>>choice;
    }
    void printMainMenu(){
        cout<<"d -> Deposit Money \nw -> Withdraw Money \nr -> Request Balance \nq -> Quit"<<endl;
        cin>>choice;
    }
    void login(){
        cout<<"Please enter your user id: ";
        cin>>login_id;
        cout<<"Please enter your password: ";
        cin>>login_pass;
    }
    void createAccount(){
        cout<<"Please enter your user id: ";
        cin>>id;
        cout<<"Please enter your password: ";
        cin>>pass;
        cout<<"Thank you! Your account has been created!"<<endl;
    }
    void start(){
        printIntroMenu();
        while(1){
        switch (choice){
        case 'l':
            login();
            if(id==login_id && pass==login_pass){
                cout<<"Access Granted!"<<endl;
                while(1){
                printMainMenu();
                    switch (choice){
                    case 'd':   
                        cout<<"Amount of deposit: $";
                        cin>>dep;
                        bal+=dep;
                        break;
                    case 'w':
                        cout<<"Amount of withdrawl: $";
                        cin>>with;
                        bal-=with;
                        break;
                    case 'r':
                        cout<<"Your balance is $"<<bal<<endl;
                        break;
                    case 'q':
                        cout<<"Thanks for stopping by!"<<endl;
                        exit(0);
                        break;
                    }
                }
            }else{
                cout<<"******** LOGIN FAILED! ********"<<endl;
                printIntroMenu();
            }
            break;
        case 'c':
            createAccount();
            printIntroMenu();
            break;
        case 'q':
            cout<<"Thanks for stopping by!"<<endl;
            exit(0);
            break;
        default:
            break;
        }
        }
        }
};
int main(){
    atm a1;
    cout<<"Welcome to Mr. X's ATM Machine"<<endl;
    a1.start();
    return 0;
}