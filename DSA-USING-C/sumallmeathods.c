#include <stdio.h>

int fun1(int n) {//O(n) time complexity
                 //O(1) space complexity
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}


int fun2(int n) {//O(1) time complexity
                 //O(1) space complexity
    return n * (n + 1) / 2;
}


int fun3(int n){//O(n) time complexity
                //O(1) space complexity
    int sum =0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum++;
        }
    }
    }
int fun4(int n) {//O(n) time complexity
                 //O(n) space complexity
    if (n == 0) {
        return 0;
    }
    return n + fun4(n - 1);
    }
int fibonacci_num(int n) {//O(2^n) time complexity
                      //O(n) space complexity
    if (n == 1) {
        return 1;
    }
    if (n == 0) {
        return 0;
    } 
    else {
        return fibonacci_num(n - 1) + fibonacci_num(n - 2);
    }
    }

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers using recursion is: %d\n", n, fun4(n));
    printf("Sum of first %d natural numbers using iteration is: %d\n", n, fun1(n));
    printf("Sum of first %d natural numbers using formula is: %d\n", n, fun2(n));
    printf("Sum of first %d natural numbers using while loop is: %d\n", n, fun3(n));
    printf("Fibonacci number at position %d is: %d\n", n, fibonacci_num(n));
    return 0;
}