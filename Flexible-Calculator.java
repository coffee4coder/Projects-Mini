import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);

        // Display operation options first
        System.out.println("Choose an operation:");
        System.out.print("+");
        System.out.print(" - ");
        System.out.print(" * ");
        System.out.print(" / ");
        System.out.print(" sin ");
        System.out.print(" cos ");
        System.out.println(" tan");

        // Read user's choice
        String choice = obj.next();

        float output = 0;  // This will store the final result for addition, subtraction, etc.
        boolean firstIn = true;  // For subtraction and division, take the first input differently

        // For sine, cosine, and tangent
        if (choice.equals("sin") || choice.equals("cos") || choice.equals("tan")) {
            double degree = obj.nextDouble();
            double radians = Math.toRadians(degree);

            switch (choice) {
                case "sin":  // Sine
                    System.out.println("sin " + degree + " = " + Math.sin(radians));
                    break;
                case "cos":  // Cosine
                    System.out.println("cos " + degree + " = " + Math.cos(radians));
                    break;
                case "tan":  // Tangent
                    System.out.println("tan " + degree + " = " + Math.tan(radians));
                    break;
                default:
                    System.out.println("Invalid operation for trigonometry.");
            }

            obj.close();  // Close scanner
            return;
        }

        // For addition, subtraction, multiplication, and division
        // type '=' to end program
        
        while (true) {  // Check if the next input is a number or '='
            String input = obj.next();
            
            if (input.equals("=")) {
                break;  // Stop the input when '=' is entered
            }

            float num = Float.parseFloat(input);  // Convert the string input to a float

            // Perform the corresponding operation based on the user's choice
            switch (choice) {
                case "+":  // Addition
                    output += num;
                    break;

                case "-":  // Subtraction
                    if (firstIn) {
                        output = num;  // Initialize with the first number
                        firstIn = false;
                    } else {
                        output -= num;  // Subtract the rest
                    }
                    break;

                case "*":  // Multiplication
                    if (firstIn) {
                        output = num;  // Initialize with the first number
                        firstIn = false;
                    } else {
                        output *= num;  // Multiply the rest
                    }
                    break;

                case "/":  // Division
                    if (firstIn) {
                        output = num;  // Initialize with the first number
                        firstIn = false;
                    } else {
                        if (num != 0) {
                            output /= num;  // Divide by the next numbers
                        } else {
                            System.out.println("Error");
                            return;
                        }
                    }
                    break;

                default:
                    System.out.println("Invalid operation.");
                    return;
            }
        }

        // showing addition, subtraction, multiplication, or division
        printResult(output);

    }

    // Method to print the output, typecasting if the decimal part is zero
    static void printResult(float output) {
        // Check if result is a whole number (i.e., has no fractional part)
        if (output == (int) output) {
            System.out.println("output: " + (int) output);  // Cast to int to remove the decimal
        } else {
            System.out.println("output: " + output);  // Print as is if there's a fractional part
        }
    }
}