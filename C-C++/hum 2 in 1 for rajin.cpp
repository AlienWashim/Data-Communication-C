////hammingRAJIN.homework////

#include<iostream>
using namespace std;

int ham(int *data,int *redun,int n,int r,int op)
{
    int hammc[n],count=0,k=0,t=r;
    for(int i=n; i>=1; i--)
    {
        if(redun[t-1]!=i)
        {
            hammc[i]=data[k];
            ++k;
        }
        else
        {
            hammc[i]=0;
            --t;
        }
    }
    for(int i=0; i<r; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if((1<<i)&j)
            {
                if(hammc[j]==1)
                {
                    ++count;
                }
            }
        }

        if(op == 1)
        {
            if(count%2==0)
            {
                hammc[redun[i]]=0;
            }
            else
            {
                hammc[redun[i]]=1;
            }
        }
        else if(op == 2)
        {
            if(count%2==0)
            {
                hammc[redun[i]]=1;
            }
            else
            {
                hammc[redun[i]]=0;
            }
        }

        count=0;
    }
    cout<<"THE HAMMING CODE IS:";
    for(int i=n; i>=1; i--)
    {
        cout<<hammc[i];
    }
}
int main()
{
    int size,a=2,r=1;
    cout<<"ENTER THE SIZE OF DATA :";
    cin>>size;
    while(1)
    {
        if(a>=(size+1+r))
        {
            break;
        }
        ++r;
        a=a*2;
    }
    int data[size];
    int redun[5]= {1,2,4,8,16},j=r;
    cout<<"ENTER DATA :";
    for(int i=0; i<size; i++)
    {
        cin>>data[i];
    }
    if(data[0]==0)
    {
        cout<<"INAPPROPIATE DATA ENTERED";
        //exit(0);
    }
    cout << "......Option......\n1. Even\n2. Odd\n"<< endl;
        int op;
        cin >> op;
    ham(data,redun,size+r,r,op);
    return 0;
}
