🌟🌟🌟🌟🌟🌟🌟 CODECRAFT BY ASHIKA 🌟🌟🌟🌟🌟🌟🌟
🟢 Language ➡ C
🟢 Topic ➡ Categorized Pointers Programs (Excluding Previous 10)

🔹 TYPE-1: TYPES OF POINTERS (5 Programs)
🔰 1. Simple Pointer Example

#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x;
    printf("Value: %d\n", *ptr);
    printf("Address: %p\n", ptr);
    return 0;
}

📤 Output:Value: 10




🔰 2. NULL Pointer Example

#include <stdio.h>
int main() {
    int *ptr = NULL;
    if (ptr == NULL)
        printf("Pointer is NULL\n");
    return 0;
}
📤 Output: Pointer is NULL





🔰 3. Wild Pointer Example

#include <stdio.h>
int main() {
    int *ptr; // uninitialized
    printf("Wild Pointer may point to: %p\n", ptr);
    return 0;
}
📤 Output: Wild Pointer may point to: (random address)






🔰 4. Dangling Pointer Example

#include <stdio.h>
#include <stdlib.h>
int* create() {
    int x = 10;
    return &x;
}
int main() {
    int *ptr = create();
    printf("Dangling pointer value (undefined behavior): %d\n", *ptr);
    return 0;
}

📤 Output: (Undefined behavior)





🔰 5. Void Pointer Example

#include <stdio.h>
int main() {
    int x = 5;
    void *ptr = &x;
    printf("Access via void pointer: %d\n", *(int*)ptr);
    return 0;
}

📤 Output: Access via void pointer: 5






🔹 TYPE-2: POINTER ARITHMETIC (5 Programs)
🔰 1. Increment Pointer

#include <stdio.h>
int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    return 0;
}
📤 Output:
10
20




🔰 2. Decrement Pointer

#include <stdio.h>
int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = &arr[2];
    printf("%d\n", *ptr);
    ptr--;
    printf("%d\n", *ptr);
    return 0;
}
📤 Output:
30
20






🔰 3. Pointer Difference

#include <stdio.h>
int main() {
    int arr[5];
    int *p1 = &arr[1];
    int *p2 = &arr[4];
    printf("Difference: %ld\n", p2 - p1);
    return 0;
}
📤 Output: Difference: 3






🔰 4. Access Using Offset

#include <stdio.h>
int main() {
    int arr[] = {5, 10, 15, 20};
    int *ptr = arr;
    printf("Third element: %d\n", *(ptr + 2));
    return 0;
}
📤 Output: Third element: 15




🔰 5. Pointer Comparison

#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30};
    int *p1 = &arr[0];
    int *p2 = &arr[2];
    if (p1 < p2)
        printf("p1 is before p2\n");
    return 0;
}

📤 Output: p1 is before p2




🔹 TYPE-3: POINTERS IN FUNCTIONS (5 Programs)
🔰 1. Pass Value to Function Using Pointer

#include <stdio.h>
void square(int *n) {
    *n = (*n) * (*n);
}
int main() {
    int x = 5;
    square(&x);
    printf("Square = %d\n", x);
    return 0;
}
📤 Output: Square = 25




🔰 2. Swap Elements in Function Using Pointers

#include <stdio.h>
void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}
int main() {
    int x = 10, y = 20;
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
📤 Output: x = 20, y = 10





🔰 3. Modify Array in Function Using Pointers

#include <stdio.h>
void incrementAll(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i]++;
    }
}
int main() {
    int arr[] = {1, 2, 3};
    incrementAll(arr, 3);
    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i]);
    return 0;
}

📤 Output: 2 3 4





🔰 4. Count Digits Using Function and Pointer

#include <stdio.h>
void countDigits(int num, int *count) {
    while (num) {
        (*count)++;
        num /= 10;
    }
}
int main() {
    int number = 12345, count = 0;
    countDigits(number, &count);
    printf("Digits: %d\n", count);
    return 0;
}
📤 Output: Digits: 5





🔰 5. Calculate Factorial Using Pointer

#include <stdio.h>
void factorial(int n, int *res) {
    *res = 1;
    for (int i = 1; i <= n; i++)
        *res *= i;
}
int main() {
    int n = 5, result;
    factorial(n, &result);
    printf("Factorial = %d\n", result);
    return 0;
}
📤 Output: Factorial = 120



🔹 TYPE-4: MULTIPLE POINTERS (5 Programs)
🔰 1. Swapping Two Numbers Using Multiple Pointers

#include <stdio.h>
void swap(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 10, y = 20;
    int *ptr1 = &x, *ptr2 = &y;
    printf("Before swap: x = %d, y = %d\n", *ptr1, *ptr2);
    swap(&ptr1, &ptr2);
    printf("After swap: x = %d, y = %d\n", *ptr1, *ptr2);
    return 0;
}
📤 Output:
Before swap: x = 10, y = 20
After swap: x = 20, y = 10






🔰 2. Using Multiple Pointers to Access 2D Array Elements

#include <stdio.h>
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *ptr1 = &arr[0][0], *ptr2 = &arr[1][0];
    printf("First element of first row: %d\n", *ptr1);
    printf("First element of second row: %d\n", *ptr2);
    return 0;
}
📤 Output:
First element of first row: 1
First element of second row: 4





🔰 3. Traversing Array Using Multiple Pointers

#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40};
    int *ptr1 = arr, *ptr2 = &arr[3];
    while (ptr1 <= ptr2) {
        printf("%d ", *ptr1);
        ptr1++;
    }
    return 0;
}
📤 Output: 10 20 30 40





🔰 4. Pointer to Pointer (Multiple Levels of Indirection)

#include <stdio.h>
int main() {
    int x = 10;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    printf("Value of x using pointer to pointer: %d\n", **ptr2);
    return 0;
}
📤 Output:
Value of x using pointer to pointer: 10




🔰 5. Passing Multiple Pointers to Functions

#include <stdio.h>
void modify(int **a, int **b) {
    **a += 5;
    **b -= 5;
}
int main() {
    int x = 10, y = 20;
    int *ptr1 = &x, *ptr2 = &y;
    printf("Before modify: x = %d, y = %d\n", *ptr1, *ptr2);
    modify(&ptr1, &ptr2);
    printf("After modify: x = %d, y = %d\n", *ptr1, *ptr2);
    return 0;
}

📤 Output:
Before modify: x = 10, y = 20
After modify: x = 15, y = 15


