# __Calendar System__

<br>

## __Description__

This C program displays a calendar for a specified year. It takes the input of a year from the user and generates a monthly calendar for that year, indicating the correct day of the week each month starts. It also adjusts for leap years, displaying February with 29 days when appropriate.

<br>

## __Features__

* Displays the full calendar for any given year.

* Automatically adjusts for leap years, adding 29 days to February when applicable.

* Clearly labels each month and displays days in a formatted grid, each week beginning on Sunday.

<br>

## __Functions__

* __getFirstDayOfTheYear:__ Calculates the day of the week the specified year starts on (Sunday=0, Monday=1, etc.).

<br>

## __How to Use:__

1. Compile the program with a C compiler:

``` bash
gcc calendar.c -o calendar
```
2. Run the executable:

``` bash
./calendar
```

3. Enter the desired year when prompted.

4. The program will output a calendar for each month of the entered year.


<br>


## __Example Output:__

```
Enter Current Year:
2023

************* Welcome To 2023 *************

------------------- January --------------------------
   Sun   Mon   Tue   Wed   Thu   Fri   Sat

     1     2     3     4     5     6     7
     8     9    10    11    12    13    14
    ...
------------------- February --------------------------
   Sun   Mon   Tue   Wed   Thu   Fri   Sat
    1     2     3     4     5     6     7
    ...
```

<br>


## __Notes__

* The program assumes the Gregorian calendar.

* Each month displays a 7-day week format with aligned days.


<br>


                      The End (:
