package Raihan;

class Animal{
	
}

class Man extends Animal{
	
}

class Cow extends Animal{
	
}

public class hiererchy {
	public static void main(String[] args)
	{
		Animal obj1 = new Animal();
		Animal obj2 = new Man();
		Animal obj3 = new Cow();
		
		Man obj4 = new Man();
		Cow obj5 = new Cow();
		
		  System.out.println(obj1 instanceof Animal);
	      System.out.println(obj1 instanceof Man);
	      System.out.println(obj1 instanceof Cow);

	      System.out.println(obj2 instanceof Animal);
	      System.out.println(obj2 instanceof Man);
	      System.out.println(obj2 instanceof Cow);

	      System.out.println(obj3 instanceof Animal);
	      System.out.println(obj3 instanceof Man);
	      System.out.println(obj3 instanceof Cow);
	      
	      System.out.println(obj4 instanceof Animal);
	      System.out.println(obj5 instanceof Animal);
	      
	}
}
