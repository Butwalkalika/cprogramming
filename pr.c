#include<stdio.h>
#include <stdbool.h>
int fib();

int main(){
   int arr[] = fib();
    for(int i =0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
int fib(){
    int arr[] = {0,1,1,2,3};
    return arr;
}