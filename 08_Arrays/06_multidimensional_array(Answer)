⭐⭐⭐⭐⭐⭐⭐ CODECRAFT BY ASHIKA  ⭐⭐⭐⭐⭐⭐⭐

🟢 Language ➡ C
🟢 Topic ➡ Multi-Dimensional Array(Answer)



🔹 🧠01. Sum of Two Matrices (3x3)

#include <stdio.h>
int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3];
    printf("Enter elements of first 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter elements of second 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix2[i][j]);

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
    printf("Sum of the two matrices:\n");


    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }
    return 0;
}
🖥️ Sample Output:
Enter elements of first 3x3 matrix:
1 2 3
4 5 6
7 8 9
Enter elements of second 3x3 matrix:
9 8 7
6 5 4
3 2 1
Sum of the two matrices:
10      10      10
10      10      10
10      10      10








🔹 🧠02. Product of Two Matrices (3x3)

#include <stdio.h>
int main() {
    int matrix1[3][3], matrix2[3][3], product[3][3];
    printf("Enter elements of first 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter elements of second 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix2[i][j]);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            product[i][j] = 0; 
            for(int k = 0; k < 3; k++)
                product[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }
    printf("Product of the two matrices:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            printf("%d\t", product[i][j]);
        printf("\n");
    }
    return 0;
}
🖥️ Sample Output:
Enter elements of first 3x3 matrix:
1 2 3
4 5 6
7 8 9
Enter elements of second 3x3 matrix:
9 8 7
6 5 4
3 2 1
Product of the two matrices:
30      24      18
84      69      54
138     114     90








🔹 🧠03. Transpose of a Matrix

#include <stdio.h>
int main() {
    int matrix[3][3], transpose[3][3];
    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            transpose[j][i] = matrix[i][j];


    printf("Transpose of the matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            printf("%d\t", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
🖥️ Sample Output:
Enter elements of 3x3 matrix:
1 2 3
4 5 6
7 8 9
Transpose of the matrix:
1       4       7
2       5       8
3       6       9







🔹 🧠04. Sum of Right Diagonals of a Matrix

#include <stdio.h>
int main() {
    int matrix[3][3], rightDiagonalSum = 0;
    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    for(int i = 0; i < 3; i++)
        rightDiagonalSum += matrix[i][2 - i];
    printf("Sum of right diagonals: %d\n", rightDiagonalSum);
    return 0;
}
🖥️ Sample Output:
Enter elements of 3x3 matrix:
1 2 3
4 5 6
7 8 9
Sum of right diagonals: 15








🔹 🧠 05. Sum of Left Diagonals of a Matrix

#include <stdio.h>
int main() {
    int matrix[3][3], leftDiagonalSum = 0;
    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    for(int i = 0; i < 3; i++)
        leftDiagonalSum += matrix[i][i];
    printf("Sum of left diagonals: %d\n", leftDiagonalSum);
    return 0;
}
🖥️ Sample Output:
Enter elements of 3x3 matrix:
1 2 3
4 5 6
7 8 9
Sum of left diagonals: 15







🔹 🧠 06. Sum of Rows and Columns of a Matrix

#include <stdio.h>
int main() {
    int matrix[3][3], rowSum[3] = {0}, colSum[3] = {0};
    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }
    printf("Sum of rows:\n");
    for(int i = 0; i < 3; i++)
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    printf("Sum of columns:\n");
    for(int j = 0; j < 3; j++)
        printf("Column %d: %d\n", j + 1, colSum[j]);
    
    return 0;
}
🖥️ Sample Output:
Enter elements of 3x3 matrix:
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





🔹 🧠 07. Display Lower Triangular Matrix

#include <stdio.h>
int main() {
    int matrix[3][3];
    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    printf("Lower Triangular Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if (j <= i)
                printf("%d\t", matrix[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }
    return 0;
}
🖥️ Sample Output:
Enter elements of 3x3 matrix:
1 2 3
4 5 6
7 8 9
Lower Triangular Matrix:
1       0       0
4       5       0
7       8       9







🔹 🧠08. Display Upper Triangular Matrix

#include <stdio.h>
int main() {
    int matrix[3][3];
    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    printf("Upper Triangular Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if (j >= i)
                printf("%d\t", matrix[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }
    return 0;
}

🖥️ Sample Output:
Enter elements of 3x3 matrix:
1 2 3
4 5 6
7 8 9
Upper Triangular Matrix:
1       2       3
0       5       6
0       0       9






🔹 🧠 09. Check if Matrix is Sparse

#include <stdio.h>
int main() {
    int matrix[3][3], nonZeroCount = 0;
    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if (matrix[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }
    if (nonZeroCount < (3 * 3) / 2)
        printf("The matrix is a sparse matrix. \n");
    else
        printf("The matrix is not a sparse matrix. \n");
    
    return 0;
}
🖥️ Sample Output:
Enter elements of 3x3 matrix:
0 0 0
4 0 0
0 0 5
The matrix is a sparse matrix. 









🔹 🧠10. Find Row with Maximum Number of 1s

#include <stdio.h>
int main() {
    int matrix[3][3], maxRowIndex = -1, maxCount = 0;
    printf("Enter elements of 3x3 matrix (0 or 1):\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    for(int i = 0; i < 3; i++) {
        int count = 0;
        for(int j = 0; j < 3; j++) {
            if (matrix[i][j] == 1)
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            maxRowIndex = i;
        }
    }
    if (maxRowIndex != -1)
        printf("Row with maximum number of 1s: Row %d (Count: %d) \n", maxRowIndex + 1, maxCount);
    else
        printf("No 1s found in the matrix. \n");

    return 0;
}
🖥️ Sample Output:
Enter elements of 3x3 matrix (0 or 1):
1 0 1
1 1 0
0 0 1
Row with maximum number of 1s: Row 2 (Count: 2) 🌟
