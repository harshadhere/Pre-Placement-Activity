#include<iostream>
using namespace std;

class Fibonacci
{
    public:
        
        int FibonacciSeries(int count)
        {
        int no1 =0, no2 = 1;
        int i,no3;
        cout<<no1<<" "<<no2;
        for(i=2;i<count;i++)
        {
            no3 = no1 + no2;
            cout<<" "<<no3;
            no1=no2;
            no2=no3;
        }
        }
};
int main()
{
    Fibonacci f1;
    int iRet =0,count;
    cout<<"\nENter the the number";
    cin>>count;
    f1.FibonacciSeries(count);
    
  
    
    return 0;
}