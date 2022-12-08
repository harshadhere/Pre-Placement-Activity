import javax.swing.*;
import java.awt.event.*;

public class GUI5
{
       public static void main(String[] args) 
       {
           MarvellousFrame mobj = new MarvellousFrame("Marvellous PPA41");

       }
}
class MarvellousFrame  {

    public MarvellousFrame(String title)
     {   
        JFrame fobj = new JFrame(title);

        fobj.setSize(500,500);

        fobj.setVisible(true);

        fobj.addWindowListener(new MarvellousListner());
        
   
      }
}
class MarvellousListner extends WindowAdapter
{
 
   public void windowClosing(WindowEvent obj5){
    System.exit(0);
   } 
  

}

