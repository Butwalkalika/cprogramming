#include<stdio.h>
int main()
{
    int n,ans = 1;
    printf("Enter a number");
    scanf("%d",&n);
    // for(int i = 1;i<=n;i++){
    // ans = i * ans;
    // }
    // printf("%d",ans);
   for(int i = 1;i<=n;i++){
    if(n%i == 0){
        printf("%d ",i);
    }
   }
    return 0;
}
