package GUI;

import javax.swing.*;
import java.awt.*;

public class Leopard extends JFrame {

    JPanel panel = new JPanel();
    JLabel label1 = new JLabel();
    JLabel label2 = new JLabel();
    JLabel label3 = new JLabel();
    JLabel label4 = new JLabel();
    JLabel label5 = new JLabel();
    JLabel label6 = new JLabel();
    JLayeredPane layer = new JLayeredPane();
    ImageIcon cow = new ImageIcon("leopard.png");


     public Leopard(){



        //panel.setLayout(new FlowLayout(FlowLayout.CENTER));
         label3.setBounds(0,0,800,600);
         label3.setBackground(new Color(253,204,253));
         label3.setOpaque(true);
        label3.add(label1);
        label3.add(label2);
        label3.add(label4);
         label3.add(label5);
         label3.add(label6);

         label1.setBounds( 300,20,200,200);
         label1.setIcon(cow);

        label2.setBounds(290,200,400,100);
        label2.setFont(new Font("MV Boli",Font.BOLD,20));
        label2.setText("My Guess Is...\n LEOPARD!!!");

         label4.setBounds(10,200,800,300);
         label4.setFont(new Font("MV Boli",Font.TRUETYPE_FONT,15));
         label4.setText("Type : Carnivorous | Name : Leopard | Attribute : Rosette-patterned coat ");

         label5.setBounds(10,220,600,300);
         label5.setFont(new Font("MV Boli",Font.TRUETYPE_FONT,15));
         label5.setText("Habitat : Tropical forests, rainforests, savannas, grasslands | Size : 110 ");

         label6.setBounds(10,240,600,300);
         label6.setFont(new Font("MV Boli",Font.TRUETYPE_FONT,15));
         label6.setText(" Movement : walking,trotting,galloping | Speed : Moderate");

         layer.setBounds(0,0,800,600);
        layer.add(label3);
        //layer.add(label1);
        //layer.add(label2);
       // layer.setBackground(new Color(255,153,255));
        //layer.setOpaque(true);


        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
         this.setLayout(null);
         this.setSize(800,600);
         this.setVisible(true);
         this.setBackground(new Color(255,153,255));
         this.setLocationRelativeTo(null);
         this.add(layer);
        // this.add(panel);
        // panel.add(label1);
         //panel.add(label2);
     }



}
