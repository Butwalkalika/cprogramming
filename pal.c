#include<stdio.h>
int main(){
    int n,r = 0;
    printf("enter a number");
    scanf("%d",&n);
    int a = n;
    while (n!=0)
    {
        int a = n % 10;
        r = r * 10 + a;
        n = n / 10;
    }
    if(a == r){
        printf("palindrom");
    }else{
        printf("not palindrom");
    }
    return 0;
}