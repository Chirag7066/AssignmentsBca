#include <iostream>
using namespace std;
class computation{
    int choice;
public:
    int compute(int x,int y){ return x+y;}  //1. integers
    float compute(int x,float y){ return x+y;}  //2.  int and  float
    double compute(int x,double y){ return x+y;}   //3. int and double
    int compute(char x,char y){ return (int) x + (int) y;}  //4. chars
    int compute(char x,int y){ return (int) x + y;}  //5. char and int
    int compute(){ int x=0, y=0; return x+y;}  //6. no values 
};
int main(){
    computation c1;
    cout<<"Example 1: "<<c1.compute(10,20)<<endl;
    cout<<"Example 2: "<<c1.compute(10,5.5f)<<endl;
    cout<<"Example 3: "<<c1.compute(15,12.5)<<endl;
    cout<<"Example 4: "<<c1.compute('d','d')<<endl;
    cout<<"Example 5: "<<c1.compute('a',30)<<endl;
    cout<<"Example 6: "<<c1.compute()<<endl;
    return 0;
}