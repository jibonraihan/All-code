package Calculator;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Calculator {
	double num1=0, num2=0, result=0;
	char op;
	Calculator(){
		JFrame frame= new JFrame("calculator");
		frame.setSize(300, 400);
		frame.setLayout(null);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		JTextField tf = new JTextField();
		tf.setBounds(20, 20, 230, 40);
		tf.setFont(new Font("Arial", Font.BOLD, 20));
		frame.add(tf);
		
		String butn[]= {
				"+","-","x","/",
				"7","8","9","%",
				"4","5","6",".",
				"0","1","2","3",
				"C", "="
		};
		int x=20, y=80;
		for(int i=0; i<butn.length; i++) {
			JButton btn=new JButton(butn[i]);
			if(butn[i].equals("C")) {
				btn.setBounds(20,y,110,40);
			}
			else if(butn[i].equals("=")) {
				btn.setBounds(140,y,110,40);
			}
			else
				btn.setBounds(x,y,50,40);
			
			btn.addActionListener(e ->{
				String cmd=btn.getText();
				try {
				if((cmd.charAt(0)>='0' && cmd.charAt(0)<='9') || cmd.equals(".")) {
					tf.setText(tf.getText()+cmd);
				}
				else if(cmd.equals("+") || cmd.equals("-") || cmd.equals("x") || cmd.equals("/")|| cmd.equals("%")){
					if(tf.getText().isEmpty()) return;
					num1=Double.parseDouble(tf.getText());
					op = cmd.charAt(0);
					tf.setText("");
				}
				else if(cmd.equals("=")) {
					if(tf.getText().isEmpty()) return;
					num2=Double.parseDouble(tf.getText());
					switch(op) {
					case '+': result = num1+num2; break;
					case '-': result = num1-num2; break;
					case 'x': result = num1*num2; break;
					case '/': 
						if(num2==0) {
							tf.setText("Error");
							return;
						}
						result = num1/num2; break;
					case '%': result = num1%num2; break;
					}
					tf.setText(""+result);
				}
				else if(cmd.equals("C")) {
					tf.setText("");
					num1=num2=result=0;	
				}
				}
				catch(Exception ex) {
					tf.setText("Error");
				}
			});
			frame.add(btn);
			if(!butn[i].equals("C") && !butn.equals("=")) {
				x+=60;
				if((i+1)%4 == 0) {
					x=20;
					y+=50;
				}
			}	
		}
		frame.setVisible(true);
	}
	
	public static void main(String[] arg) {
		new Calculator();
	}
}
