#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int i,start=0,stop=0,c;
    int n;

    do
    {
        start=0;
        c=1;
        cin >> n;
        if(n<0)
            break;
        for(int i=(int)sqrt(2*n);i>0;i--)
        {
            //cout << ((2*(int)n)+i-i*i)%(2*i);
            if(((2*(int)n)+i-i*i)%(2*i)==0)
            {
                start=((2*(int)n)+i-i*i)/(2*i);
                stop=start+i-1;
                break;
            }
        }
        cout << n << " = " << start << " + ... + " << stop << endl;
    }while(n>-1);

}
