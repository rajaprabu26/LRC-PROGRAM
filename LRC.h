#include<math.h>
void lrc1(int b[10][10],int n,int c[7])
{
        static int  i=7,j=0;
            if(i>=0)
            {
                c[i]=0;
                if(j<n)
                {
                c[i]=c[i]^b[j][i];
                j++;
                lrc1(b,n,c);
                }
                j=0;
                i--;
                lrc1(b,n,c);
           }
                else
                {
                        return;
                }
}
void lrc2(int c[10],int n,int b[10][10])
{
        static int k=n,i=7;
            if(i>=0)
                {
                   b[k][i]=c[i];
                        i--;
                lrc2(c,n,b);
                }
        else
        {
                return;
        }
}
void lrc3(int b[10][10],int n)
{
       static  int p,i=0,j=7;
           if(i<=n)
           {
                if(j>=0)
                {
			  cout<<b[i][j];
                        j--;
                        lrc3(b,n);
                }
         //  cout<<"\n";
                 j=7;
                i++;
                lrc3(b,n);
            }
           else
                {
                        return;
                }
}

void error(int a[10][10],int n,int t,int k)
{
   static int i=0,j=7;
        if(i<n)
            {
                if(j>=0)
                {
                   if(i==t&&j==k)
                   {
                       if(a[i][j]==0)
                           a[i][j]=1;
                       else
                           a[i][j]=0;
                   }
                   cout<<a[i][j];
                  j--;
                  error(a,n,t,k);
                }
                j=7;
                i++;
                error(a,n,t,k);
            }
        else
        {
                return;
        }
}
void displaylrc(int b[10][10],int n)
{
        static int i=0,j=7;
        if(i<n)
            {
                if(j>=0)
                {
                    cout<<b[i][j];
                        j--;
                        displaylrc(b,n);
                }
                cout<<"\n";
                j=7;
                i++;
                displaylrc(b,n);
            }
         else
         {
             return;
         }
}
void de(int b[10][10],int n)
{
    bool flag;
    static   int p,i=7,j=0;
    if(i>=0)
    {
            p=0;
            if(j<=n)
                {
                p=p^b[j][i];
                if(p%2!=0)
                {
                    flag=true;
                   //cout<<"true";
                }
                j++;
                de(b,n);
                }
            i--;
            j=0;
            de(b,n);
            if(flag)
            {
                cout<<"\t\tError occured\n";
            }
    }
    else
    {
        return;
    }
}
void check(int b[10][10],int n)
{
        static int i=0,j1=0;

        if(i<n)
            {
                if(j1<7)
                {
                    cout<<b[i][j1];
                    j1++;
                    check(b,n);
                    //cout<<"\n";
                }
                j1=0;
                i++;
                check(b,n);
            }
            else
            {
                return;
            }
}
void rmsg1(int b[10][10],int n)
{
        static int i=0,j1=7;
        if(i<n)
        {
            int dec=0;
            if(j1>=0)
            {
                dec=dec+b[i][j1]*pow(2,j1);
                j1--;
                rmsg1(b,n);
            }
            j1=7;
            i++;
            rmsg1(b,n);
            cout<<char(dec);
        }
        else
        {
            return;
        }
}



