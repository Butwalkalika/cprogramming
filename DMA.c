#include <stdio.h>
#include <stdlib.h>
#include <Math.h>
int prime(int,int);
int sum(int ,int);
int main(){
    int a ,b;
    scanf("%d%d",&a,&b);
    prime(a,b);
    printf("\n");
    // prime(50,150);
    scanf("%d%d",&a,&b);
    prime(a,b);
    printf("\n");
    // prime(100,1000);
    return 0;
}
int prime(int a,int b){
    for(int i = a;i<=b;i++ ){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    return 0;
}
int sum(int a, int b){
    return 0;
}
