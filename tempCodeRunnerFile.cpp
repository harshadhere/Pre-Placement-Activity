#include<iostream>
using namespace std;
class Set
{
    public :
    int n;
    int arr[40];
    Set()
    {
        n=0;
    }
    void accept();
    void display();
    int search(int);
    void intersection(Set A,Set B);

};
void Set::accept()
{
    int i;
    cout<<"\nEnter the Size of Set ";
    cin>>n;
    cout<<"Enter the elements you want to insert into your set:\n"; 
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Set accepted successfully\n";
}
void Set::display()
{
    cout<<"Set is = { ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
   }
   cout<<" }";
}
int Set::search(int X)
{
   cout<<"Enter the elements you want to search :";
   cin>>X;
   for(int i=0;i<n;i++)
   if(arr[i]==X)
   {
    return 1;
   }
   return 0;
   

}
void Set::intersection(Set A,Set B)
{
    int X,flag;
    for(int i=0;i<A.n;i++)
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
    Set A;
    Set B;
    Set C;
    int X;
        int ch;
    cout<<"\n\nchoice no 1: Accept";
    cout<<"\n\nchoice no 2: Display";
    cout<<"\n\nchoice no 3: Search ";
    cout<<"\n\nchoice no 4: intersection";
    cout<<"\n\nchoice no 7: Exit";
    cout<<"\nPlease Enter your choice :";
    cin>>ch;
    switch(ch)
    do
    {
        case 1 : A.accept();
                 B.accept();
        break; 
        case 2 : A.display();
                 B.display();
        break;  
        case 3 : A.search(X);
        break;
        case 4 : C.intersection(A,B);
        break; 
        case 7 : cout<<"Good  bye .........";
        break; 
    default : cout<<"Invalid choice please enter again :";

    }
    while(ch!=7);


    return 0;


    
}