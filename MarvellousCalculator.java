
import javax.swing.*;
import java.awt.event.*;
import java.nio.channels.InterruptibleChannel;

class Calculator extends WindowAdapter implements ActionListener
{  
  public JFrame mainframe;
  public JButton b1,b2,b3,b4,b5;
  public JTextField T1,T2;
  public JLabel L1;
  public Integer No1,No2;
  public Calculator(int width,int hight,String title)
  {
    mainframe = new JFrame(title);
    mainframe.setSize(width,hight);
    mainframe.setVisible(true);


    mainframe.addWindowListener(this);

    b1 = new JButton("Add");
    b2 = new JButton("Sub");
    b3 = new JButton("Mult");
    b4 = new JButton("Div");
    b5 = new JButton("Decimal");


    b1.setBounds(1,280,80,40);//x,y,w,h
    b2.setBounds(90,280,80,40);
    b3.setBounds(180,280,80,40);
    b4.setBounds(270,280,80,40);
    b5.setBounds(1,380,80,80);


    mainframe.add(b1);
    mainframe.add(b2);
    mainframe.add(b3);
    mainframe.add(b4);
    mainframe.add(b5);

    T1 = new JTextField();
    T2 = new JTextField();

    T1.setBounds(70,100,70,30);
    T2.setBounds(220,100,70,30);
    mainframe.add(T1);
    mainframe.add(T2);

    L1 = new JLabel();
    L1.setBounds(150,25,200,100);
    mainframe.add(L1);

    b1.addActionListener(this);
    b2.addActionListener(this);
    b3.addActionListener(this);
    b4.addActionListener(this);
    b5.addActionListener(null);

    mainframe.setLayout(null);
    mainframe.setVisible(true);
  }

    public void windowClosing(WindowEvent obj)
    {
       System.exit(0);
    }
    public void actionPerformed(ActionEvent obj)
    {
        try{

            No1 = Integer.parseInt(T1.getText());
            No2= Integer.parseInt(T2.getText());

            if(obj.getSource()==b1)
            {
                   
                L1.setText("Addition is :"+(No1 + No2));
             
            }
            else if(obj.getSource()==b2)
            {
                L1.setText("Substraction is :"+(No1 - No2));

            }else if(obj.getSource()==b3)
            {
                L1.setText("Multiplication is :"+(No1 * No2));
            }else if(obj.getSource()==b4)
            {

                L1.setText("Division is : "+(No1 / No2));
            }
           
        }
        catch(Exception eobj)
        {

        }
    }

}

class MarvellousCalculator {
    
    
    public static void main(String[] args) 
    {
      Calculator cobj = new Calculator(401,400,"Marvellous Calculator");
    }
}

