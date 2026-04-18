package Calculator;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class practiceFrameandField {
	practiceFrameandField(){
		JFrame f=new JFrame("Login");
		f.setSize(300, 250);
		f.setLayout(null);
		f.setDefaultCloseOperation(f.EXIT_ON_CLOSE);
		
		JLabel title= new JLabel("LOGIN FORM");
		title.setBounds(90, 5, 120, 50);
		title.setFont(new Font("Times New Roman", Font.CENTER_BASELINE, 15));
		f.add(title);
		
		JLabel un=new JLabel("username");
		un.setBounds(10, 50, 60, 25);
		f.add(un);
		
		JTextField tf = new JTextField();
		tf.setBounds(80, 50, 170, 25);
		tf.setFont(new Font("Arial", Font.BOLD, 16));
		f.add(tf);
		
		JLabel pas = new JLabel("password");
		pas.setBounds(10, 85, 60, 25);
		f.add(pas);
		
		JPasswordField pasf=new JPasswordField();
		pasf.setBounds(80, 85, 170, 25);
		pasf.setFont(new Font("Arial", Font.BOLD, 16));
		f.add(pasf);
		
		JLabel ei = new JLabel("👁");
		ei.setBounds(255, 85, 25, 25);
		ei.setCursor(new Cursor(Cursor.HAND_CURSOR));
		f.add(ei);
		
		pasf.setEchoChar('*');
		final boolean [] vis= {false};
		
		JButton jb=new JButton("Login");
		jb.setBounds(100, 140, 80, 25);
		jb.setFont(new Font("Arial", Font.CENTER_BASELINE, 15));
		jb.setCursor(new Cursor(Cursor.HAND_CURSOR));
		f.add(jb);
		
		ei.addMouseListener(new MouseAdapter() {
			public void mouseClicked(MouseEvent e) {
				if(vis[0]) {
					pasf.setEchoChar('*');
					ei.setText("👁");
					vis[0]= false;
				} else {
					pasf.setEchoChar((char) 0);
					ei.setText("🙈");
					vis[0]=true;
				}
			}
			
		});
		
		jb.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				String uname= tf.getText();
				String pass=new String(pasf.getPassword());
				if(uname.equals("raihan")&& pass.equals("12345")) {
					JOptionPane.showMessageDialog(f, "Login Successfull");
				}else {
					JOptionPane.showMessageDialog(f, "Login Failed");
				}
			}
		});
		
		f.setVisible(true);
	}
	
	
	public static void main(String[] arg) {
		new practiceFrameandField();
	}
}
