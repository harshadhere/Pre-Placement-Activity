public class Multilevel
{
    public static void main(String Arg[])
    {
    DerivedX ddobj=new DerivedX();
    ddobj.fun();
    ddobj.gun();
    ddobj.sun();
    System.out.println(ddobj.A);
    System.out.println(ddobj.B);
    System.out.println(ddobj.X);
    System.out.println(ddobj.Y);
    System.out.println(ddobj.Z);
    }
    
}
class Base
{
    public int A;
    public int B;
    public Base()
    {
        System.out.println("inside base constructor");
        this.A=11;
        this.B=21;
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
class DerivedX extends Derived
{
    public int Z;

    public DerivedX()
    {
        System.out.println("inside derivedx  constructor");
        this.Z=200;
    }
    public void sun()
    {
        System.out.println("inside derivedx sun");

    }
}





