package Final;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


class Applicant {
    private String name;
    private String applicantID;
    private String department;
    private String phoneNumber;

 
    Applicant(String name, String ID, String dep, String phone) {
        this.name = name;
        this.applicantID = ID;
        this.department = dep;
        this.phoneNumber = phone;
    }

   
    public String getInfo() {
        return "Name: " + name +
               "\nApplicant ID: " + applicantID +
               "\nDepartment: " + department +
               "\nPhone: " + phoneNumber;
    }
}

public class Question3 extends JFrame implements ActionListener {

    JTextField nameF, idF, phoneF;
    JCheckBox english, cse, math, acc;
    JTextArea tArea;
    JButton submit, clear;

    Question3() {
        setTitle("Admission Form");
        setSize(400, 470);
        setLayout(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

   
        JLabel nameLabel = new JLabel("Name:");
        nameLabel.setBounds(30, 30, 100, 20);
        add(nameLabel);

        JLabel idLabel = new JLabel("Applicant ID:");
        idLabel.setBounds(30, 70, 100, 20);
        add(idLabel);

        JLabel phoneLabel = new JLabel("Phone:");
        phoneLabel.setBounds(30, 110, 100, 20);
        add(phoneLabel);

        JLabel depLabel = new JLabel("Department:");
        depLabel.setBounds(30, 150, 100, 20);
        add(depLabel);

    
        nameF = new JTextField();
        nameF.setBounds(150, 30, 180, 25);
        add(nameF);

        idF = new JTextField();
        idF.setBounds(150, 70, 180, 25);
        add(idF);

        phoneF = new JTextField();
        phoneF.setBounds(150, 110, 180, 25);
        add(phoneF);

     
        english = new JCheckBox("English");
        english.setBounds(150, 150, 100, 20);
        add(english);
        
        math = new JCheckBox("Mathematics");
        math.setBounds(150, 180, 100, 20);
        add(math);
        
        cse = new JCheckBox("CSE");
        cse.setBounds(150, 210, 100, 20);
        add(cse);

        acc = new JCheckBox("Accounting");
        acc.setBounds(150, 240, 100, 20);
        add(acc);

  
        submit = new JButton("Submit");
        submit.setBounds(70, 280, 100, 30);
        add(submit);

        clear = new JButton("Clear");
        clear.setBounds(200, 280, 100, 30);
        add(clear);

    
        tArea = new JTextArea();
        tArea.setBounds(30, 320, 320, 100);
        add(tArea);

    
        submit.addActionListener(this);
        clear.addActionListener(this);

        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {

        if (e.getSource() == submit) {
            String name = nameF.getText();
            String id = idF.getText();
            String phone = phoneF.getText();

            String dept = "";
            if (english.isSelected()) dept += "English ";
            if (cse.isSelected()) dept += "CSE ";
            if (math.isSelected()) dept += "Mathametics ";
            if (acc.isSelected()) dept += "Accounting ";

            Applicant app = new Applicant(name, id, dept, phone);

            tArea.setText(app.getInfo());
        }

        if (e.getSource() == clear) {
            nameF.setText("");
            idF.setText("");
            phoneF.setText("");
            english.setSelected(false);
            cse.setSelected(false);
            math.setSelected(false);
            acc.setSelected(false);
            tArea.setText("");
        }
    }

    public static void main(String[] args) {
        new Question3();
    }
}