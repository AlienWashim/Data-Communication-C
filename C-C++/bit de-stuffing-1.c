#include <stdio.h>
int main()
{
    int f = 23;
    int ques[23] = {1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1};
    int ans[100];

    int flag = 0, n = 0;
    for(int i = 4; i < f-4;i++)
    {
        if(ques[i] == 1)
        {
            flag++;
            ans[n] = ques[i];
            //printf("%d",ans[n]); //result print
            n++;
        }
        else
        {
            flag = 0;
            ans[n] = ques[i];
            //printf("%d",ans[n]); //result print
            n++;
        }
        if(flag == 5)
        {
            i++;
            flag = 0;
        }
    }

    //result print
    for(int i = 0; i < 100 & ans[i] != '\0'; i++)
    {
        printf("%d",ans[i]);
    }
}
