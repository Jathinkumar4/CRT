/*Ann has recently started commuting by subway. We know that a one ride subway ticket costs a rubles. 
Besides, Ann found out that she can buy a special ticket for m rides (she can buy it several times).
It costs b rubles. Ann did the math; she will need to use subway n times. 
Help Ann, tell her what is the minimum sum of money she will have to spend to make n rides?

Input
The single line contains four space-separated integers n, m, a, b (1 = n, m, a, b = 1000) — the number of rides Ann has planned,
the number of rides covered by the m ride ticket, the price of a one ride ticket and the price of an m ride ticket.

Output
Print a single integer — the minimum sum in rubles that Ann will need to spend. */


#include <stdio.h>

int min(int x, int y) {
    return x < y ? x : y;
}

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    // Calculate the cost using only one-ride tickets
    int cost1 = n * a;

    // Calculate the cost using the m-ride tickets
    int cost2 = (n / m) * b + min((n % m) * a, b);

    // Determine the minimum cost
    int min_cost = min(cost1, cost2);

    printf("%d\n", min_cost);

    return 0;
}

