#include<iostream>
#include<conio.h>

class swapp
{ 
  private:
    int a,b,temp;

  public:

     void get();
     void display();

   
};
void swapp::get()
{
   std::cout<<"Enter the values from users\n";
   std::cin>>a>>b;
std::cout<<"\nValues are accepted successfully";
}
void swapp::display()
{
 temp=a;
 a=b;
b=temp;
std::cout<<"a = "<<a<<"  "<<"b = "<<b;
}
int main()
{
 swapp s;
 s.get();
s.display();
return 0;
}