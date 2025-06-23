⭐⭐⭐⭐⭐⭐⭐ CODECRAFT BY ASHIKA ⭐⭐⭐⭐⭐⭐⭐

🟢 Language ➡ C
🟢 Topic ➡ switch-Case statement


🔹 🧠1. WAP which takes the month number as input and displays the number of days in that month.

#include <stdio.h>

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    
    switch (month) {
        case 1:
            printf("31 days in month 1.\n");
            break;
        case 2:
            printf("February has 28 or 29 days (depending on leap year).\n");
            break;
        case 3:
            printf("31 days in month 3.\n");
            break;
        case 4:
            printf("30 days in month 4.\n");
            break;
        case 5:
            printf("31 days in month 5.\n");
            break;
        case 6:
            printf("30 days in month 6.\n");
            break;
        case 7:
            printf("31 days in month 7.\n");
            break;
        case 8:
            printf("31 days in month 8.\n");
            break;
        case 9:
            printf("30 days in month 9.\n");
            break;
        case 10:
            printf("31 days in month 10.\n");
            break;
        case 11:
            printf("30 days in month 11.\n");
            break;
        case 12:
            printf("31 days in month 12.\n");
            break;
        default:
            printf("Invalid month number.\n");
    }

    return 0;
}
🖥️ Sample Output:
Enter month number (1-12): 2
28 or 29 days in February (leap year consideration).






🔹 🧠2. Write a menu driven program for basic arithmetic operations.

#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    printf("\nMenu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 5) {
        printf("Exiting...\n");
        return 0; // Exit the program
    }

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
   





🖥️ Sample Output:
Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter your choice: 1
Enter two numbers: 5 3
Result: 8.00






🔹 🧠3. WAP which takes the day number of the week and displays a unique greeting message for the day.

#include <stdio.h>
int main() {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Monday - Let's get to work!\n");
            break;
        case 2:
            printf("Tuesday - Keep going!\n");
            break;
        case 3:
            printf("Wednesday - Halfway there!\n");
            break;
        case 4:
            printf("Thursday - Almost done!\n");
            break;
        case 5:
            printf("Friday - Weekend is near!\n");
            break;
        case 6:
            printf("Saturday - Enjoy your weekend!\n");
            break;
        case 7:
            printf("Sunday - Rest and recharge!\n");
            break;
        default:
            printf("Invalid day number.\n");
    }
    return 0;
}

🖥️ Sample Output:
Enter day number (1-7): 3
Wednesday - Halfway there!






🔹 🧠4. Menu-driven program to check triangle types.

#include <stdio.h>

int main() {
    int choice;
    float a, b, c;

    // Display the menu
    printf("\nMenu:\n");
    printf("1. Check Isosceles Triangle\n");
    printf("2. Check Right Angled Triangle\n");
    printf("3. Check Equilateral Triangle\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Check exit condition
    if (choice == 4) {
        printf("Exiting...\n");
        return 0; // Exit the program
    }

    // Input the lengths of the triangle sides
    printf("Enter lengths of three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    // Determine the type of triangle based on user choice
    switch (choice) {
        case 1:
            if (a == b || b == c || a == c)
                printf("The triangle is isosceles.\n");
            else
                printf("The triangle is not isosceles.\n");
            break;
        case 2:
            if (a * a + b * b == c * c || 
                b * b + c * c == a * a ||
                c * c + a * a == b * b)
                printf("The triangle is right angled.\n");
            else
                printf("The triangle is not right angled.\n");
            break;
        case 3:
            if (a == b && b == c)
                printf("The triangle is equilateral.\n");
            else
                printf("The triangle is not equilateral.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

🖥️ Sample Output:
Menu:
1. Check Isosceles Triangle
2. Check Right Angled Triangle
3. Check Equilateral Triangle
4. Exit
Enter your choice: 1
Enter lengths of three sides: 5 5 8
The triangle is isosceles.







🔹 🧠5. Convert if-else-if construct into switch case.

#include <stdio.h>
int main() {
    int var;
    printf("Enter a number (1-3): ");
    scanf("%d", &var);
    switch (var) {
        case 1:
            printf("good\n");
            break;
        case 2:
            printf("better\n");
            break;
        case 3:
            printf("best\n");
            break;
        default:
            printf("invalid\n");
    }

    return 0;
}

🖥️ Sample Output:
Enter a number (1-3): 2
better







🔹 🧠6. Program to check whether a year is a leap year using switch statement.

#include <stdio.h>
int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    switch ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        case 1:
            printf("%d is a leap year.\n", year);
            break;
        case 0:
            printf("%d is not a leap year.\n", year);
            break;
    }
    return 0;
}


🖥️ Sample Output:
Enter year: 2020
2020 is a leap year.







🔹 🧠7. Program to calculate total electricity bill.

#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter electricity units used: ");
    scanf("%d", &units);
    switch (units / 100) {
        case 0: 
            bill = units * 0.50;
            break;
        case 1: 
            bill = 50 * 0.50 + (units - 50) * 0.75;
            break;
        case 2:
            bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
            break;
        default: 
            bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
            break;
    }

    bill += bill * 0.20; // add surcharge
    printf("Total electricity bill: Rs. %.2f\n", bill);

    return 0;
}

🖥️ Sample Output:
Enter electricity units used: 270
Total electricity bill: Rs. 168.00







🔹 🧠8. Program to convert positive to negative and vice versa.

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    switch (number < 0) {
        case 1:
            printf("Positive number: %d\n", -number);
            break;
        case 0:
            printf("Negative number: %d\n", -number);
            break;
    }

    return 0;
}


🖥️ Sample Output:
Enter an integer: -5
Positive number: 5








🔹 🧠9. Program to convert even number to upper nearest odd number.

#include <stdio.h>
int main() {
    int number;
    printf("Enter a positive number: ");
    scanf("%d", &number);
    switch (number % 2) {
        case 0:
            printf("Upper nearest odd number: %d\n", number + 1);
            break;
        case 1:
            printf("The number is already odd.\n");
            break;
    }
    return 0;
}

🖥️ Sample Output:
Enter a positive number: 8
Upper nearest odd number: 9








🔹 🧠10. C program to find all roots of a quadratic equation using switch case.

#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b, c of the quadratic equation (ax^2 + bx + c = 0): ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b*b - 4*a*c;
    switch (discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and distinct: %.2f, %.2f\n", root1, root2);
            break;
        case 0:
            switch (discriminant == 0) {
                case 1:
                    root1 = -b / (2 * a);
                    printf("Roots are real and equal: %.2f\n", root1);
                    break;
                case 0:
                    printf("Roots are imaginary.\n");
                    break;
            }
            break;
    }
    return 0;
}

🖥️ Sample Output:
Enter coefficients a, b, c of the quadratic equation (ax^2 + bx + c = 0): 1 -3 2
Roots are real and distinct: 2.00, 1.00
