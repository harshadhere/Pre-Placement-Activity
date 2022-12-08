#include<iostream>
using namespace std;
class Set
{
    int n;
    int arr[40];
    Set()
    {
        n=0;
    }
    void accept(char str[]);
    void display(char str[]);
    int search(int);
    int intersection(Set A,Set B);



};
void Set::accept(char str[])
{
    cout<<"\nEnter the Size of Set"<<str": ";
    cin>>n;
    cout<<"Enter the elements you want to insert into your set"<<str":\n"; 
    for(int i=0;i<n;i++);
    {
        cin>>arr[i];
    }
    cout<<"Set "<<str " accepted successfully\n";
}
void Set::display(char str[])
{
    cout<<"Set "<<str<<" is = { ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
   }
   cout<<" }";
}
void Set::search(int X)
{
   cout<<"Enter the elements you want to search :";
   cin>>X;
   if(arr[i]==X)
   {
    return 1;
   }
   return 0;

}
void Set::intersection(Set A,Set B)
{
    int X,flag;
    for(int i=0;i<n;i++)
    {
    X = A.arr[i];
    flag = B.search(X);
    if(flag==1)
    {
        arr[n++]=X;
    }
    }

}

int main()
{
    cout<<"\n\nchoice no 1: Accept";
    cout<<"\n\nchoice no 2: Display";
    cout<<"\n\nchoice no 3: Search ";
    cout<<"\n\nchoice no 4: intersection";
    cout<<"\n\nchoice no 7: Exit";
    default : cout<<"Invalid choice please enter again :";
    cout<<"\nPlease Enter your choice :";
    cin>>ch;
    switch(ch)
    do
    {
        case 1 : A.accept('A');
                 B.accept('B');
        break; 
        case 2 : A.display('A');
                 B.display('B');
        break; 
        case 3 : A.search(X);
        break;
        case 3 : A.intersection(A,B);
        break; 
        case 7 : cout<<"Good  bye .........";
        break; 
    }
    while(ch!=7);


    return 0;


    
}