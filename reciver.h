#include<math.h>
void pri(int *,int);
int *co1;
void reciverCheck(int b[10][10],int n)
{
    static int i=0,l=0,s=0,count1=0,k=0;
        if(l<n)
        {
            if(s<8)
            {   //cout<<b[l][s];
                if((b[l][s])==1)
                {
                    ++count1;
                    ++s;
                    reciverCheck(b,n);
                    s=0;
                }
            ++s;
            reciverCheck(b,n);
            }
        if((count1%2)==0)
        {
            cout<<"message sucess\n";

        }
        else
        {
            cout<<"not sucess\n";

        }
            s=0;
            //co1[k]=count1;
            k++;
            count1=0;

            ++l;
            reciverCheck(b,n);

        }
    else
    {
        //pri(co1,n);
     return;
     }
}
void pri(int *co2,int n)
{
    for(int i=0;i<n;i++)
    {
        if((co2[i]%2)==0)
        {
            cout<<"message sucess\n";

        }
        else
        {
            cout<<"not sucess\n";

        }
    }
}
