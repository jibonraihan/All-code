package ClassAndPractice;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Gui {
	public static void main(String[] args) {
		JFrame f=new JFrame();
		JButton b=new JButton("click");
		b.setBounds(130,100,100,40);
		f.add(b);
		f.setSize(400,500);
		f.setLayout(null);
		f.setVisible(true);
		JButton bt=new JButton("ok");
		bt.setBounds(180,110,100,40);
		f.add(bt);
		JTextField tf = new JTextField("Text");
		JTextField tf2 = new JTextField("Text2");
		
		f.add(tf);
		tf.setBounds(100,50, 90, 80);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		tf2.setText(null);
		
		tf.addActionListener(new ActionListener(){
			@Override
			public void actionPerformed(ActionEvent e) {
				System.out.println("Text entered: " + tf.getText());
				
			}
		});
		
	}
}
