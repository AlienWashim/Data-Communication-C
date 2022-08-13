#include <stdio.h>
int main()
{
    printf("Enter data size: ");
    int dsize;
    scanf("%d",&dsize);

    char flag = 'c', stuff = 'a';

    char data[dsize];
    char mod[100];
    mod[0] = flag;

    printf("Enter array data: ");
    //kjcfksdjcfiewjrfgakcgjaijfciaccscdjfog
    for(int i = 0; i < dsize+1; i++)
    {
        scanf("%c",&data[i]);
    }
    //printf("Data inside: ");
    //for(int k = 0; k < dsize+1; k++)
    //{
     //   printf("%c",data[k]);
    //}
    //printf("d=%d\n",dsize);
    int count = 0,pos = 1;
    for(int i = 0; i < dsize+1; i++)
    {
        if( data[i] != flag)
        {
            mod[pos] = data[i];
            pos++;
        }
        else
        {
            mod[pos] = stuff;
            pos++;
            mod[pos] = data[i];
            pos++;
            count++;
        }
    }
    //printf("Value of pos = %d\n",pos);
    mod[pos] = flag;
    printf("%c",mod[1]);
    printf("Modified data: ");
    for(int i = 0; i < pos+1 ; i++)
    {
        printf("%c",mod[i]);
    }

    printf("\nNumber of char stuffed: %d\n",count);
}
