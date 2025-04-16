⭐⭐⭐⭐⭐⭐⭐ CODECRAFT BY ASHIKA ⭐⭐⭐⭐⭐⭐⭐


🟢 Language ➡ C
🟢 Topic ➡ Arrays (1D)

1D Array Question

🔸 01. Program to Calculate the Sum of Numbers in an Array
🔹 Question:  Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
🔹 Program:

#include <stdio.h>
int main() {
    int arr[10], sum = 0;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of the numbers is: %d\n", sum);
    return 0;
}
🔹 Sample Output:
Enter 10 numbers:
1 2 3 4 5 6 7 8 9 10
Sum of the numbers is: 55








🔸 02. Program to Calculate the Average of Numbers in an Array
🔹 Question: Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
🔹 Program:


#include <stdio.h>
int main() {
    int arr[10], sum = 0;
    float avg;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / 10.0;
    printf("Average of the numbers is: %.2f\n", avg);
    return 0;
}
🔹 Sample Output:
Enter 10 numbers:
10 20 30 40 50 60 70 80 90 100
Average of the numbers is: 55.00







🔸 03. Program to Calculate the Sum of Even and Odd Numbers in an Array
🔹 Question: Write a program to calculate the sum of all even and odd numbers stored in an array of size 10. Take array values from the user.
🔹 Program:

#include <stdio.h>
int main() {
    int arr[10], evenSum = 0, oddSum = 0;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers : %d\n", oddSum);
    return 0;
}
🔹 Sample Output:
Enter 10 numbers:
1 2 3 4 5 6 7 8 9 10
Sum of even numbers: 30
Sum of odd numbers : 25







🔸 04. Program to Find the Largest Number in an Array
🔹 Question: Write a program to find the largest number stored in an array of size 10. Take array values from the user.
🔹 Program:

#include <stdio.h>
int main() {
    int arr[10], largest;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }
    printf("Largest number is: %d\n", largest);
    return 0;
}
🔹 Sample Output:
Enter 10 numbers:
12 89 23 45 90 67 32 11 8 100
Largest number is: 100









🔸 05. Program to Find the Smallest Number in an Array
🔹 Question: Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
🔹 Program:

#include <stdio.h>
int main() {
    int arr[10], smallest;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    smallest = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    printf("Smallest number is: %d\n", smallest);
    return 0;
}
🔹 Sample Output:
Enter 10 numbers:
34 56 78 12 3 67 99 0 45 89
Smallest number is: 0









🔸 06. Program to Sort Elements in Ascending Order
🔹 Question:Write a program to sort (ascending order) elements of an array of size 10. Take array values from the user.
🔹 Program:

#include <stdio.h>
int main() {
    int arr[10], temp;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    // Sorting (bubble sort)
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted numbers in ascending order:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
🔹 Sample Output:
Enter 10 numbers:
5 3 8 1 9 7 6 4 2 0
Sorted numbers in ascending order:
0 1 2 3 4 5 6 7 8 9








🔸 07. Program to Find the Second Largest Number
🔹 Question: Write a program to find the second largest number in an array. Take array values from the user.
🔹 Program:

#include <stdio.h>
int main() {
    int arr[10], largest, second;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    largest = second = -1;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    if (second != -1)
        printf("Second largest number is: %d\n", second);
    else
        printf("No second largest number found.\n");

    return 0;
}
🔹 Sample Output:
Enter 10 numbers:
10 20 30 40 50 60 70 80 90 100
Second largest number is: 90









🔸 08. Program to Find the Second Smallest Number
🔹 Question: Write a program to find the second smallest number in an array. Take array values from the user.
🔹 Program:

#include <stdio.h>
#include <limits.h>
int main() {
    int arr[10], smallest = INT_MAX, second = INT_MAX;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        } else if (arr[i] < second && arr[i] != smallest) {
            second = arr[i];
        }
    }
    if (second != INT_MAX)
        printf("Second smallest number is: %d\n", second);
    else
        printf("No second smallest number found.\n");

    return 0;
}

🔹 Sample Output:
Enter 10 numbers:
9 4 5 1 6 2 3 0 8 7
Second smallest number is: 1










🔸 09. Program to Reverse an Array
🔹 Question: Write a program in C to read n values in an array, reverse it, and display the elements. Take array values from the user.
🔹 Program:

#include <stdio.h>
int main() {
    int arr[100], n;
    printf("Enter number of elements (up to 100): ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Reversed array:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
🔹 Sample Output:
Enter number of elements (up to 100): 5
Enter 5 numbers:
11 22 33 44 55
Reversed array:
55 44 33 22 11








🔸 10. Program to Copy One Array into Another
🔹 Question: Write a program in C to copy the elements of one array into another. Take array values from the user.
🔹 Program:

#include <stdio.h>
int main() {
    int arr1[10], arr2[10];
    printf("Enter 10 numbers for the first array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 10; i++) {
        arr2[i] = arr1[i];
    }
    printf("Elements of the second array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
🔹 Sample Output:

Enter 10 numbers for the first array:
5 10 15 20 25 30 35 40 45 50
Elements of the second array:
5 10 15 20 25 30 35 40 45 50
