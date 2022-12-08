import java.awt.*;
import java.awt.event.*;

public class GUI3
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

        fobj.setSize(500,500);

        fobj.setVisible(true);

        fobj.addWindowListener(new MarvellousListner());
        
   
      }
}
class MarvellousListner implements WindowListener
{
   public void windowDeactivated(WindowEvent obj){};
   public void windowActivated(WindowEvent obj1){}; 
   public void windowDeiconified(WindowEvent obj2){};
   public void windowIconified(WindowEvent obj3){};
   public void windowClosed(WindowEvent obj4){};
   public void windowClosing(WindowEvent obj5){
    System.exit(0);
   };
   public void windowOpened(WindowEvent obj6){};

}
