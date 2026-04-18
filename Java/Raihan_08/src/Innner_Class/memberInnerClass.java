package Innner_Class;

class Outer {
    int x = 10;

    class Inner {
        void show() {
            System.out.println("Value of x: " + x);
        }
    }
}

public class memberInnerClass {
    public static void main(String[] args) {
        Outer obj = new Outer();
        Outer.Inner in = obj.new Inner(); // important syntax
        in.show();
    }
}
