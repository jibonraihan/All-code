
package LoginSystem;

import java.awt.*;
import javax.swing.*;

public class loginPage {
    public static void main(String[] args) {

        // frame toiri
        JFrame fr = new JFrame("Login Page");
        fr.setSize(400,400);
        fr.setLayout(null);
        fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel title = new JLabel("USER LOGIN");
        title.setFont(new Font("Arial", Font.BOLD, 22));
        title.setBounds(130, 20, 150, 30);
        fr.add(title);

      
        JLabel userLabel = new JLabel("Email:");
        userLabel.setBounds(50, 80, 120, 25);
        fr.add(userLabel);

        JTextField userField = new JTextField();
        userField.setBounds(180, 80, 150, 25);
        fr.add(userField);

        JLabel phoneLabel = new JLabel("Phone:");
        phoneLabel.setBounds(50, 110, 120, 25);
        fr.add(phoneLabel);

        JTextField phoneField = new JTextField();
        phoneField.setBounds(180, 110, 150, 25);
        fr.add(phoneField);

        JLabel passLabel = new JLabel("Password:");
        passLabel.setBounds(50, 140, 120, 25);
        fr.add(passLabel);

        JPasswordField passField = new JPasswordField();
        passField.setBounds(180, 140, 150, 25);
        fr.add(passField);

        JLabel msg = new JLabel("");
        msg.setBounds(100, 220, 200, 25);
        fr.add(msg);

        // button 1
        JButton loginBtn = new JButton("Login");
        loginBtn.setBounds(80, 180, 100, 30);

        loginBtn.addActionListener(e -> {
            String user = userField.getText();
            String pass = new String(passField.getPassword());

            if(user.equals("m.jibonraihan@gmail.com") && pass.equals("123456")) {
                msg.setText("Login Successful");
            } else {
                msg.setText("Login Failed 😓");
            }
        });

        fr.add(loginBtn);

        // button 2
        JButton clrBtn = new JButton("Clear");
        clrBtn.setBounds(200, 180, 100, 30);

        clrBtn.addActionListener(e -> {
            userField.setText("");
            phoneField.setText("");
            passField.setText("");
            msg.setText("");
        });

        fr.add(clrBtn);

        
        fr.setVisible(true);
    }
}