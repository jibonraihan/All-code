package Innner_Class;

class Outr{
	static int x=50;
	
	static class Innr{
		
		void display() {
			System.out.println("Value of x: "+ x);
		}
	}
}
public class nestedInnerClass {
	public static void main(String[] arg) {
		Outr.Innr in = new Outr.Innr();
		in.display();
	}
}
