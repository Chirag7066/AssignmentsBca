#include <iostream>
using namespace std;
class User {
private:
    string name;
    int birth_year;
    int birth_day;
    int birth_month;
    double salary;
public:
    User(string n, int y, int d, int m, double s ):name(n), 
    birth_year(y),birth_day(d),birth_month(m),salary(s){}
    int operator==(const User& x)const{    //overloading == operator
        if(birth_year > x.birth_year && birth_month > x.birth_month && birth_day > x.birth_day){
            return 1;
        }else if(birth_year < x.birth_year && birth_month < x.birth_month && birth_day < x.birth_day){
            return -1;
        }else{
            return 0;
        }
    }
    double operator+(const User& x){
        return (salary+x.salary)/2.0;
    }
    double operator+(int per){ 
        double inc= salary*(per/100.0);
        salary+=inc;
        return salary;
    }
    void display(){
        cout << "Name: "<<name<<", Birth Year: "<< birth_year
            <<", Birth Month: "<<birth_month<<", Birth Day: "<<birth_day
            <<", Salary: "<<salary<<endl;
    }
    double display_sal(){
        return salary;
    }
};
int main(){
    User user1Obj("User 1", 2004, 29, 8, 75000.0);
    User user2Obj("User 2", 2006, 30, 6, 60000.0);
    user1Obj.display();
    user2Obj.display();
    int result= user1Obj==user2Obj;
    if(result==1){
        cout<<"User 1 is older"<<endl;
    }else if(result==0){
        cout<<"Both users are of the same age"<<endl;
    }else{
        cout<<"User 2 is older"<<endl;
    }
    double average_sal = user1Obj + user2Obj;
    cout<<"The average salary is "<<average_sal<<endl;
    user1Obj +5; // to add 5% increment in user existing salary
    user2Obj +10; // to add 10% increment in user existing salary
    cout<<"Salary of User 1 after increment: "<<user1Obj.display_sal()<<endl;
    cout<<"Salary of User 2 after increment: "<<user2Obj.display_sal()<<endl;
    return 0;
}