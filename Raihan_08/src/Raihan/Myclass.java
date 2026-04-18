package Raihan;

import java.util.*;
import Raihan.circle;

class Rectangle{
	public int mn(int p, int q)
	{
		return p*q;
	}
}


public class Myclass {
	public static void main(String[] args)
	{
		System.out.println("Enter the length and width: ");
		Scanner sc = new Scanner (System.in);
		Rectangle rt = new Rectangle();
		int l,w;
		l= sc.nextInt();
		w=sc.nextInt();
		System.out.println(rt.mn(l,w));
		
		System.out.println("Enter radius: ");
		int radius = sc.nextInt();
		circle c = new circle();
		
		c.calc(radius);
	}
}
