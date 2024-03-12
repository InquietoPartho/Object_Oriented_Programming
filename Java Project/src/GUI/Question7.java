package GUI;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Question7 extends JFrame {

    JLabel ruleLabel = new JLabel();

    JPanel panel = new JPanel();
    JButton button1 = new JButton();
    JButton button2 = new JButton();



    Question7(){

        panel.setSize(600,300);
        panel.setBackground(new Color(224,224,224));


        ruleLabel.setFont(new Font("Century Gothic",Font.BOLD,20));
        ruleLabel.setText("Is it a common Predator of Africa savannah?");



        button1.setBounds(100,200,150,50);
        button1.setFont(new Font("MV Boli",Font.BOLD,16));
        button1.setText("yes");
        button1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {

                for(int i=0;i<=8;i++) {
                    SelectionArray.select[i] = false;
                }
                SelectionArray.select[11] = false;
                SelectionArray.select[12] = false;
                Question7.this.dispose();
                Question8 question = new Question8();
            }
        });


        button2.setBounds(300,200,150,50);
        button2.setFont(new Font("MV Boli",Font.BOLD,16));
        button2.setText("no");
        button2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {



                SelectionArray.select[9] = false;
                SelectionArray.select[10] = false;

                Question7.this.dispose();
                Question8 question = new Question8();
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


