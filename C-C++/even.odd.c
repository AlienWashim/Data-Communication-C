#include <stdio.h>
int first(){
    int a;
    printf("Enter your first number: ");
 scanf("%d",&a);
return a;
}

void even_odd(int n)
{
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {

        printf("odd");
    }
}
int main()
{
    even_odd(first());
}
