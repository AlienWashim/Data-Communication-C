#include<stdio.h>
char data[20],div[20],temp[4],total[100];
int i,j,datalen,divlen,len,flag=1;
void checker(int test)
{
    for(j=0; j<divlen; j++)
        data[j]=total[j];
    while(j<=len)
    {
        if(data[0]=='1')
            for(i = 1; i <divlen ; i++)
                data[i] = (( data[i] == div[i])?'0':'1');
        for(i=0; i<divlen-1; i++)
            data[i]=data[i+1];
        data[i]=total[j++];
    }
}
int main()
{
    int test = 1;
    printf("Enter bit number of input data: ");
    scanf("%d",&datalen);
    printf("\nEnter bit number of divisor: ");
    scanf("%d",&divlen);
    len=datalen+divlen-1;
    printf("\nEnter the input data: ");
    scanf("%s",&data);
    printf("\nEnter the divisor data: ");
    scanf("%s",div);

    for(i=0; i<datalen; i++)
    {
        total[i]=data[i];
        temp[i]=data[i];
    }

    for(i=datalen; i<len; i++)
        total[i]='0';
    checker(test);
    for(i=0; i<divlen; i++)
        temp[i+datalen]=data[i];
    printf("\nSender side data: %s",temp);

    checker(test);
    for(i=0; i<divlen-1; i++)
        if(data[i]=='1')
        {
            flag=0;
            break;
        }
    if(flag==0)
        printf("\nThe data is real");
    else
        printf("\nThe data is manipulated\n");
}

