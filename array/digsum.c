#include<stdio.h>
int main(){
    int n,sum = 0;
    printf("enter a size of arrya");
    scanf("%d",&n);
    int arr[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(i == j){
                sum += arr[i][j];
            }
        }
    }
    printf("sum of diagonal = %d",sum);
    return 0;
}