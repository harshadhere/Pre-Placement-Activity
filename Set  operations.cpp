#include<iostream>
using namespace std;

class Set_Operation
{
  int arr[10],n;
  public:
  Set_Operation()
  {
     n=0;
  }
  void add();  //function declaration
  void display();
  void remove_index(int index);
  void remove_value(int value);
  int contains(int element);
  int size()
  { return(n);}
  Set_Operation intersection(Set_Operation S2);
  Set_Operation union_set(Set_Operation S2);
  Set_Operation difference(Set_Operation S2);
  void subset(Set_Operation S2);
};

void Set_Operation::subset(Set_Operation S2)
{
 int flag;
 for(int i=0;i<n;i++)
 { flag=0;
  for(int j=0;j<S2.n;j++)
  {
    if(arr[i]==S2.arr[j])
    {
    flag=1;
    break;
    }
   }
  }
  if(flag==1)
    {
    cout<<"\nS1 is a subset of S2";
     }
 if(flag==0)
 {
   cout<<"\S1 is a not subset of S2";
 }

}











Set_Operation Set_Operation::difference(Set_Operation S2)
{
  Set_Operation S3;
  int flag;
  for(int i=0;i<n;i++)
  { flag=0;
    for(int j=0;j<S2.n;j++)
    {
      if(arr[i]==S2.arr[j])
      {
	flag=1;
	break;
      }
    }
    if(flag==0)
    {
      S3.arr[S3.n]=arr[i];
      S3.n++;
    }
  }
 return S3;
}








Set_Operation Set_Operation::union_set(Set_Operation S2)
{
   Set_Operation S3;
   for(int i=0;i<n;i++)
   {
     S3.arr[S3.n]=arr[i];
     S3.n++;
   }
   int flag;
   for(int j=0;j<S2.n;j++)
   {
     flag=0;
     for(int i=0;i<n;i++)
      {
	 if(S2.arr[j]==arr[i])
	 {
	   flag=1;
	   break;
	 }
      }
     if(flag==0)
     {
      S3.arr[S3.n]=S2.arr[j];
      S3.n++;
     }
   }
   return S3;
}


Set_Operation Set_Operation::intersection(Set_Operation S2)
{
  Set_Operation S3;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<S2.n;j++)
    {
      if(arr[i]==S2.arr[j])
      {
	S3.arr[S3.n]=arr[i];
	S3.n++;
	break;
      }
    }
  }
  return S3;
}



int Set_Operation::contains(int element)
{

  for(int i=0;i<n;i++)
  {
     if(arr[i]==element)
     {
       return(1);
     }
  }
  return(0);
}






void Set_Operation::remove_value(int value)
{
  int flag=0,index;
  for(int i=0;i<n;i++)
  {
     if(arr[i]==value)
     {
       flag=1;
       index=i;
       break;
     }
  }
  if(flag==1)
  {
    for(int i=index;i<n-1;i++)
    {
      arr[i]=arr[i+1];
    }
    n=n-1;
    cout<<"\nvalue is removed";
  }
  else
    cout<<"\n value not found to remove";

}












void Set_Operation::remove_index(int index)
{
  for(int i=index;i<n-1;i++)
  {
   arr[i]=arr[i+1];
  }
  n=n-1;
}






void Set_Operation::add()    // function definition
{
 int val;
 cout<<"Enter value";
 cin>>val;
 if(n==0)
 {
   arr[n]=val;
   n++;
 }
 else
 {
    if(!contains(val))
    {
      arr[n]=val;
      n++;
    }
 }
}
void Set_Operation::display()
{
  cout<<"\nSet is ";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
}

int main()
{


  Set_Operation S1,S2;
  int choice;
  char cont;
  do
  {
     cout<<"\n1.Add an Element in Set 1";
     cout<<"\n2. Display";
     cout<<"\n3.Remove by index";
     cout<<"\n4.Remove by value";
     cout<<"\n5.Contain an element";
     cout<<"\n6.Size of set";
     cout<<"\n7.Add an Element in Set 2";
     cout<<"\n8. Intersection of two sets";
     cout<<"\n9. Union of two sets";
     cout<<"\n10. Difference of two sets";
     cout<<"\n11. Subset";
     cout<<"\nEnter your choice";
     cin>>choice;
     switch(choice)
     {
       case 1:
       case 7:int num1,num2;
	      cout<<"\n Enter number of elements you want in Set ";
	      if(choice==1)
	      {
	      cin>>num1;
	      for(int i=0;i<num1;i++)
		S1.add();
	      }
	      else
	      {
		cin>>num2;
		for(int i=0;i<num2;i++)
		  S2.add();
	      }
	      break;
       case 2:
	      S1.display();
	      S2.display();
	      break;
       case 3: cout<<"\nEnter index to remove"  ;
	    int index;
	    cin>>index;
	    S1.remove_index(index);
	    break;
       case 4:
	    cout<<"\nEnter value to remove";
	    int value;
	    cin>>value;
	    S1.remove_value(value);
	    break;
       case 5:
	    int element;
	    cout<<"enter an element to search";
	    cin>>element;
	    if(S1.contains(element))
	       cout<<"\npresent";
	    else
	       cout<<"\nNot present";
	    break;
        case 6:
	     cout<<"\nTotal number of elements in the set are "<<S1.size();
	     break;
        case 8:
	     Set_Operation S3;
	     S3=S1.intersection(S2);
	     cout<<"\n Intersection is ";
	     S3.display();
	     break;
        case 9:
	    Set_Operation S4;
	    S4=S1.union_set(S2);
	    cout<<"\n Union is ";
	    S4.display();
	    break;
       case 10:
	    Set_Operation S5;
	    S5=S1.difference(S2);
	    cout<<"\n Difference is ";
	    S5.display();
	    break;
       case 11:
	     S1.subset(S2);
	     break;
     }
     cout<<"\nDo you want to continue Yes(Y)/No(N)" ;
     cin>>cont;
     }while(cont=='Y');



  getch();
  return(0);
}
