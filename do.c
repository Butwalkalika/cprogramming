#include<stdio.h>
void pattern(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            printf("*");
        }
        for(int j=n;j>=i;j--){
            printf("  ");
        }
        for(int j = 1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = n;i>=1;i--){
        for(int j = 1;j<=i;j++){
            printf("*");
        }
        for(int j=n;j>=i;j--){
            printf("  ");
        }
        for(int j = 1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
//    int a =0;
//    do{
//     printf("%d ",a);
//     a++;
//    }while(a<10);
pattern(4);
    return 0;
}
