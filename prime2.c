#include <stdio.h>
int main()
{
    int n = 1;
    int count = 0;
    while (n != 100)
    {
        int count =0 ;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
               count++;
            }
        }
        if(count==0){
            printf("%d ",n );
            
        }
        n++;
    }

    return 0;
}