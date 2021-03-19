#include <cstdio>
#include <iostream>
#include <utility>
using namespace std;
main()
{
    int t,n,ans,m;
    double val,down,owe;
    double g[101],p;
    while(cin >> t >> down >> val >> n,t>=0)
    {
        double monthly=val/t;
        owe=val;
        val+=down;


        for(int i=0;i<n;i++)
        {
            cin >> m >> p;
            for(int i=m;i<101;i++)
                g[i]=p;
        }
        val=val*(1.00-g[0]);
        int l=0,ans=0;
        while(val<owe)
        {
            ans++;
            owe-=monthly;
            val=val*(1.00-g[ans]);
            //cout << val << " " << owe  << " " << g[ans]<< endl;


        }
        if(ans!=1)
            cout << ans << " months\n";
        else
            cout << ans << " month\n";
    }

}
