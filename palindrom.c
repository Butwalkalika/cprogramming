#include<stdio.h>
int main(){
    int n,r = 0;
    printf("Enter a number");
    scanf("%d",&n);
    int a = n;
    while (n!=0)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    if(a == r){
        printf("palindrom");
    }else{
        printf("not palindrom");
    }
    return 0;
}