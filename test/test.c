#include <stdio.h>
int main()
{
    /*
            1
           2 2
          3 3 3
         4 4 4 4
    */
   int n;
   printf("Enter a number");
   scanf("%d",&n);
   int a =1;
    for (int i = 1; i < n; i=i+2)
    {
        for(int j = n;j>i;j--){
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",a);
        }
        a++;
        printf("\n");
    }
    return 0;
}