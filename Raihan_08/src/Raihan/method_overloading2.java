package Raihan;

public class method_overloading2 {
	public class Sample {
		public static void add(int a, int b)
		{
			System.out.println(a+b);
		}
		public static void add(int a, int b, String s)
		{
			System.out.println("Addition of two number: " + a+b+ s);
		}
	}
}
