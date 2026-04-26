package Final;
import java.util.Scanner;

class Patient {
    int patientID;
    String name;
    String disease;

    Patient(String name, int Id, String disease) {
        this.name = name;
        this.patientID = Id;
        this.disease = disease;
    }

    void display() {
        System.out.println("Patient id: " + patientID +
                "\nPatient name: " + name +
                "\nPatient disease: " + disease);
    }
}

public class Question2 {
    public static void main(String[] arg) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter name: ");
        String name = sc.nextLine();

        System.out.println("Enter id: ");
        int id = sc.nextInt();
        sc.nextLine(); 

        System.out.println("Enter disease: ");
        String dis = sc.nextLine();

        sc.close();

        Patient p = new Patient(name, id, dis);
        p.display();
    }
}