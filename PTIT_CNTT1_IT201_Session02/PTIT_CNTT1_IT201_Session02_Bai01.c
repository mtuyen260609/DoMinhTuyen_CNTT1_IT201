#include <stdio.h>
#include <stdlib.h>

int main(){
int n;

    printf("Moi nhap n: ( 0< n <= 100)\n");
    scanf("%d",&n);
    if(0 > n || n > 100){
        printf("n khong hop le \n");
    }
    int *arr = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
int max = arr[0];
    for(int i = 0; i <= n; i++){
        if(arr[i] > max){
            max = arr[i];
            }
    }
printf("Phan tu lon nhat la : %d\n",max);
    free(arr);
return 0;
}
