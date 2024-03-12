package GUI;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Select extends JFrame {

        JLayeredPane jpane = new JLayeredPane();

        JButton button1 = new JButton();
        JButton button2 = new JButton();
        JButton button3 = new JButton();
        JButton button4 = new JButton();
        JButton button5 = new JButton();
        JButton button6 = new JButton();
        JButton button7 = new JButton();
        JButton button8 = new JButton();
        JButton button9 = new JButton();
    JButton button10 = new JButton();
    JButton button11= new JButton();
    JButton button12= new JButton();
    JButton button13= new JButton();
    JButton button14= new JButton();




    JLabel label1 = new JLabel();
        JLabel label2 = new JLabel();

        ImageIcon image1 = new ImageIcon("dolphin.jpeg");
        ImageIcon image2 = new ImageIcon("shark.jpeg");
        ImageIcon image3 = new ImageIcon("shrimp.png");
        ImageIcon image4 = new ImageIcon("octopus.png");
        ImageIcon image5 = new ImageIcon("crab.png");
        ImageIcon image6 = new ImageIcon("butterfly.png");
        ImageIcon image7 = new ImageIcon("ant.png");
        ImageIcon image8 = new ImageIcon("turtle.png");
        ImageIcon image9 = new ImageIcon("lizard.png");
        ImageIcon image10 = new ImageIcon("lion.png");
        ImageIcon image11 = new ImageIcon("leopard.png");
        ImageIcon image12= new ImageIcon("deer.png");
        ImageIcon image13= new ImageIcon("cow.png");




        Select(){

            button1.setIcon(image1);
            button2.setIcon(image2);
            button3.setIcon(image3);
            button4.setIcon(image4);
            button5.setIcon(image5);
            button6.setIcon(image6);
            button7.setIcon(image7);
            button8.setIcon(image8);
            button9.setIcon(image9);
            button10.setIcon(image10);
            button11.setIcon(image11);
            button12.setIcon(image12);
            button13.setIcon(image13);

            button14.setFont(new Font("MV Boli",Font.BOLD,12));
            button14.setText("Continue!");

            button14.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {

                   Question1 question = new Question1();
                   Select.this.dispose();
                }
            });


            this.setLayout(new GridLayout(5,3));
            this.setSize(1000,600);
            this.setVisible(true);
            this.setLocationRelativeTo(null);
            this.setDefaultCloseOperation(EXIT_ON_CLOSE);

            this.add(button1);
            this.add(button2);
            this.add(button3);
            this.add(button4);
            this.add(button5);
            this.add(button6);
            this.add(button7);
            this.add(button8);
            this.add(button9);
            this.add(button10);
            this.add(button11);
            this.add(button12);
            this.add(button13);
            this.add(button14);


        }


}