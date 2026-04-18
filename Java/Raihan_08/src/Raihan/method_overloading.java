package Raihan;


class Sample {
	public static void add(int a, int b)
	{
		System.out.println(a+b);
	}
	
	public static void add(int a, int b, int c)
	{
		System.out.println(a+b+c);
	}
}
public class method_overloading {
	public static void main(String[] args)
	{
		Sample obj = new Sample();
		obj.add(10,20);
		obj.add(10,20,30);
	}
}
