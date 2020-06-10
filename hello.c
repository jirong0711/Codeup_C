#include <stdio.h>

int calculate_recursive(int, int);

int main(void){
    int N,M,K,i1,i2,j1,j2,a,b;
    scanf("%d %d %d",&N,&M,&K);
    i1 = (K-1) / M; 
    j1 = ( (K-1) % M);
    i2 = N - i1 - 1;
    j2 = M - ((K-1) % M) -1 ;
    a = calculate_recursive(i1,j1);
    b = calculate_recursive(i2,j2);
    printf("%d", a*b );

return 0;
}

int calculate_recursive(int n, int m) {
        if (n == 0 || m == 0) {
           return 1;
        }
        else {
            return calculate_recursive(n-1,m)+calculate_recursive(n,m-1);
        }
}
