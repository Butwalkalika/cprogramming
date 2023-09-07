#include<stdio.h>
int main()
{
    int n,p=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i =2;i<n;i++){
        if(n%i == 0){
            p += 1;
            break;
        }
    }
    if(p > 0){
        printf("not prime");
    }else{
        printf("Prime");
    }
    return 0;
}
