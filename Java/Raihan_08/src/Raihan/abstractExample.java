package Raihan;

abstract class Ani {
    // abstract method (no body)
    abstract void sound();

    // normal method
    void sleep() {
        System.out.println("Animal is sleeping...");
    }
}

// subclass
class Dog extends Ani {

    // must override abstract method
    void sound() {
        System.out.println("Dog barks");
    }
}

// another subclass
class Cat extends Ani {

    void sound() {
        System.out.println("Cat meows");
    }
}

public class abstractExample {
	  public static void main(String[] args) {

	        // reference type Animal, object Dog
	        Ani a1 = new Dog();
	        a1.sound();   // Dog barks
	        a1.sleep();

	        Ani a2 = new Cat();
	        a2.sound();   // Cat meows
	        a2.sleep();
	    }
}
