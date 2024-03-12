package GUI;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Question6 extends JFrame {

    JLabel ruleLabel = new JLabel();

    JPanel panel = new JPanel();
    JButton button1 = new JButton();
    JButton button2 = new JButton();
    JButton button3 = new JButton();


    Question6(){

        panel.setSize(600,300);
        panel.setBackground(new Color(104,255,221));


        ruleLabel.setFont(new Font("Century Gothic",Font.BOLD,20));
        ruleLabel.setText("How SPEEDY is it?");



        button1.setBounds(50,200,150,50);
        button1.setFont(new Font("MV Boli",Font.BOLD,16));
        button1.setText("Most Speedy");
        button1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {

                for(int i=0;i<=9;i++) {
                    SelectionArray.select[i] = false;
                }
                SelectionArray.select[11] = false;
                SelectionArray.select[12] = false;
                Question6.this.dispose();
                Question7 question = new Question7();

            }
        });


        button2.setBounds(200,200,150,50);
        button2.setFont(new Font("MV Boli",Font.BOLD,16));
        button2.setText("Moderate");
        button2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {



                SelectionArray.select[7] = false;

                SelectionArray.select[10] = false;

                Question6.this.dispose();
                Question7 question = new Question7();

            }
        });

        button3.setBounds(350,200,150,50);
        button3.setFont(new Font("MV Boli",Font.BOLD,16));
        button3.setText("VERY slow");
        button3.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {

                for(int i=0;i<=6;i++) {
                    SelectionArray.select[i] = false;
                }
                for(int i=8;i<=12;i++) {
                    SelectionArray.select[i] = false;
                }
                Question6.this.dispose();
                Question7 question = new Question7();

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
        this.add(button3);
        this.add(panel);

    }

}


