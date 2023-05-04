
public class OOP 
{
    public static void main(String Arg[])
    {

        System.out.println("inside main function");

        Arithematic obj1=new Arithematic();
        Arithematic obj2=new Arithematic(20,9);
            int iRet=0;
iRet=obj1.Addition();
System.out.println("addition is:"+iRet);
iRet=obj1.Substraction();
System.out.println("substraction is:"+iRet);

iRet=obj2.Addition();
System.out.println("addition is:"+iRet);
iRet=obj2.Substraction();
System.out.println("substraction is:"+iRet);

    }
    
}

class Arithematic
{
    public int No1;
    public int No2;
    public Arithematic()
    {
        System.out.println("inside default constructor");

        this.No1=0;
        this.No2=0;

    }
    public Arithematic(int i,int j)
    {
        System.out.println("inside parameterized constructor");

        this.No1=i;
        this.No2=j;
    }
    public int Addition()
    {
        int Ans=0;
        Ans=this.No1+this.No2;
        return Ans;
    }
    public int Substraction()
    {
        int Ans=0;
        Ans=this.No1-this.No2;
        return Ans;
    }
}