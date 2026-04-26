/**
 * 
 */
/**
 * 
 */
module LabFinal2102 {
	 requires java.desktop;
}






/**import javax.swing.*;
import java.awt.event.*;

public class RegistrationForm {
    public static void main(String[] args) {

        JFrame f = new JFrame("Registration Form");

        // Labels
        JLabel l1 = new JLabel("Name:");
        l1.setBounds(50, 50, 100, 30);

        JLabel l2 = new JLabel("Address:");
        l2.setBounds(50, 100, 100, 30);

        JLabel l3 = new JLabel("Phone:");
        l3.setBounds(50, 150, 100, 30);

        JLabel l4 = new JLabel("Gender:");
        l4.setBounds(50, 200, 100, 30);

        JLabel l5 = new JLabel("Skills:");
        l5.setBounds(50, 250, 100, 30);

        JLabel l6 = new JLabel("Country:");
        l6.setBounds(50, 320, 100, 30);

        // Text Fields
        JTextField t1 = new JTextField();
        t1.setBounds(150, 50, 150, 30);

        JTextField t2 = new JTextField();
        t2.setBounds(150, 100, 150, 30);

        JTextField t3 = new JTextField();
        t3.setBounds(150, 150, 150, 30);

        // Radio Buttons
        JRadioButton r1 = new JRadioButton("Male");
        r1.setBounds(150, 200, 70, 30);

        JRadioButton r2 = new JRadioButton("Female");
        r2.setBounds(220, 200, 80, 30);

        ButtonGroup bg = new ButtonGroup();
        bg.add(r1);
        bg.add(r2);

        // Checkboxes
        JCheckBox c1 = new JCheckBox("Java");
        c1.setBounds(150, 250, 70, 30);

        JCheckBox c2 = new JCheckBox("Python");
        c2.setBounds(220, 250, 80, 30);

        JCheckBox c3 = new JCheckBox("C++");
        c3.setBounds(300, 250, 70, 30);

        // ComboBox
        String country[] = {"Bangladesh", "India", "USA"};
        JComboBox cb = new JComboBox(country);
        cb.setBounds(150, 320, 150, 30);

        // Button
        JButton btn = new JButton("Submit");
        btn.setBounds(150, 380, 100, 30);

        // Action
        btn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String name = t1.getText();
                String address = t2.getText();
                String phone = t3.getText();

                String gender = "";
                if (r1.isSelected()) gender = "Male";
                if (r2.isSelected()) gender = "Female";

                String skills = "";
                if (c1.isSelected()) skills += "Java ";
                if (c2.isSelected()) skills += "Python ";
                if (c3.isSelected()) skills += "C++ ";

                String country = cb.getSelectedItem().toString();

                JOptionPane.showMessageDialog(f,
                        "Name: " + name +
                        "\nAddress: " + address +
                        "\nPhone: " + phone +
                        "\nGender: " + gender +
                        "\nSkills: " + skills +
                        "\nCountry: " + country
                );
            }
        });

        // Add components
        f.add(l1); f.add(l2); f.add(l3);
        f.add(l4); f.add(l5); f.add(l6);
        f.add(t1); f.add(t2); f.add(t3);
        f.add(r1); f.add(r2);
        f.add(c1); f.add(c2); f.add(c3);
        f.add(cb); f.add(btn);

        f.setSize(450, 500);
        f.setLayout(null);
        f.setVisible(true);
    }
}
**/