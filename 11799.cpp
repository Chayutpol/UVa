#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
main()
{
    int n,max,temp=0;
    cin >> n;
    char c[2000];
    cin.getline(c,2000);
    for(int i=0;i<n;i++)
    {
        max=0;
        cin.getline(c,2000);
        int k=strlen(c);
        for(int j=0;j<k;j++)
        {
            if(c[j]!=' ')
            {
                if(temp!=0)
                {
                    temp=temp*10;
                    temp+=c[j]-48;
                }
                else
                {
                    temp=c[j]-48;
                }
            }
            else
            {
                if(max<temp)
                    max=temp;
                    temp=0;
            }
            if(j==k-1)
            {
                if(max<temp)
                    max=temp;
                    temp=0;
            }
        }
        cout << "Case "<<i+1<<": "<< max << endl;
        //cin.getline(c,200);
    }
}
