⭐⭐⭐⭐⭐⭐⭐ CODECRAFT BY ASHIKA ⭐⭐⭐⭐⭐⭐⭐
   
🟢 Language ➡ C
🟢 Topic ➡ Dynamic Memory AllocatioN(Answer)

📌 Program 1: Input a String Until Enter is Pressed
✅ Answer: Read an entire string dynamically using realloc() until user hits ENTER.

📎 Program:

#include <stdio.h>
#include <stdlib.h>
void inputString() {
    char *str = NULL;
    int ch, size = 0;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        char *temp = realloc(str, size + 1);
        if (temp == NULL) {
            free(str);
            printf("Memory allocation failed\n");
            return;
        }
        str = temp;
        str[size++] = ch;
    }
    char *temp = realloc(str, size + 1);
    if (temp == NULL) {
        free(str);
        printf("Memory allocation failed\n");
        return;
    }
    str = temp;
    str[size] = '\0';
    printf("You entered: %s\n", str);
    free(str);
}
int main() {
    inputString();
    return 0;
}
🔍 Sample Input/Output:
Input: Hello World!
Output: You entered: Hello World!







📌 Program 2: Dynamic Array for Average Calculation
✅ Answer: Use malloc() to store numbers, calculate average.

📎 Program:

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);
    double *arr = (double *)malloc(n * sizeof(double));
    if (!arr) {
        printf("Memory allocation failed\n");
        return 1;
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    printf("Average = %.2f\n", sum / n);
    free(arr);
    return 0;
}
🔍 Sample Input/Output:
How many numbers? 3
Enter number 1: 4.5
Enter number 2: 5.5
Enter number 3: 6
Average = 5.33







📌 Program 3: Sum of n Numbers Using malloc
✅ Answer: Allocate memory dynamically and sum user input.

📎 Program:

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed\n");
        return 1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d\n", sum);
    free(arr);
    return 0;
}
🔍 Sample Input/Output:
How many numbers? 4
Enter number 1: 10
Enter number 2: 20
Enter number 3: 30
Enter number 4: 40
Sum = 100




📌 Program 4: 2D Array Using malloc
✅ Answer: Dynamically create a 2D array using pointers and malloc.

📎 Program:

#include <stdio.h>
#include <stdlib.h>
int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    for (int i = 0; i < rows; i++)
        free(arr[i]);
    free(arr);
    return 0;
}

🔍 Sample Input/Output:
Enter rows and columns: 2 2
Enter elements:
1 2
3 4
Matrix:
1 2
3 4








📌 Program 5: Add Two 2D Arrays
✅ Answer: Dynamically add two 2D matrices using malloc.

📎 Program:

#include <stdio.h>
#include <stdlib.h>
void inputMatrix(int **mat, int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
}
void addMatrix(int **a, int **b, int **res, int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            res[i][j] = a[i][j] + b[i][j];
}
void printMatrix(int **mat, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int **a = malloc(r * sizeof(int *));
    int **b = malloc(r * sizeof(int *));
    int **res = malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++) {
        a[i] = malloc(c * sizeof(int));
        b[i] = malloc(c * sizeof(int));
        res[i] = malloc(c * sizeof(int));
    }
    printf("Enter matrix A:\n");
    inputMatrix(a, r, c);
    printf("Enter matrix B:\n");
    inputMatrix(b, r, c);
    addMatrix(a, b, res, r, c);
    printf("Sum Matrix:\n");
    printMatrix(res, r, c);
    for (int i = 0; i < r; i++) {
        free(a[i]);
        free(b[i]);
        free(res[i]);
    }
    free(a); free(b); free(res);
    return 0;
}

🔍 Sample Input/Output:
Enter rows and columns: 2 2
Enter matrix A:
1 2
3 4
Enter matrix B:
5 6
7 8
Sum Matrix:
6 8
10 12







📌 Program 6: Demonstrate realloc Function
✅ Answer: Show how to resize a dynamic array using realloc().

📎 Program:

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 5;
    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    n = 10;
    arr = realloc(arr, n * sizeof(int));
    for (int i = 5; i < n; i++)
        arr[i] = i + 1;

    printf("\nResized array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
🔍 Sample Output:
Original array: 1 2 3 4 5
Resized array: 1 2 3 4 5 6 7 8 9 10





📌 Program 7: Demonstrate Memory Leak
✅ Answer: Create a memory leak by not freeing memory.

📎 Program:

#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) {
        int *leak = malloc(sizeof(int));
         *leak = 42;  
    }
    return 0;
}
🔍 Sample Output:
(Infinite loop allocating memory. Use Ctrl+C to terminate)







📌 Program 8: Demonstrate Dangling Pointer
✅ Answer: Accessing memory after it's freed.

📎 Program:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    *ptr = 42;
    printf("Value: %d\n", *ptr);
    free(ptr);
    printf("Dangling value (undefined): %d\n", *ptr); // ⚠️ Unsafe!
    return 0;
}
🔍 Sample Output:

Value: 42
Dangling value (undefined): random/garbage value




📌 Program 9: Allocate Memory of User-specified Size
✅ Answer: Take number of bytes as input and allocate.

📎 Program:

#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t size;
    printf("Enter size in bytes: ");
    scanf("%zu", &size);

    void *ptr = malloc(size);
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
    } else {
        printf("Memory of %zu bytes allocated successfully!\n", size);
        free(ptr);
    }

    return 0;
}
🔍 Sample Output:
Enter size in bytes: 20
Memory of 20 bytes allocated successfully!







📌 Program 10: Find Largest and Smallest from Dynamic Array
✅ Answer: Input array dynamically and find min/max.

📎 Program:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Smallest = %d\n", min);
    printf("Largest = %d\n", max);

    free(arr);
    return 0;
}
🔍 Sample Input/Output:

Enter number of elements: 5
10 20 5 30 25
Smallest = 5
Largest = 30
