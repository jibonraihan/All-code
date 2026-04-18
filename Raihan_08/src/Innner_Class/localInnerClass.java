package Innner_Class;

class outer{
	void display() {
		int x=90;
		class inner{
			void print(){
				System.out.println("value of x: "+x);
			}	
		}
		inner in = new inner();
		in.print();
	}
}
public class localInnerClass {
	public static void main(String[] arg) {
		outer ot= new outer();
		ot.display();
	}
}
