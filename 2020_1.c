#include <stdio.h>
#define MAX 30000
int main(void){
    int arr[MAX] = {0};
    int anw[MAX] = {0};
    int i;
    int max = 2;

    scanf("%d", &arr[0]);

    for(i=0;i <= arr[0]; i++){
        int j=1;JI
        int count = 2;
        arr[1] = i;
        
        while(arr[j] >= 0){
            j++;
            arr[j] = arr[j-2] - arr[j-1];
            count++;
        }

        if (count > max) {
            max = count;
            for(int k=0;k < count;k++){
                anw[k] = arr[k];
            }
        }
    }

    printf("%d\n", max-1);
    for(int k=0;k < max-1; k++){
        printf("%d ", anw[k] );
    }
}

