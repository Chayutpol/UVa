#include <cstdio>
#include <iostream>
using namespace std;
main()
{
    int min=9999999,n,b,h,w,temp,price;
    while(cin >> n >> b >> h >> w)
    {
        min=9999999;
        for(int i=0;i<h;i++)
        {
            cin >> price;
            for(int j=0;j<w;j++)
            {
                cin >> temp;
                if(temp>=n)
                {
                    //cout << temp;
                    if(price<min)
                    {
                        min=price;
                    }
                }
            }
        }
        if(min*n>b)
        {
            cout << "stay home" << endl;
        }
        else
        {
            cout << min*n << endl;
        }
    }
}
