package Innner_Class;

abstract class Animal{
	abstract void sound();
}
public class annonymousInnerClass {
	public static void main(String[] arg) {
		Animal an=new Animal() {
			void sound() {
				System.out.println("Dog barking");
			}
		};
		
	}
}
