//import java.util.Scanner;

package Raihan;


class Person{
	String name;
	int age;
	
    Person(String name, int age) {
        this.name = name; 
        this.age = age;
    }
}

public class practice_this{
	public static void main(String[] args)
	{
		Person p = new Person("Raihan", 22);
		
		System.out.println("Name: "+p.name);
		System.out.println("Age: " +p.age);
		
	}
}
