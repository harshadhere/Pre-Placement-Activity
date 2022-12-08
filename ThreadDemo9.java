import java.lang.*;
import java.util.*;
class Data
{
    public int Arr[];
    public Data(int iSize)
    {
        Arr = new int[iSize];
    }
    
    void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Numbers :");
        for(int i=1; i< Arr.length; i++)
        {
            Arr[i]=sobj.nextInt();
        }

    }
}
class DemoEven extends Thread
{
    public Data dobj;
    public DemoEven(Data obj)
    {
        dobj = obj;
    }
    for(int i = 1;i<dobj.Arr.length;i++)
    {
        if(dobj.i%2==0)
        {
            System.out.println("Number is eve "+dobj.Arr[i]);
        }
    }
}
class DemoOdd extends Thread
{
    public Data dobj;
    public DemoOdd(Data obj)
    {
        dobj = obj;
    }
     for(int i = 0 ; i< dobj.Arr.length; i++)
      {
         if(dobj.i%2!=0)
        {
            System.out.println("Number is odd "+dobj.Arr[i]);
        }
    }
}



public class ThreadDemo9 {
    public static void main(String a[]) throws InterruptedException
    {
       Data obj1 = new Data(10);
       obj1.Accept();

       DemoEven eobj = new DemoEven(obj1);
       DemoOdd fobj = new DemoOdd(obj1);

       Thread t1 = new Thread(eobj);
       Thread t2 = new Thread(fobj);

       t1.start();
       t2.start();

       t1.join();
       t2.join();


    }
    
}
