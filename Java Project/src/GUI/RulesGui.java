package GUI;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class RulesGui extends JFrame {

    JLabel ruleLabel1 = new JLabel();
    JLabel ruleLabel2 = new JLabel();
    JLabel ruleLabel3 = new JLabel();
    JPanel panel = new JPanel();
    JButton button = new JButton();


    RulesGui(){

        panel.setSize(600,300);
        panel.setBackground(new Color(153,255,255));

        //ruleLabel1.setBounds(200,150,500,500);
        ruleLabel1.setFont(new Font("Century Gothic",Font.BOLD,20));
        ruleLabel1.setText("Rules are simple!!!");

        //ruleLabel2.setBounds(200,150,500,500);
        ruleLabel2.setFont(new Font("Century Gothic",Font.BOLD,20));
        ruleLabel2.setText("You Choose A Creature and answer some questions");

       // ruleLabel3.setBounds(200,150,500,500);
        ruleLabel3.setFont(new Font("Century Gothic",Font.BOLD,20));
        ruleLabel3.setText(" Then, we Guess it!");


        button.setBounds(200,200,150,50);
        button.setFont(new Font("MV Boli",Font.BOLD,16));
        button.setText("Continue!");
        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                RulesGui.this.dispose();
                Select select = new Select();
            }
        });


        panel.add(ruleLabel1);
        panel.add(ruleLabel2);
        panel.add(ruleLabel3);
        this.setLayout(null);
        this.setSize(600,300);
        this.setVisible(true);
        this.setLocationRelativeTo(null);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.add(button);
        this.add(panel);

    }

}
