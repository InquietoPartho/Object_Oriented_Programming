package GUI;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import PrinciplesOfOOP.*;

public class Question10 extends JFrame {

    JLabel ruleLabel = new JLabel();

    JPanel panel = new JPanel();
    JButton button1 = new JButton();
    JButton button2 = new JButton();



    Question10(){

        panel.setSize(600,300);
        panel.setBackground(new Color(204,255,204));


        ruleLabel.setFont(new Font("Century Gothic",Font.BOLD,20));
        ruleLabel.setText("Is it very small and well known for its colonies?");



        button1.setBounds(100,200,150,50);
        button1.setFont(new Font("MV Boli",Font.BOLD,16));
        button1.setText("yes");
        button1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {

                for(int i=0;i<=5;i++) {
                    SelectionArray.select[i] = false;
                }
                for(int i=7;i<=12;i++) {
                    SelectionArray.select[i] = false;
                }

                Question10.this.dispose();
                SelectionArray.checkArray();
                Case.Switch();
                Case.printResult();

            }
        });


        button2.setBounds(300,200,150,50);
        button2.setFont(new Font("MV Boli",Font.BOLD,16));
        button2.setText("no");
        button2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {



                SelectionArray.select[6] = false;


                Question10.this.dispose();
               SelectionArray.checkArray();
                Case.Switch();
                Case.printResult();
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


