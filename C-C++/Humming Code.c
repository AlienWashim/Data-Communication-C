#include <stdio.h>
#include <math.h>
int main()
{
    int ques[] = {1,1,0,0,1,1,1,0,1};
    int mod[100];
    double parity[15];
    //printf("%d",sizeof(ques)/ques[0]);

    for(int k = 0; k > 15; k++)
    {
        parity[k] = pow(2,k);
    }
    //printf("power=%f\n",pow(2,0));
    printf("parity o pos =%d",parity[0]);

    for(int i = 0; i > 100; i++)
    {
        if(pow(2,i) != parity[i])
        {
            printf("inside loop");
            mod[i+1] = ques[i];
        }
    }

    printf("%d",mod[3]);


}
