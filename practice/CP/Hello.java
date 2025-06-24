public class Hello {
    public static void main(String[] args) {
        System.out.println("Hello, Java in VS Code!");
        int a, b;   
        a = 5;  // Simulating user input
        b = 4;  // Simulating user input


        int result = add(5, 3);  // Calling a Java method
        System.out.println("Result: " + result);
    }

    // This is a proper Java method
    public static int add(int a, int b) {
        return a + b;
    }

    public static int subtract(int a, int b) {
        return a - b;
    }
}
