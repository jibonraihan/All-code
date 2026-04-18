package ClassAndPractice;

class Outer{
	int val;
	
	class Inner{
		public void print() {
			System.out.println("Inner class");	
			}
	}
	
	void Show_Inner() {
		Inner in = new Inner();
		in.print();
	}
	
}

public class nested_classes {
	public static void main(String[] args) {
		Outer out = new Outer();
		
		Outer.Inner oin = out.new Inner();
		
		out.Show_Inner();
		
	}
}
