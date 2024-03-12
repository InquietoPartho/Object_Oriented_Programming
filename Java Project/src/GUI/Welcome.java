package GUI;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.ImageIcon;

public class Welcome extends JFrame {

        JLayeredPane jpane = new JLayeredPane();

        JButton button = new JButton();

        JLabel label1 = new JLabel();
        JLabel label2 = new JLabel();

        ImageIcon welcome_image = new ImageIcon("welcome.png");



        public Welcome(){

            label1.setBounds(0,0,330,350);
            label1.setBackground(new Color(153,255,204));
            label1.setOpaque(true);
            label1.add(button);

            label2.setBounds(10,10,330,350);
            label2.setIcon(welcome_image);

            jpane.setBounds(0,0,330,350);
            jpane.add(label2);
            jpane.add(label1);

            button.setBounds(85,265,150,50);
            button.setFont(new Font("MV Boli",Font.BOLD,16));
            button.setText("Continue!");

            button.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    Welcome.this.dispose();
                    RulesGui rules = new RulesGui();
                }
            });
            this.setLayout(null);
            this.setSize(330,385);
            this.setVisible(true);
            this.setLocationRelativeTo(null);
            this.setDefaultCloseOperation(EXIT_ON_CLOSE);

            this.add(jpane);

        }


}