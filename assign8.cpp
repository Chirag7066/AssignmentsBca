#include <iostream>
using namespace std;
class series_sum{
    int n,sum=0;
public:
    void get(){
        cout<<"Enter a positive interger above 0"<<endl;
        cin>>n;
    }
    void compute(){
        for(int i=1;i<=n;i++){   //computing the sum of series
        sum+=(i*(i+1))/2;        // formula for sum of first i natural
        }                        // number: n(n+1)/2
        cout<<"The sum of the series is: "<<sum<<endl;
    }
};
int main(){
    series_sum s1;
    s1.get();
    s1.compute();
    return 0;
}