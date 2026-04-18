package ClassAndPractice;
import java.util.*;


public class Student {
	static String name;
	String grade;
	static int roll;
	static float marks;
	
	void inputDetails()
	{	this.name=name;
	this.grade=grade;
	this.marks=marks;
		Scanner sc = new  Scanner (System.in);
		System.out.println("Enter name: ");
		name = sc.nextLine();
		System.out.println("Enter roll: ");
		roll = sc.nextInt();
		System.out.println("Enter marks: ");
		marks = sc.nextFloat();
	}
	
	static void displayDetails()
	{
		System.out.println("Name: " + name);
		System.out.println("Roll: " + roll);
		System.out.println("Marks: " + marks);
		String s = calculateGrade(marks);
		System.out.println("Grade: " + s);
	}
	
	static String calculateGrade(float marks)
	{
		if(marks>= 80)
		{
			return "A";
		}
		else if(marks>= 60 && marks<80)
		{
			return "B";
		}
		else if(marks>= 40 && marks<60)
		{
			return "C";
		}
		else return "F";
		
	}
	public static void main(String[] args)
	{
		Student []obj = new Student[5];
		
		for(int i=0; i<2; i++)
		{
			obj[i] = new Student();
			obj[i].inputDetails();
		}
		
		for(int i=0; i<2; i++)
		{
			//obj[i] = new Student();
			obj[i].displayDetails();
		}
		
		
	}
}



