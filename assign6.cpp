#include<iostream>
#include<cstdlib>
using namespace std;
class sample {
public:
    int Compute(int (sample::*func)(int),int n) {
        return (this->*func)(n);      //calling the function using pointer 
    }
    int findFactorial(int n) {
        int fact=1;
        for(int i=1;i<=n;i++) {
        fact = fact * i;
        }
        return fact;
    }
    int findSquare(int n) {
        return n*n;
    }
    int findCube(int n) {
        return n*n*n;
    }
};
int main(int argc, char *argv[]) {
    if(argc!=2){
        cout<<"Usage: "<<argv[0]<<" <N> "<<endl;
        return 1;
    }
    int N= atoi(argv[1]);   //changing command line arguement to int
    sample obj;
    cout<<"Factorial of "<<N<<": "<<obj.Compute(&sample::findFactorial,N)<<endl;
    cout<<"Square of "<<N<<": "<<obj.Compute(&sample::findSquare,N)<<endl;
    cout<<"Cube of "<<N<<": "<<obj.Compute(&sample::findCube,N)<<endl;
    return 0;
}