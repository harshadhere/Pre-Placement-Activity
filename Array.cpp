#include<iostream>
using namespace std;
class Array
{
    public :
    int iSize;
    int *Arr=NULL; 
    Array(int ilength)
    {
        cout<<"inside constructor\n";
        iSize=ilength;
        Arr = new int(iSize);
    }
    ~Array()
    {
        cout<<"\nInside destructor";
        delete []Arr;
        
    }
    void accept()
    {
        cout<<"\nEnter the values\n";
        for(int i=0; i<iSize; i++)
        {
            cin>>Arr[i];
        }

    }
    void display()
    {
        cout<<"\nEvery elements of Array is : \n";
        for(int i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<endl;
        }
        
    }
    int Sumation()
    {
        int iSum=0;
        for(int i=0;i<iSize;i++)
        {
            iSum=iSum + i;
            i++; 
        }

    }
};
int main()
{
    Array obj1(4);
    //cout<<sizeof(Arr);
    obj1.accept();
    obj1.display();
    int iRet=0;
    iRet=obj1.Sumation();
    cout<<"Summation of all numbers :"<<iRet;
      
    return 0;
}