⭐⭐⭐⭐⭐⭐⭐ CODECRAFT BY ASHIKA ⭐⭐⭐⭐⭐⭐⭐

🟢 Language ➡ C
🟢 Topic ➡ multidimensional  Array with Functions

🔹 🧠01. Function to Calculate the Sum of Two Matrices

#include <stdio.h>
void sumMatrices(int a[10][10], int b[10][10], int result[10][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            result[i][j] = a[i][j] + b[i][j];
}
int main() {
    int a[10][10], b[10][10], result[10][10], n;
    printf("Enter the order of matrices (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    sumMatrices(a, b, result, n);

    printf("Sum of the two matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", result[i][j]);
        printf("\n");
    }
    return 0;
}
🖥️ Sample Output:
Enter the order of matrices (n x n): 3
Enter elements of first matrix:
1 2 3
4 5 6
7 8 9
Enter elements of second matrix:
9 8 7
6 5 4
3 2 1
Sum of the two matrices:
10      10      10
10      10      10
10      10      10









🔹 🧠02. Function to Calculate the Product of Two Matrices

#include <stdio.h>
void productMatrices(int a[10][10], int b[10][10], int result[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }
}int main() {
    int a[10][10], b[10][10], result[10][10], n;
    printf("Enter the order of matrices (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    productMatrices(a, b, result, n);

    printf("Product of the two matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", result[i][j]);
        printf("\n");
    }
    return 0;
}
🖥️ Sample Output:
Enter the order of matrices (n x n): 3
Enter elements of first matrix:
1 2 3
4 5 6
7 8 9
Enter elements of second matrix:
9 8 7
6 5 4
3 2 1
Product of the two matrices:
30      24      18
84      69      54
138     114     90








🔹 🧠03. Function to Find the Transpose of a Matrix

#include <stdio.h>
void transposeMatrix(int matrix[10][10], int transpose[10][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            transpose[j][i] = matrix[i][j];
}
int main() {
    int matrix[10][10], transpose[10][10], n;
    printf("Enter the order of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    transposeMatrix(matrix, transpose, n);

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
🖥️ Sample Output:
Enter the order of matrix (n x n): 3
Enter elements of matrix:
1 2 3
4 5 6
7 8 9
Transpose of the matrix:
1       4       7
2       5       8
3       6       9








🔹 🧠 04. Function to Find the Sum of Right Diagonals of a Matrix

#include <stdio.h>
int sumRightDiagonal(int matrix[10][10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += matrix[i][n - 1 - i];
    return sum;
}
int main() {
    int matrix[10][10], n;
    printf("Enter the order of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int rightDiagonalSum = sumRightDiagonal(matrix, n);
    printf("Sum of right diagonals: %d\n", rightDiagonalSum);
    return 0;
}

🖥️ Sample Output:
Enter the order of matrix (n x n): 3
Enter elements of matrix:
1 2 3
4 5 6
7 8 9
Sum of right diagonals: 15









🔹 🧠 05. Function to Find the Sum of Left Diagonals of a Matrix

#include <stdio.h>
int sumLeftDiagonal(int matrix[10][10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += matrix[i][i];
    return sum;
}int main() {
    int matrix[10][10], n;
    printf("Enter the order of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int leftDiagonalSum = sumLeftDiagonal(matrix, n);
    printf("Sum of left diagonals: %d\n", leftDiagonalSum);
    return 0;
}
🖥️ Sample Output:
Enter the order of matrix (n x n): 3
Enter elements of matrix:
1 2 3
4 5 6
7 8 9
Sum of left diagonals: 15










🔹 🧠 06. Function to Find the Sum of Rows and Columns of a Matrix

#include <stdio.h>
void sumRowsCols(int matrix[10][10], int n) {
    int rowSum[10] = {0}, colSum[10] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }
    printf("Sum of rows:\n");
    for (int i = 0; i < n; i++)
        printf("Row %d: %d\n", i + 1, rowSum[i]);

    printf("Sum of columns:\n");
    for (int j = 0; j < n; j++)
        printf("Column %d: %d\n", j + 1, colSum[j]);
}
int main() {
    int matrix[10][10], n;
    printf("Enter the order of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    sumRowsCols(matrix, n);
    return 0;
}
🖥️ Sample Output:
Enter the order of matrix (n x n): 3
Enter elements of matrix:
1 2 3
4 5 6
7 8 9
Sum of rows:
Row 1: 6
Row 2: 15
Row 3: 24
Sum of columns:
Column 1: 12
Column 2: 15
Column 3: 18









🔹 🧠 07. Function to Display the Lower Triangular Matrix

#include <stdio.h>
void displayLowerTriangular(int matrix[10][10], int n) {
    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i)
                printf("%d\t", matrix[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }
}
int main() {
    int matrix[10][10], n;
    printf("Enter the order of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    displayLowerTriangular(matrix, n);
    return 0;
}
🖥️ Sample Output:
Enter the order of matrix (n x n): 3
Enter elements of matrix:
1 2 3
4 5 6
7 8 9
Lower Triangular Matrix:
1       0       0
4       5       0
7       8       9










🔹 🧠 08. Function to Display the Upper Triangular Matrix

#include <stdio.h>
void displayUpperTriangular(int matrix[10][10], int n) {
    printf("Upper Triangular Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i)
                printf("%d\t", matrix[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }
}
int main() {
    int matrix[10][10], n;
    printf("Enter the order of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    displayUpperTriangular(matrix, n);
    return 0;
}
🖥️ Sample Output:
Enter the order of matrix (n x n): 3
Enter elements of matrix:
1 2 3
4 5 6
7 8 9
Upper Triangular Matrix:
1       2       3
0       5       6
0       0       9







🔹 🧠 09. Function to Determine if Matrix is Sparse

#include <stdio.h>
int isSparseMatrix(int matrix[10][10], int n) {
    int zeroCount = 0, totalElements = n * n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0)
                zeroCount++;
        }
    }
    return zeroCount > totalElements / 2;
}
int main() {
    int matrix[10][10], n;
    printf("Enter the order of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    if (isSparseMatrix(matrix, n))
        printf("The matrix is a sparse matrix. \n");
    else
        printf("The matrix is not a sparse matrix. \n");

    return 0;
}
🖥️ Sample Output:
Enter the order of matrix (n x n): 3
Enter elements of matrix:
0 0 0
0 5 0
0 0 0
The matrix is a sparse matrix.







🔹 🧠 10. Function to Find the Row with Maximum Number of 1s

#include <stdio.h>
int findRowWithMaxOnes(int matrix[10][10], int n) {
    int maxRowIndex = -1, maxCount = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1)
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            maxRowIndex = i;
        }
    }
    return maxRowIndex;
}
int main() {
    int matrix[10][10], n;
    printf("Enter the order of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix (0 or 1):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int resultRow = findRowWithMaxOnes(matrix, n);
    if (resultRow != -1)
        printf("Row with maximum number of 1s: Row %d\n", resultRow + 1);
    else
        printf("No 1s found in the matrix.\n");

    return 0;
}
🖥️ Sample Output:
Enter the order of matrix (n x n): 3
Enter elements of matrix (0 or 1):
1 0 1
1 1 0
0 0 1
Row with maximum number of 1s: Row 2
