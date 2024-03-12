package GUI;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Question1 extends JFrame {

    JLabel ruleLabel1 = new JLabel();
    JLabel ruleLabel2 = new JLabel();
    JLabel ruleLabel3 = new JLabel();
    JPanel panel = new JPanel();
    JButton button1 = new JButton();
    JButton button2 = new JButton();


    Question1(){

        panel.setSize(600,300);
        panel.setBackground(new Color(255,153,153));


        ruleLabel1.setFont(new Font("Century Gothic",Font.BOLD,20));
        ruleLabel1.setText("Does it primarily live in --");




        button1.setBounds(100,200,150,50);
        button1.setFont(new Font("MV Boli",Font.BOLD,16));
        button1.setText("Land");

        button1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {

                for(int i=0;i<=4;i++) {
                    SelectionArray.select[i] = false;
                }
                Question1.this.dispose();
                Question2 question = new Question2();
            }
        });
        button2.setBounds(300,200,150,50);
        button2.setFont(new Font("MV Boli",Font.BOLD,16));
        button2.setText("Water");

        button2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {

                for(int i=5;i<=12;i++) {
                    SelectionArray.select[i] = false;
                }
                Question1.this.dispose();
                Question2 question = new Question2();
            }
        });


        panel.add(ruleLabel1);
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


