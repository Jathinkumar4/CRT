/* Polycarp doesn't like integers that are divisible by 3 or end with the digit 3
 in their decimal representation. Integers that meet both conditions are disliked by Polycarp, too.

Polycarp starts to write out the positive (greater than 0) integers which he likes: 1,2,4,5,7,8,10,11,14,16,…
Output the k-th element of this sequence (the elements are numbered from 1).

Input
The first line contains one integer t (1≤t≤100) — the number of test cases. Then t
 test cases follow.

Each test case consists of one line containing one integer k(1≤k≤1000).

Output
For each test case, output in a separate line one integer x— the k-th element of the sequence 
that was written out by Polycarp.*/



#include <stdio.h>

int isLiked(int number) {
    return (number % 3 != 0) && (number % 10 != 3);
}

int findKthLikedNumber(int k) {
    int count = 0;
    int current = 0;
    while (count < k) {
        current++;
        if (isLiked(current)) {
            count++;
        }
    }
    return current;
}


int main() {
    int t;
    scanf("%d", &t);

    int k;
    int i=0;
    for (; i < t; i++) {
        scanf("%d", &k);
        printf("%d\n", findKthLikedNumber(k));
    }
    
    return 0;
}  
    /*10
      1
      out: 1
      2
      out: 2
      3
      out: 4
      4
      out: 5
      5
      out: 7
      6
      out: 8
      7
      out: 10
      8
      out: 11
      9
      out: 14
      1000*/

