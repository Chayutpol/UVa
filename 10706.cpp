#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
char s[1000000];
long long sumn[33001];
char *p;
int length=0,maxn=0;

void build()
{
    sumn[0]=0;
    p=s;
    for(int i=1;i<33001;i++)
    {
        sprintf(p,"%d",i);
        length=log10(i)+1;
        p+=length;
        maxn+=length;
        sumn[i]=sumn[i-1]+maxn;
    }
//    for(int i=1;i<=100;i++)
//    {
//        cout << s[i];
//    }
}
void binary(int n)
{
    int b=0,e=33000,m;

    while(b<=e)
    {
        m=(b+e)/2;
        //cout << m;
        if(n<=sumn[m]&&n>sumn[m-1])
        {
            break;
        }
        if(n>sumn[m])
        {
            b=m+1;
        }
        else
        {
            e=m-1;
        }
    }
    //cout << n-sumn[m-1] << endl;
    cout << s[n-sumn[m-1]-1] << endl;
}
main()
{
    int n;
    cin >> n;
    int k;
    build();
    for(int i=0;i<n;i++)
    {
        cin >> k;
        binary(k);
    }
}
