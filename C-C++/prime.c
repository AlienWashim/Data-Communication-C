#include <stdio.h>
int first(){
    int a;
    printf("Enter your first number: ");
 scanf("%d",&a);
return a;
}

void prime(int n)
{
    int flag = 0;
    for(int i = 2; i <=n/2; i++)
    {
        if(n%i == 0)
        {
            printf("Not Prime");
            //printf("\nDivisor found = %d Result = %d",i,n/i);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("Prime");
    }


}
int main()
{
    prime(first());
}
