package File;

import java.io.*;

public class deleteFile {
	 public static void main(String[] args) {
	        File file = new File("myfile2.txt");

	        if (file.delete()) {
	            System.out.println("Deleted the file: " + file.getName());
	        } else {
	            System.out.println("Failed to delete the file.");
	        }
	    }
}
