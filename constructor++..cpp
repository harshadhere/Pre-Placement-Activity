#include<iostream>
using namespace std;
class Maths
{
public:
    int iNo1;
    int iNo2;
     Maths()
     {
         iNo1=0;
         iNo2=0;
     }
     Maths(int A,int B)
     {
         iNo1=A;
         iNo2=B;
     }
     int Addition()
     {
          int ADD = iNo1 + iNo2;
          return ADD;
     }

     int substraction()
     {
         int SUB = iNo1 - iNo2;
          return SUB;
     }


};
int main()
{
   Maths m1;
   Maths m2(33,55);
   int ret= m2.substraction();
   int reet= m1.Addition();

   cout<<"Addition is"<<" "<<ret<<endl;
      return 0;

}
