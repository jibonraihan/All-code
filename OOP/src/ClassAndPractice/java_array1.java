package ClassAndPractice;

import java.util.*;

public class java_array1 {
	public static void main(String[] args)
	{
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter size of array: ");
		int size = sc.nextInt();
		
		int []ar = new int[size];
		
		int max=ar[0], min=ar[0];
		for(int i=0; i<size; i++)
		{
			ar[i] = sc.nextInt();
			if(ar[i]>max) max=ar[i];
			if(ar[i]<min) min=ar[i];
		}
		
		System.out.println("Max number: " + max);
		System.out.println("Min number: " + min);
		
	}
}
