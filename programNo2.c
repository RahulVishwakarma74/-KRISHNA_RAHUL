//Advance level //



#include <stdio.h>

int isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return (n>1);
}

int main() {
    int start, end;
    printf("Enter range: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers: ");
    for(int i=start;i<=end;i++){
        if(isPrime(i)) printf("%d ", i);
    }
    printf("\n");

    return 0;
}
