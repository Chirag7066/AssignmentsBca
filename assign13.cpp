#include <iostream>
using namespace std;
class fast_food{
    int pasta;
    int pizza;
public:
    void getFood(){
        cout<<"Enter the amount of pasta and pizzas:"<<endl;
        cin>>pasta>>pizza;
    }
    int getPizza(){return pizza;}
    int getPasta(){return pasta;}
};
class drinks{
    int coffee;
    int coke;
public:
    void getDrinks(){
        cout<<"Enter the amount of coffee and coke:"<<endl;
        cin>>coffee>>coke;
    }
    int getCoffee(){return coffee;}
    int getCoke(){return coke;}
};
class Bill: public fast_food, public drinks{
    int pizza_Price;
    int pasta_Price;
    int coffee_Price;
    int coke_Price;
public:
    Bill(){
        pizza_Price=110;
        pasta_Price= 90;
        coffee_Price=60;
        coke_Price=40;
    }
    void print(){
        cout<<"     Bill        "<<endl;
        cout<<"Pizza : Rs."<<pizza_Price*getPizza()<<endl;
        cout<<"Pasta : Rs."<<pasta_Price*getPasta()<<endl;
        cout<<"Coffee: Rs."<<coffee_Price*getCoffee()<<endl;
        cout<<"Coke  : Rs."<<coke_Price*getCoke()<<endl;
    }
};
int main(){
    Bill b1;
    b1.getFood();
    b1.getDrinks();
    b1.print();
    return 0;
}