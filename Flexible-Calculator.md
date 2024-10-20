# __Simple Calculator with Trigonometric Functions__

<br>
This is a basic command-line calculator written in Java that supports basic arithmetic operations (addition, subtraction, multiplication, and division) and trigonometric calculations (sine, cosine, and tangent).

<br>

### __Features__

* #### __Arithmetic Operations :__
  - Addition __(+)__
  - Subtraction __(-)__
  - Multiplication __(*)__
  - Division __(/)__

* #### __Trigonometric Functions :__

  - Sine __(sin)__
  - Cosine __(cos)__
  - Tangent __(tan)__

* __Dynamic Input :__ You can input as many numbers as you want for the arithmetic operations, ending the input sequence with ' = '

<br>

## How it Works

1. __Choose an Operation:__ First, you'll be asked to choose an arithmetic or trigonometric operation.

2. __For Arithmetic Operations:__ 
   * Input numbers continuously.
   * When you're done, enter ' = ' to calculate and display the result.

   * Example: 10 + 5 - 3 = 12
3. __For trigonometric Operations:__ 

     * Enter the angle in degrees.

     * The program will convert it to radians and return the sine, cosine, or tangent value of the angle.
     * Example: sin 30 will return sin 30.0 = 0.5


<br>

__For Command Line__

## How to Run

1. Compile the Code:
``` java
javac Main.java
```
2. Run the Program:
```java
java Main
```

<br>

## Demo of Usage

```
Choose an operation:
+ - * / sin cos tan

+
5 3 + =
output: 8

Choose an operation:
sin 30
sin 30 = 0.5

```

<br>

## Error Handling

* Division by zero will return an error message.
* For trigonometric operations, if the input is invalid, an error message will be displayed.

<br>

                     The end (: