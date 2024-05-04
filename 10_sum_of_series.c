#include <stdio.h>

int powr( int base, int pr)
{
    int num =1 ;
    for(int i= 1 ; i <= pr; i++)
    {
       num = num*base;
    }

    return num;
}

int main()
{
    int n; int sum= 0;
     
    printf("Enter the no of terms of sereis : ");
    scanf("%d",&n);

    for( int i = 1; i <= n; i++)
    {
      sum = sum + (powr(10,i)-1);
    }

    printf("sum = %d",sum);


}
