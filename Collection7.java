import java.util.Stack;

public class Collection7 {
    public static void main(String args[])
    {
        Stack<Character> sobj = new Stack<Character>();

        sobj.push('s');
        sobj.push('u');
        sobj.push('r');
        sobj.push('a');
        sobj.push('j');
        sobj.push('c');
        System.out.println("Elements of stack are : "+sobj);

        System.out.println("Elements of stack are : "+sobj.push());


    }
}
