package ClassAndPractice;


public class method_local {
	
		void method() {
			int val = 10;
			
			class method_inner{
				public void print() {
					System.out.println("Method inner" + val);
				}
			}
			
			method_inner inn = new method_inner();
			inn.print();
		}
	
	public static void main(String[] args) {
		method_local out = new method_local();
		out.method();
		
		
	}
		
}
