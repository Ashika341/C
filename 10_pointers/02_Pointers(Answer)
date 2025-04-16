⭐⭐⭐⭐⭐⭐⭐ CODECRAFT BY ASHIKA ⭐⭐⭐⭐⭐⭐⭐
   
🟢 Language ➡ C
🟢 Topic ➡ Pointers(Answer)


🔰 1. Swap Values of Two Variables Using Pointers

#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}
📥 Input:Enter two integers: 10 20
📤 Output:After swapping: x = 20, y = 10






🔰 2. Swap Two Strings Using Char Pointers

#include <stdio.h>
#include <string.h>
void swapStrings(char *str1, char *str2) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    swapStrings(str1, str2);

    printf("After swapping:\n");
    printf("First String: %s\n", str1);
    printf("Second String: %s\n", str2);
    return 0;
}
📥 Input:
Enter first string: Hello
Enter second string: World
📤 Output:
After swapping:
First String: World
Second String: Hello







🔰 3. Sort an Integer Array Using Pointers

#include <stdio.h>
void sort(int *ptr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}
int main() {
    int arr[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, 5);
    printf("Sorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
📥 Input:
Enter 5 integers:
34 12 5 90 17
📤 Output: Sorted array: 5 12 17 34 90







🔰 4. Extended Pointer Concept: Modify Value Using Double Pointer

#include <stdio.h>
void modify(int **ptr) {
    **ptr += 10;
}
int main() {
    int num = 5;
    int *p = &num;
    int **pp = &p;

    printf("Original number: %d\n", num);
    modify(pp);
    printf("Modified number: %d\n", num);
    return 0;
}
📤 Output:
Original number: 5
Modified number: 15





🔰 5. Find the Largest of Two Numbers Using Pointers

#include <stdio.h>
void findLargest(int *a, int *b, int *largest) {
    *largest = (*a > *b) ? *a : *b;
}

int main() {
    int num1, num2, largest;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    findLargest(&num1, &num2, &largest);
    printf("Largest number is: %d\n", largest);
    return 0;
}
📥 Input: Enter two numbers: 15 27
📤 Output:Largest number is: 27





🔰 6. Calculate Length of String Using Pointer

#include <stdio.h>
int stringLength(const char *str) {
    const char *s = str;
    while (*s) s++;
    return s - str;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Length of the string: %d\n", stringLength(str));
    return 0;
}
📥 Input:Enter a string: HelloWorld
📤 Output:Length of the string: 10





🔰 7. Count Vowels and Consonants in a String Using Pointer

#include <stdio.h>
#include <ctype.h>
void countVowelsAndConsonants(const char *str, int *vowelCount, int *consonantCount) {
    while (*str) {
        char ch = tolower(*str);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*vowelCount)++;
            else
                (*consonantCount)++;
        }
        str++;
    }
}
int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    countVowelsAndConsonants(str, &vowels, &consonants);
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}
📥 Input:Enter a string: Programming
📤 Output:Vowels: 3, Consonants: 8





🔰 8. Compute Sum of Array Elements Using Pointer

#include <stdio.h>
int sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}
int main() {
    int arr[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int total = sumArray(arr, 5);
    printf("Sum of array elements: %d\n", total);
    return 0;
}
📥 Input: 10 20 30 40 50
📤 Output: Sum of array elements: 150






🔰 9. Print Array in Reverse Using Pointer

#include <stdio.h>
void printReverse(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main() {
    int arr[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array in reverse: ");
    printReverse(arr, 5);
    return 0;
}
📥 Input: 1 2 3 4 5
📤 Output: Array in reverse: 5 4 3 2 1






🔰 10. Print a String in Reverse Using Pointer

#include <stdio.h>
#include <string.h>
void printReverseString(const char *str) {
    const char *end = str + strlen(str) - 1;
    while (end >= str) {
        printf("%c", *end--);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Reversed string: ");
    printReverseString(str);
    return 0;
}
📥 Input: Enter a string: C Programming
📤 Output: Reversed string: gnimmargorP C
