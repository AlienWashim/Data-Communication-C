#include <stdio.h>
int main()
{
    int f = 12;
    int a[12] = {1,1,1,1,1,1,1,1,1,1,1,1};
    int b[100] = {1,1,1,1};

    int flag = 0, n = 3;
    for(int i = 0; i < f;i++)
    {
        if(a[i] == 1)
        {
            flag++;
            b[n+1] = a[i];
            n++;
        }
        else
        {
            flag = 0;
            b[n+1] = a[i];
            n++;
        }
        if(flag == 5)
        {
            b[n+1] = 0;
            n++;
            flag = 0;
        }
    }
    for(int i = n+1; i < n+5; i++)
    {
        b[i] = 1;
    }

    for(int i = 0; i < n+5; i++)
    {
        printf("%d",b[i]);
    }
}
