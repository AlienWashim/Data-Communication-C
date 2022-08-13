#include <stdio.h>
int check( int parity[],int checker)
{
    int res = 0;
    for(int i = 1; i < parity.length(); i++)
    {
        if(parity[i] == checker)
        {
            return 4;
        }
        else
        {
            res = 1;
        }
    }
    return res;
}

int size(int i) {
        int res = 1;
        if (i == 0) {
            return 1;
        } else {
            for (int k = 1; k <= i; k++) {
                res = res * 2;
            }
            return res;
        }

}
int option()
    {
        int ret = 0;
        printf("\n\n***   Select a Option   ***\n1. Even parity\n2. Odd parity\n");
        int choice;
        scanf("%d",&choice);
        printf(" ");
        if(choice == 1)
        {
            ret = 1;
        }
        else if(choice == 2){
            ret = 2;
        }
        return ret;
    }
void solve_it(int mod_size, int ques_size, int mod[],int parity[])
    {
        int count = 0;
        option(); //calling option method to choose option from user
        for(int i = 1; parity[i] < mod_size; i++) //parity position selection
        {
            //System.out.println("main loop");
                for(int k = parity[i]; k <= mod_size; k = k + (parity[i]*2)) //segment selection
                {
                    for(int t = 0; t < parity[i]; t++) //count 1 of every selected segment
                    {
                        if(mod[k+t] == 1)
                        {
                            count++;
                        }
                    }
                }
            //System.out.println("count = "+count);
           if(selector == 1) // if selector is 1 then even parity will be selected
           {
               //System.out.println("count = "+count);
               if(count%2 == 0)
               {
                   mod[parity[i]] = 0;
               }
               else
               {
                   mod[parity[i]] = 1;
               }

               //System.out.println("mod value = "+mod[parity[i]]);
           }
           else if(selector == 2) // if selector is 2 then odd parity will be selected
           {
               //System.out.println("count = "+count);
               if(count%2 == 0)
               {
                   mod[parity[i]] = 1;
               }
               else
               {
                   mod[parity[i]] = 0;
               }
               //System.out.println("mod value = "+mod[parity[i]]);
           }
           count = 0;
        }
    }
    void print(int mod[],int end,int in,int ques[])
    {
        printf("Question: ");
        for(int i = 0; i < in; i++)
        {
            printf("%d "ques[i]);
        }

        printf("\nAnswer: ");
        for(int i = 1; i <= end; i++)
        {
            printf("%d ",mod[i]);
        }
        printf(" ");
    }

void main() {
        int mod[100];
        int parity[100];

        //input start
        printf("Enter Array Size: ");
        int in;
        scanf("%d",&in);

        int ques[in];
        printf("Now enter %d array element: ",in);
        for(int i = 0; i < in; i++)
        {

            int store;
            scanf("%d",&store);
            ques[i] = store;
        } //input end

        for (int i = 0; i < 15; i++) {
            parity[i + 1] = obj.size(i); //storing parity value manually
            //System.out.println(parity[i + 1]);
        }
        //System.out.println(parity[1]);

        //modified array input start
        int n = 0;
        for (int s = 1; s <= mod.length; s++) {
            //System.out.println("check res = "+obj.check(parity,s));
            if(obj.check(parity,s) && n<in) //check method return true if it is not a parity position
            {
                mod[s] = ques[n];
                n++;
                x = s;
                //System.out.println("mod "+s+"="+mod[s]);
            }
        }
        //System.out.println("modified array size= "+x);
        //modified array input done

        obj.solve_it(x,in,mod,parity); //calling solve method to do all operation
        obj.print(mod,x,in,ques); //calling print method to print question and answer
    }

}

