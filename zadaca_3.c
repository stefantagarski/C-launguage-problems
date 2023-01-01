#include<stdio.h>
void changearray(int *array,int n){
    int tmp=*array;
    for(int i=1;i<n;i++){
        *(array+i) += tmp;
        tmp = *(array+i);
    }
}
int main(){
    int n,array[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
     printf("The original array is: ");
     printf("\n");
        for (int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    changearray(array,n);
        printf("\n");
        printf("The new array is:");
        printf("\n");
        for(int i=0;i<n;i++){
            printf("%d ",array[i]);
        }

    return 0;
}