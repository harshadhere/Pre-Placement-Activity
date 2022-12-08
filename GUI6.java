import java.awt.*;
import java.awt.event.*;

public class GUI6
{
       public static void main(String[] args) 
       {
           MarvellousFrame mobj = new MarvellousFrame("Marvellous PPA41");

       }
}
class MarvellousFrame  {

    public MarvellousFrame(String title)
     {   
        Frame fobj = new Frame(title);
        Button bobj = new Button("OK");
        
        fobj.add(bobj);
       

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

    

