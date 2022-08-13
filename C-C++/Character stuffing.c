#include <stdio.h>
int main()
{
    int f = 10;
    char ques[10] = "I hate pig";
    char ans[100] = "WA";
    char check[] = "hate";
    //char interesting[] = "hate";
    //printf("%c",check[1]);

    int n = 2, count = 0;
    for(int i = 0; i < f; i++)
    {
        if(ques[i] == check[count])
        {
            //printf("inside first if\n");
            ans[n] = ques[i];
            n++;
            i++;
            count++;
            for(int j = 1; j <= 3; j++)
            {
                if(ques[i] == check[count])
                {
                    ans[n] = ques[i];
                    n++;
                    i++;
                    count++;
                }
                //printf("Value of j = %d",j);
                if(count == 4)
                {
                    //printf("\ninside love\n");
                    j = 0;
                    for(int k = 0; k < 4; k++)
                    {
                        ans[n] = check[k];
                        n++;
                    }
                    count = 0;
                    n++;
                }
            }
        }
        else
        {
            //printf("Inside else\n");
            ans[n] = ques[i];
            n++;
        }
    }
    ans[n] = 'W';
    ans[n+1] = 'A';

    for(int i = 0; i < n+2; i++)
    {
        if(i == 2)
        {
            printf(" ");
        }
        if(i == n)
        {
            printf(" ");
        }
        printf("%c",ans[i]);
    }
}

