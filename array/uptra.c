#include<stdio.h>
int main(){
    int n;
    printf("enter a size of matrix");
    scanf("%d",&n);
    int arr[n][n];
    for(int i= 0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("ans= \n");
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(j>=i){
                printf("%d ",arr[i][j]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}