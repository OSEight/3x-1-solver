#include<stdio.h>

void collatz(int n) {
    printf("%d ", n);
    
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
        
        printf("%d ", n);
    }
}

int main() {
    int number = 1;
    while (1 == 1){
        printf("Enter a positive integer: ");
        number = number + 1;
    
        collatz(number);
        printf("\n");
    }
    return 0;
}
