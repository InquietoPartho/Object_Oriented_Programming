package GUI;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Question2 extends JFrame {

    JLabel ruleLabel = new JLabel();
    JPanel panel = new JPanel();
    JButton button1 = new JButton();
    JButton button2 = new JButton();
    JButton button3 = new JButton();


    Question2(){

        panel.setSize(600,300);
        panel.setBackground(new Color(204,153,253));


        ruleLabel.setFont(new Font("Century Gothic",Font.BOLD,20));
        ruleLabel.setText("Is it Carnovore or Harbivore???");




        button1.setBounds(50,200,150,50);
        button1.setFont(new Font("MV Boli",Font.BOLD,16));
        button1.setText("Carnivore");
        button1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {


                SelectionArray.select[11]= false;
                SelectionArray.select[12]= false;
                Question2.this.dispose();
                Question3 question = new Question3();
            }
        });


        button2.setBounds(200,200,150,50);
        button2.setFont(new Font("MV Boli",Font.BOLD,16));
        button2.setText("Herbivore");
        button2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {

                SelectionArray.select[1]= false;
                SelectionArray.select[9]= false;
                SelectionArray.select[10]= false;
                Question2.this.dispose();
                Question3 question = new Question3();
            }
        });

        button3.setBounds(350,200,150,50);
        button3.setFont(new Font("MV Boli",Font.BOLD,16));
        button3.setText("IDK");
        button3.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {


                Question2.this.dispose();
                Question3 question = new Question3();
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


