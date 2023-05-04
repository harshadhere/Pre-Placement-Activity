class Base
{
    public int A=11;
    public int B=21;
    public Base()
    {
        System.out.println("inside base constructor");

    }
    public void fun()
        {
            System.out.println("inside base fun");

        }
}
class Derived extends Base
{
    public int X;
    public int Y;
    public Derived()
    {
        System.out.println("inside derived  constructor");
        this.X=51;
        this.Y=101;
    }
    public void gun()
    {
        System.out.println("inside derived gun");

    }
}
public class Single
{
    public static void main(String Arg[])
    {
    Derived dobj=new Derived();
    dobj.fun();
    dobj.gun();
    System.out.println(dobj.A);
    System.out.println(dobj.B);
    System.out.println(dobj.X);
    System.out.println(dobj.Y);
    }
    
}


