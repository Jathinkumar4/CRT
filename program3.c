/* Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains 
only the lucky digits 4 and 7.For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.
Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number
n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes). */


#include <stdio.h>

int isLucky(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit != 4 && digit != 7) {
            return 0;
        }
        number /= 10;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int almostLucky = 0;
    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            almostLucky = 1;
            break;
        }
    }

    if (almostLucky) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
/*output 1. 16- YES
         2. 78- NO
         3. 44- YES*/
