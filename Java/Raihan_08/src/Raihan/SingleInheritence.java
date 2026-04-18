package Raihan;

class man {
	man()
	{
		System.out.println("This is manclass");
	}
}

class raihan extends man {
	raihan()
	{
		System.out.println("This is raihanclass");
	}
}

public class SingleInheritence {
	
	public static void main(String[] args)
	{
		//System.out.println("Hello Java");
		raihan obj = new raihan();
	}
}
