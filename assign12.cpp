#include <iostream>
using namespace std;
class smallUnit{
    double inches;
public:
    smallUnit(double i):inches(i){}
    void display(){
        cout<<"The measurement in inches is: "<<inches<<endl;
    }
    double getInch(){
        return inches;
    }
};
class largerUnit{
    double feet;
public:
    largerUnit():feet(0){}
    largerUnit(smallUnit x)
    {
        double temp= x.getInch()/12;
        feet=temp;
    }
    void display(){
        cout<<"The measurement in feet is: "<<feet<<endl;
        cout<<"The measurement in inches is: "<<feet*12<<endl;
    }
};
int main(){
    smallUnit s1(43);
    largerUnit l1;
    l1=s1;
    l1.display();
    return 0;
}
