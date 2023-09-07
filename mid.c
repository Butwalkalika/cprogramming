#include<stdio.h>
int main(){
    float a,b,c,mid;
    printf("enter three number");
    scanf("%f%f%f",&a,&b,&c);
    if((a>b && a<c) || (a>c && a<b)){
        mid = a;
    }else if((b>a && b<c) || (b>c && b<a)){
        mid = b;
    }else{
        mid = c;
    }
    printf("middle of given number is= %f",mid);
    return 0;
}