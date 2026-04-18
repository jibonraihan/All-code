package File;

import java.io.*;
import java.util.Scanner;

public class readFile {
	 public static void main(String[] args) {
	        try {
	            File file = new File("myfile.txt");
	            Scanner sc = new Scanner(file);

	            while (sc.hasNextLine()) {
	                String data = sc.nextLine();
	                System.out.println(data);
	            }

	            sc.close();
	        } catch (FileNotFoundException e) {
	            System.out.println("File not found.");
	        }
	    }
}
