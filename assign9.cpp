#include <iostream>
using namespace std;
class demo{
    int a;
public:
    demo(int x):a(x){}
    friend int operator+(demo x, demo y); //using friend function to access private variables
    friend int operator-(demo x, demo y); //using friend function to access private variables
};
int operator+(demo x,demo y){
    return x.a+y.a;
}
int operator-(demo x,demo y){
    return x.a-y.a;
}
int main(){
    demo d1(200),d2(300);
    int sum= d1+d2;  
    int diff= d1-d2;
    cout<<"The sum is: "<<sum<<endl;
    cout<<"The difference is: "<<diff<<endl;
    return 0;
}