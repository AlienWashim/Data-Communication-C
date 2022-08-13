#include <stdio.h>
int main()
{
    int f = 18;
    char ques[18] = "WAI lovelove youWA";
    char ans[100];
    char check[] = "love";
    printf("\nQuestion: ");
    for(int k = 0; k < 18; k++)
    {
        printf("%c",ques[k]);
    }

    int n = 0, count = 0, flag = 0;
    for(int i = 2; i < f; i++)
    {
        if(ques[i] == check[flag])
        {
            //printf("count = %d ",count);
            ans[n] = ques[i];
            n++;
            i++;
            count++;
            //printf("%d ",count);
            for(int j = 1; j <= 3; j++)
            {
                if(ques[i] == check[j])
                {
                    //printf("OK ");
                    if(count < 5)
                    {
                        ans[n] = ques[i];
                        n++;
                        i++;
                    }
                    count++;
                }
                i++;
                if(count == 4)
                {
                    j = -1;
                }
                if(count == 8)
                {
                    count = 0;
                }

            }
        }
        else
        {
            ans[n] = ques[i];
            n++;
        }
    }
    printf("\n\nAnswer: ");
    for(int i = 0; i < n-2; i++)
    {
        printf("%c",ans[i]);
    }
    printf("\n\n");
}

