#include <iostream>
using namespace std;
class matrix{
    int a[3][3];
public:
    void get(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){   
            cout<<"Enter the element at index "<<i<<" "<<j<<":  ";
            cin>>a[i][j];
            }
        }
    }
    matrix operator+(matrix &ref){
        matrix result;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){   
                result.a[i][j]=a[i][j]+ref.a[i][j];
            }
        }
        return result;
    }
    void display(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){   
            cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    matrix m1,m2;
    cout<<"Enter the elements for matrix 1"<<endl;
    m1.get();
    cout<<"Enter the elements for matrix 2"<<endl;
    m2.get();
    matrix m3= m1+m2;
    cout<<"The sum of the matrices is:- "<<endl;
    m3.display();
    return 0;
}