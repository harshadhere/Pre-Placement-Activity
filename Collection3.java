import java.util.*;


class Book {
    public String Name;
    public int Prize;

    public Book(String s,int i)
    {
        this.Name = s;
        this.Prize= i;

    }
    public void display()
    {
        System.out.println("BOOK Name : "+this.Name+" Prize : "+this.Prize);
    }

    
}
class Collection3
{
     public static void main(String str[])
     {
        LinkedList<Book> lobj = new LinkedList<Book>();
        Book bobj1 =  new Book("Let us C",400);
        Book bobj2 =  new Book("C programing",789);
        Book bobj3  =  new Book("C++ Programing",2343);
        Book bobj4 = new Book("Angular java",3545);
        Book bobj5  = new Book("Data structure",8989);

        lobj.add(bobj1);
        lobj.add(bobj2);
        lobj.add(bobj3);
        lobj.add(bobj4);
        lobj.add(bobj5);

        Iterator iobj = lobj.iterator();
        Book bref = null;
        
        System.out.println("Elements of linked list are : ");
        while(iobj.hasNext())
        {
            bref = (Book)iobj.next();
            bref.display();
        }
        lobj.clear();
     }
}