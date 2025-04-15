⭐⭐⭐⭐⭐⭐⭐ CODECRAFT BY ASHIKA ⭐⭐⭐⭐⭐⭐⭐

🟢 Language ➡ C
🟢 Topic ➡ Jumping Statements (Questions)

Jumping Statements


👉 Basic break Statement Usage
🔹 🧠 1.Write a program using a break statement to exit a loop when a certain condition is met (e.g., when a user inputs a negative number).

#include <stdio.h>
int main() {
    int number;
    while (1) {
        printf("Enter a number (negative to exit): ");
        scanf("%d", &number);
        if (number < 0) {
            break; 
        }
        printf("You entered: %d\n", number);
    }
    printf("Exited the loop.\n");
    return 0;
}

🖥️ Sample Output:
Enter a number (negative to exit): 5
You entered: 5
Enter a number (negative to exit): 10
You entered: 10
Enter a number (negative to exit): -1
Exited the loop.











 👉Nested Loops and break:
🔹 🧠2.Write a program with nested loops that prints a multiplication table, and use a break statement to exit from both loops when a specified threshold is reached (e.g., when the product exceeds a certain number). Nested Loops and break

#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            int product = i * j;
            if (product > 50) {
                break; 
            }
            printf("%d x %d = %d\n", i, j, product);
        }
    }
    return 0;
}

🖥️ Sample Output:
1 x 1 = 1
1 x 2 = 2
...
7 x 7 = 49








👉Using continue:
🔹 🧠 3.Write a program that prints all even numbers from 1 to 20 but skips the number 10 using a continue statement.

#include <stdio.h>
int main() {
    for (int i = 1; i <= 20; i++) {
        if (i == 10) {
            continue; 
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

🖥️ Sample Output:
1 2 3 4 5 6 7 8 9 11 12 13 14 15 16 17 18 19 20 








👉goto Statement:
🔹 🧠 4.Create a simple program that uses the goto statement to jump to a specific label based on user input validation (e.g., input numbers until the user enters a valid number).

#include <stdio.h>
int main() {
    int number;
start:
    printf("Enter a positive number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Invalid input. Please try again.\n");
        goto start; 
    }
    printf("You entered: %d\n", number);
    return 0;
}


🖥️ Sample Output:
Enter a positive number: -5
Invalid input. Please try again.
Enter a positive number: 15
You entered: 15







👉Exit Early with break:
🔹 🧠5.Write a program that finds the first prime number in a given range (1 to N) using a loop and exits as soon as it finds the number with a break statement.


#include <stdio.h>
int main() {
    int N, isPrime;
    printf("Enter a number N to find the first prime number in the range (1 to N): ");
    scanf("%d", &N);
    for (int num = 2; num <= N; num++) {
        isPrime = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break; 
            }
        }
        if (isPrime) {
            printf("The first prime number in the range is: %d\n", num);
            break; 
        }
    }
    return 0;
}
🖥️ Sample Output:
Enter a number N to find the first prime number in the range (1 to N): 10
The first prime number in the range is: 2






👉Skip Iterations with continue:
🔹 🧠6.Write a program that reads integers from the user until 0 is entered and calculates the sum of only the numbers that are odd, skipping even numbers with a continue statement.


#include <stdio.h>
int main() {
    int number, sum = 0;
    printf("Enter numbers (0 to stop): \n");
    while (1) {
        scanf("%d", &number);
        if (number == 0) {
            break; 
        }
        if (number % 2 == 0) {
            continue; 
        }
        sum += number; 
    }
    printf("Sum of odd numbers = %d\n", sum);
    return 0;
}
🖥️ Sample Output:
Enter numbers (0 to stop): 
5
10
3
0
Sum of odd numbers = 8









👉goto for Error Handling:
🔹 🧠 7.Design a program that demonstrates the use of the goto statement for error handling (e.g., validating user input repeatedly until a valid input is provided).


#include <stdio.h>
int main() {
    int number;
start:
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 1) {
        printf("Error! Number must be positive.\n");
        goto start; 
    }
    printf("You entered: %d\n", number);
    return 0;
}

🖥️ Sample Output:
Enter a positive integer: -5
Error! Number must be positive.
Enter a positive integer: 7
You entered: 7








👉Using break in Switch Case:
🔹 🧠8.Write a simple menu-driven program that uses a switch statement, and demonstrate the necessity of break statements to terminate specific case executions.


#include <stdio.h>
int main() {
    int choice;
    printf("Menu:\n1. Option 1\n2. Option 2\n3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("You selected Option 1.\n");
            break; 
        case 2:
            printf("You selected Option 2.\n");
            break;
        case 3:
            printf("Exiting...\n");
            break; 
        default:
            printf("Invalid option! Please try again.\n");
    }

    return 0;
}

🖥️ Sample Output:
Menu:
1. Option 1
2. Option 2
3. Exit
Enter your choice: 2
You selected Option 2.










👉Combining continue and break:
🔹 🧠9.Create a program that counts all numbers between 1 and 50 but skips the multiples of 5. Use both continue to skip and break to end the loop if a certain count is reached.


#include <stdio.h>
int main() {
    int count = 0;
    for (int i = 1; i <= 50; i++) {
        if (i % 5 == 0) {
            continue; 
        }
        printf("%d ", i);
        count++;
        if (count == 10) {
            break; 
        }
    }
    printf("\n");
    return 0;
}
🖥️ Sample Output:
1 2 3 4 6 7 8 9 








👉Labeling and goto:
🔹 🧠10.Write a program that demonstrates the use of labeled statements and goto to create a simple menu where the user can choose actions without breaking down into multiple functions.

#include <stdio.h>
int main() {
    int choice;
    start:
    printf("Choose an action (1: Continue, 2: Exit): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Continuing...\n");
        goto start; 
    } else if (choice == 2) {
        printf("Exiting...\n");
    } else {
        printf("Invalid choice. Please try again.\n");
        goto start; 
    }
    return 0;
}

🖥️ Sample Output:
Choose an action (1: Continue, 2: Exit): 1
Continuing...
Choose an action (1: Continue, 2: Exit): 2
Exiting...
