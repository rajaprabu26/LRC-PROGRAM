#include<iostream>
#include"sender.h"
#include"reciver.h"
#include"LRC.h"
//#include"hamming.h"
//#include"LRC.h"
//#include"CRC.h"
using namespace std;
int main()
{

    int n,c[10],x,x1,t,k;
    string s;
    cout<<"enter the number of string\n";
    cin>>s;
    n=s.length();
    sender a2,a3,a4,a5,a6,a7;
    do
    {
        cout<<"1.sender\n2.reciver\n3.hammingcode\n4.LRC\n";
        cin>>x;
        switch(x)
        {
            case 1:
                {

                    a2.get(s,n);
                    a3.binary(a2.a,n);
                    a4.display(a3.b,n);

                    a5.check(a3.b,n);
                    a6.parity(a5.co,a3.b,n);
                    a7.disp(a3.b,n);
                    break;
                }
            case 2:
                {

                    reciverCheck(a3.b,n);
                 //   pri(a3.co1,n);
                    break;
                }
            case 4:
                {
                        int n1,n2;
                       do
                       {
                           cout<<"1.encrypted code\n2.induce error\n3.reciver message\n";
                           cin>>n1;
                           switch(n1)
                           {
                           case 1:
//                                    cout<<"\nparity bit \n";
                                    lrc1(a3.b,n,c);
                                    cout<<"\nEncrypted code:\n";
                                    lrc2(c,n,a3.b);
                                    lrc3(a3.b,n);
                                    break;
                            case 2:
                                    cout<<"\ncharacter\n";
                                    cin>>t;
                                    cout<<"\nnumberof bit\n";
                                    cin>>k;
                                    cout<<"\nerror data:\n";
                                    error(a3.b,n,t,k);
                                    displaylrc(a3.b,n);
                                    cout<<"\nReceiver side (without parity bit):\n";
                                    de(a3.b,n);
                                    check(a3.b,n);
                                    break;
                            case 3:
                                    cout<<"\nReceived message:\n";
                                    rmsg1(a3.b,n);
                                    break;
                            default:
                                    cout<<"\nenter the correct chioce\n";
                                    break;
                           }
                           cout<<"\ncontinue the lrc\n1.yes\n0.no\n";
                           cin>>n2;
                       }while(n2!=0);
                       break;
                }
        }
        cout<<"\ndo you want continue\n1.yes\n0.no\n";
        cin>>x1;
    }while(x1!=0);
return 0;
}


