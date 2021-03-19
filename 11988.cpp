#include <cstdio>
#include <iostream>
#include <cstring>
#include <list>
using namespace std;
main()
{
    char c[100001];
    list<char> ans;
    list<char>::iterator aI=ans.begin();
    while(cin.getline(c,100001))
    {
        int k=strlen(c);
        for(int i=0;i<k;i++)
        {
            if(c[i]=='[')
            {
                aI=ans.begin();
                continue;
            }
            else if(c[i]==']')
            {
                aI=ans.end();
                continue;
            }
            else
            {
                ans.insert(aI,c[i]);
            }
        }
        for(aI=ans.begin();aI!=ans.end();aI++)
        {
            cout << *aI;
        }
        cout << endl;
        ans.clear();
    }
}
