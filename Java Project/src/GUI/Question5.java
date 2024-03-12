package GUI;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Question5 extends JFrame {

    JLabel ruleLabel = new JLabel();

    JPanel panel = new JPanel();
    JButton button1 = new JButton();
    JButton button2 = new JButton();


    Question5(){

        panel.setSize(600,300);
        panel.setBackground(new Color(255,178,105));


        ruleLabel.setFont(new Font("Century Gothic",Font.BOLD,20));
        ruleLabel.setText("Does it have SCALE's?");




        button1.setBounds(100,200,150,50);
        button1.setFont(new Font("MV Boli",Font.BOLD,16));
        button1.setText("Yes");

        button1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {


                for(int i=0;i<=7;i++) {
                    SelectionArray.select[i] = false;
                }
                for(int i=9;i<=12;i++) {
                    SelectionArray.select[i] = false;
                }


                Question5.this.dispose();
                Question6 question = new Question6();

            }
        });
        button2.setBounds(300,200,150,50);
        button2.setFont(new Font("MV Boli",Font.BOLD,16));
        button2.setText("No");

        button2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {

                SelectionArray.select[8]= false;

                Question5.this.dispose();
                Question6 question = new Question6();
            }
        });


        panel.add(ruleLabel);
        //panel.add(ruleLabel2);
       // panel.add(ruleLabel3);
        this.setLayout(null);
        this.setSize(600,300);
        this.setVisible(true);
        this.setLocationRelativeTo(null);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.add(button1);
        this.add(button2);
        this.add(panel);

    }

}


