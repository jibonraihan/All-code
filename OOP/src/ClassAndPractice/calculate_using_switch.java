package ClassAndPractice;

import java.util.Scanner;

public class calculate_using_switch {

	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter first number: ");
		int first_number = sc.nextInt();
		System.out.print("Enter oparator: ");
		String operator = sc.next();
		System.out.print("Enter second number: ");
		int second_number = sc.nextInt();
		
		
		switch(operator)
		{
			case "+" : 
				System.out.println(first_number + second_number);
				break;
			case "-" : 
				System.out.println(first_number - second_number);
				break;
			case "*" : 
				System.out.println(first_number * second_number);
				break;
			case "/" :
				if(second_number!=0)
					System.out.println(first_number / second_number);
				else 
					System.out.println("divison by zero not possible");
				break;
			default : System.out.println("Invalid operation.");
		}
		
		sc.close();
	}
}
