#include<iostream>
#include<string>
using namespace std;
main()
{
    string temp;
    int n,ans,m;
    while(cin>>temp)
    {
        ans=1;
        n=temp.size();
        //cout << n;
        m=n/2+n%2;
        n--;
        for(int i=0;i<m;i++)
        {
            if(ans!=3)
            switch(temp[i])
            {
                case 'E' :
                {
                    if(temp[n-i]=='3')
                    {
                        ans=2;
                        continue;
                    }
                    break;
                }
                case '3' :
                {
                    if(temp[n-i]=='E')
                    {
                        ans=2;
                        continue;
                    }
                    break;
                }
                case 'S':
                {
                       if(temp[n-i]=='2')
                       {
                           ans=2;
                           continue;
                       }
                       break;
                }
                case '2' :
                {
                    if(temp[n-i]=='S')
                    {
                        ans=2;
                        continue;
                    }
                    break;
                }
                case 'L' :
                {
                    if(temp[n-i]=='J')
                    {
                        ans=2;
                        continue;
                    }
                    break;
                }
                case 'J' :
                {
                    if(temp[n-i]=='L')
                    {
                        ans=2;
                        continue;
                    }
                    break;
                }
                case '5' :
                {
                    if(temp[n-i]=='Z')
                    {
                        ans=2;
                        continue;
                    }
                    break;
                }
                case 'Z' :
                {
                    if(temp[n-i]=='5')
                    {
                        ans=2;
                        continue;
                    }
                    break;
                }
            }
            if(ans!=2)
            switch(temp[i])
            {
                case 'E' :
                {
                    if(temp[n-i]=='E')
                    {
                        ans=3;
                        continue;
                    }
                    break;
                }
                case '3' :
                {
                    if(temp[n-i]=='3')
                    {
                        ans=3;
                        continue;
                    }
                    break;
                }
                case 'S':
                {
                       if(temp[n-i]=='S')
                       {
                           ans=3;
                           continue;
                       }
                       break;
                }
                case '2' :
                {
                    if(temp[n-i]=='2')
                    {
                        ans=3;
                        continue;
                    }
                    break;
                }
                case 'L' :
                {
                    if(temp[n-i]=='L')
                    {
                        ans=3;
                        continue;
                    }
                    break;
                }
                case 'J' :
                {
                    if(temp[n-i]=='J')
                    {
                        ans=3;
                        continue;
                    }
                    break;
                }
                case '5' :
                {
                    if(temp[n-i]=='5')
                    {
                        ans=3;
                        continue;
                    }
                    break;
                }
                case 'Z' :
                {
                    if(temp[n-i]=='Z')
                    {
                        ans=2;
                        continue;
                    }
                    break;
                }
            }

            if(temp[i]==temp[n-i])
            {
                if(ans==1)
                if(temp[i]=='B'||temp[i]=='C'||temp[i]=='D'||temp[i]=='F'||temp[i]=='G'||temp[i]=='K'||temp[i]=='M'||temp[i]=='P'||temp[i]=='Q'||temp[i]=='R'||temp[i]=='4'||temp[i]=='6'||temp[i]=='7')
                {
                    ans=3;
                }
            }
            else
            {
                ans=0;
                break;
            }
        }
        cout <<temp<< " -- ";
        if(ans==0)
            cout << "is not a palindrome.\n\n";
        if(ans==1)
            cout << "is a mirrored palindrome.\n\n";
        if(ans==2)
            cout << "is a mirrored string\n\n";
        if(ans== 3)
            cout << "is a regular palindrome.\n\n";
        //cout << ans << endl;
    }
}
