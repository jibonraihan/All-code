package Final;

class Vehicle {
    private String brand;
    private int speed;

    public String getBrand() {
        return brand;
    }
    public void setBrand(String brand) {
        this.brand = brand;
    }

    public int getSpeed() {
        return speed;
    }
    public void setSpeed(int speed) {
        this.speed = speed;
    }


    void displayInfo() {
        System.out.println("Brand: " + brand);
        System.out.println("Speed: " + speed);
    }
}


class Car extends Vehicle {
    private int numberOfDoors;

    public Car(String brand, int speed, int doors) {
        setBrand(brand);
        setSpeed(speed);
        this.numberOfDoors = doors;
    }

    public int getNumberOfDoors() {
        return numberOfDoors;
    }

    public void setNumberOfDoors(int doors) {
        this.numberOfDoors = doors;
    }


    void displayInfo() {
        super.displayInfo();
        System.out.println("Number of Doors: " + numberOfDoors);
        System.out.println("\n");
    }
}

class Bike extends Vehicle {
    private boolean hasCarrier;

  
    public Bike(String brand, int speed, boolean hasCarrier) {
        setBrand(brand);
        setSpeed(speed);
        this.hasCarrier = hasCarrier;
    }

	public boolean hasCarrier() {
        return hasCarrier;
    }

    public void setHasCarrier(boolean hasCarrier) {
        this.hasCarrier = hasCarrier;
    }

    void displayInfo() {
        super.displayInfo();
        if (hasCarrier) {
            System.out.println("Has a carrier");
        } else {
            System.out.println("Has not a carrier");
        }
    }



    public static void main(String[] args) {

        Car c1 = new Car("Toyota", 180, 4);
        Bike b1 = new Bike("Yamaha", 120, true);

        Vehicle[] vc = new Vehicle[2];
        vc[0] = c1;
        vc[1] = b1;

        for (Vehicle v : vc) {
            v.displayInfo();
        }
    }
    }