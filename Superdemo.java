class Base{
    int A;
    public Base()
    {
        System.out.println("inside base default constructor");
        this.A=10;
    }
    public Base(int i)
    {
        System.out.println("inside base parameterized constructor");
        this.A=i;
    }
    public void fun()
    {
        System.out.println("inside base fun");
    }
}
class Derived extends Base
{
    public int A;
    public Derived()
    {
        super(11);
        System.out.println("inside DERIVED default constructor");
        this.A=220;
    }
public void gun()
{
    System.out.println("inside derived gun");
    System.out.println(+A);
    System.out.println(+this.A);
    System.out.println(+super.A);
fun();

}
}

public class Superdemo {
    public static void main(String Arg[])
    {
        Derived dobj=new Derived();
        

    }
    
}
