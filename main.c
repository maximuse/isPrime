#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isPrime(int n) {
    if(n == 1) {
        return false;
    }

    if(n == 2) {
        return true;
    }

    for(int i=2; i<n; i++) {
        if(n%i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    printf("Number: ");
    scanf("%d", &n);

    printf("\nThe %d is %s.\n\n", n, isPrime(n) ? "prime" : "not prime");

    system("PAUSE");
    return 0;
}