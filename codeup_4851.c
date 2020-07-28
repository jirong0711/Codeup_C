#include <stdio.h>
#define MAX 100000

int cal_game(int,int,int);

int main(void){
    int R,C,i,a,b;
    int arr[MAX];

    scanf("%d", &R);
    scanf("%d", &C);

    for (i=0;i<C;i++){
        scanf("%d %d",&a,&b);
        arr[i] = cal_game(a,b,R);
    }    
    for (i=0;i<C;i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}

int cal_game(int a, int b, int R){
    int remain;
    if(a==b){
        if(a<=R) return 1;
        else return 0;
    }
    else if(a > b){
        remain = a-b;
        if(remain <= (R-a+2)) return 1;
        else return 0;

    }
    else {
        remain = b-a;
        if(remain <= (R-b+1)) return 1;
        else return 0;
    }
}







