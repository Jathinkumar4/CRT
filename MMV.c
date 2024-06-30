/* Problem Statement:
Given a 3x3 matrix of integers, determine if it is a magic matrix.

Input:
The input consists of 9 space-separated integers representing the matrix elements in row-major order.

Output:
Print "YES" if the matrix is a magic matrix, otherwise print "NO".

Example:
Input:
2 7 6 9 5 1 4 3 8
Output:
YES */

#include <stdio.h>

int main() {
    int matrix[3][3];
    int sum_diagonal1 = 0, sum_diagonal2 = 0;
    int sum_row[3] = {0, 0, 0};
    int sum_col[3] = {0, 0, 0};

    // Reading the 3x3 matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating the sum of rows, columns, and diagonals
    for (int i = 0; i < 3; i++) {
        sum_diagonal1 += matrix[i][i];
        sum_diagonal2 += matrix[i][2 - i];
        for (int j = 0; j < 3; j++) {
            sum_row[i] += matrix[i][j];
            sum_col[j] += matrix[i][j];
        }
    }

    // Checking if all rows, columns, and diagonals have the same sum
    int magic_sum = sum_row[0];
    int is_magic = 1;
    for (int i = 0; i < 3; i++) {
        if (sum_row[i] != magic_sum || sum_col[i] != magic_sum) {
            is_magic = 0;
            break;
        }
    }
    if (sum_diagonal1 != magic_sum || sum_diagonal2 != magic_sum) {
        is_magic = 0;
    }

    if (is_magic) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}



/*Explanation:
Input Reading: The program reads a 3x3 matrix from the input.
Sum Calculation: It calculates the sums of each row, each column, and the two main diagonals.
Validation: It checks if all the rows, columns, and diagonals have the same sum.
Output: The program prints "YES" if the matrix is a magic matrix, otherwise prints "NO".*/
