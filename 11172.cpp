#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
using namespace std;
main()
{
    string temp[1000],nmTemp,Temp,a;
    float prTemp=4;
    int coTemp=4,count=0,n,m,y=0;
    pair<string,pair<int,float> > ans;

    while(1)
    {
        y++;
        ans.second.first=0;
        scanf("%d %d",&n,&m);
        if(n==0)
        {
            break;
        }
        getline(cin,a);
        for(int i=0;i<n;i++)
        {
            getline(cin,temp[i]);
            //cout <<endl<< temp[i];
        }
        for(int l=0;l<m;l++){

            count=0;
            getline(cin,nmTemp,'\n');
            //cout << nmTemp;
            //cin.ignore(1000);
            //cin >> prTemp >> coTemp;
            scanf("%f %d",&prTemp,&coTemp);
            getline(cin,a);
            //cout << prTemp << " "<< coTemp;
            for(int i=0;i<coTemp;i++)
            {
                getline(cin,Temp,'\n');
                for(int j=0;j<n;j++)
                {
                    if(temp[j]==Temp)
                    {
                        count++;
                        break;
                    }
                }
                //cout << count;
            }
            if(ans.second.first<=count)
            {
                if(ans.second.first==count&&prTemp>=ans.second.second)
                    continue;
                ans.first=nmTemp;
                ans.second.first=count;
                ans.second.second=prTemp;
            }
        }
        cout << "RFP #" << y <<  "\n" << ans.first << endl;
        //y--;
    }
}
