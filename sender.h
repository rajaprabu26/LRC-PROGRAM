#include<iostream>
#include<string.h>
using namespace std;
class sender
{
    public:

    int a[10],b[10][10],co[10],b1[10][10];
     int i,j,k,l,s,n1,mask,count1;
     sender()
     {
       i=0;j=0;k=0;l=0;s=0;n1=0,mask=128,count1=0;
     }
     void get(string s1,int n)
     {
        if(i<n)
        {

            a[i]=s1[i];
            cout<<"the character is\t"<<s1[i]<<"\t ascii value \t"<<a[i]<<"\n";
            i++;
            get(s1,n);
        }
        else
        {
            return;
        }

    }
void binary(int a[10],int n)
    {
    if(i<n)
    {

        int j=0;
        int mask=128;
        while(mask>0)
        {
            if((a[i]&mask)==0)
            {
                b[i][j]=0;
                j++;
            }
            else
            {
                b[i][j]=1;
                j++;
            }
            mask=mask>>1;
        }
        j=0;
        i++;
        binary(a,n);
    }
    else
    {
        return;
     }
}
int display(int b[10][10],int n)
{

    static int i=0,j=0;
    if(i<n)
    {
        if(j<7)
        {
            cout<<b[i][j];
            j++;
            display(b,n);
        }
        j=0;
        i++;

        display(b,n);
    }
    else
    {
        return 0;
    }
}
int check(int b2[10][10],int n)
{

    static int i=0,j=0;
   if(n>i)
        {
        if(j<7)
        {
            if(b2[i][j]==1)
            {
                count1++;
            }
            j++;
            check(b2,n);
        }
        co[i]=count1;
        count1=0;
        j=0;
        i++;
        check(b2,n);
    }
    else
    {
        return 0;
    }

}
int parity(int a[10],int b1[10][10],int n)
{
   static int l=0,s=7;
    if(k<n)
    {
            if((a[k]%2)==1)
            {
            cout<<"odd parity\n";
            b1[l][s]=1;
            k++;
            l++;
            parity(a,b1,n);
            }
            else
            {
            cout<<"even parity\n";
            b1[l][s]=0;
            k++;
            l++;
            parity(a,b1,n);
            }
    }
    else
    {
        return 0;
    }

}

int disp(int b1[10][10],int n)
{


    static int i=0,j=0;
    if(i<n)
    {
        if(j<=7)
        {
            cout<<b1[i][j];
            j++;
            disp(b1,n);
        }
        j=0;i++;
        disp(b1,n);
    }
    else
    {
        return 0;
    }
}
};

