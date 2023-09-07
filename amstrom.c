#include<stdio.h>
int main()
{
    int n,a=0;
    printf("enter a number: ");
    scanf("%d",&n);
    int r = n;
    while(n!=0){
        a = a + (n % 10)*(n % 10)*(n % 10);
        n /= 10;
    }
    if(r == a){
        printf("armstrong");
    }else{
        printf("not armstrong");
    }
    return 0;
}
