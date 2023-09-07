#include<stdio.h>
int main(){
    int n,ans = 1 ,a;
    printf("enter 1 to claulate factorial 2 for factor 3 for even odd and 4 for exit ");
    scanf("%d",&n);
    switch(n){
        case 1:
        //factorial of a nuber
        printf("enter a number to calulate a fatorial ");
        scanf("%d",&a);
        for(int i =1;i<=a;i++){
            ans *= i;
        }
        printf("factorial of a number %d  =  %d ",a,ans);
        break;
        case 2:
        //factor of a number
        printf("enter a number to caluclate factor ");
        scanf("%d",&a);
        for(int i = 1;i<=a;i++){
            if(a%i == 0){
                printf("%d ",i);
            }
        }
        break;
        case 3:
        //even odd
        printf("enter a number to find given number is even or odd ");
        scanf("%d",&a);
        if(a%2==0){
            printf("%d is even",a);
        }else{
            printf("%d is odd",a);
        }
        break;
        case 4:
        printf("program exit");
        break;
        default:
        printf("wrong entry");
    }

    return 0;
}