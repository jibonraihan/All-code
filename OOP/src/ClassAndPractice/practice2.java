package ClassAndPractice;

public class practice2 {
	
	String name;
	int id;
	String model_name;
	
	public void C(String name, int id, String model) {
		this.name=name;
		this.id=id;
		model_name=model;
	}
	
	public void showDetail()
	{
		System.out.println("Car name: " + name);
		System.out.println("Car Model name and ID: " + model_name +" "+id);
		
	}
	
}
