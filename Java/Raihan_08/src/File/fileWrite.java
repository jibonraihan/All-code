package File;
import java.io.*;

public class fileWrite {
	 public static void main(String[] args) {
	        try {
	            FileWriter writer = new FileWriter("myfile.txt");
	            writer.write("Again..Hello Raihan!\nThis is Java File handling.");
	            writer.close();
	            System.out.println("Successfully wrote to file.");
	        } catch (IOException e) {
	            System.out.println("Error occurred.");
	        }
	    }
}
