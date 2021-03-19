#include<cstdio>
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
main()
{
    int n;
    cin >> n;
    int w,h;
    while(n)
    {
        cin >> h >> w;
        char pre[w][10000];
        int table[h][w],path_count[h][w];
        int length;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                table[i][j]=99999;
                path_count[i][j]=0;
            }
        }

        getchar();


        for(int i=0;i<h;i++)
        {
            //cout << 'a';
            gets(pre[i]);
            length=strlen(pre[i]);
            pre[i][0]-=48;
            for(int j=1;j<length;j++)
            {
                if(pre[i][j]!=' ')
                {
                    pre[i][j]-=48;
                    table[pre[i][0]-1][pre[i][j]-1]=-1;
                    //cout << pre[i][j] << endl;
                }
            }

        }
        table[0][0]=1;
        path_count[0][0]=1;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(table[i][j]!=-1)
                {

                    if(table[i][j+1]>table[i][j]+1&&j+1<w)
                    {

                        table[i][j+1]=table[i][j]+1;
                        path_count[i][j+1]=path_count[i][j];
                    }
                    else if(table[i][j+1]==table[i][j]+1&&j+1<w)
                    {
                        path_count[i][j+1]+=path_count[i][j];
                    }
                    if(table[i+1][j]>table[i][j]+1&&i+1<h)
                    {
                        table[i+1][j]=table[i][j]+1;
                        path_count[i+1][j]=path_count[i][j];
                    }
                    else if(table[i+1][j]==table[i][j]+1&&i+1<h)
                    {
                        path_count[i+1][j]+=path_count[i][j];
                    }

                    if(table[i][j-1]>table[i][j]+1&&j-1>=0)
                    {
                        table[i][j-1]=table[i][j]+1;
                        path_count[i][j-1]=path_count[i][j];
                    }
                    else if(table[i][j-1]==table[i][j]+1&&j-1>=0)
                    {
                        path_count[i][j-1]+=path_count[i][j];
                    }
                    if(table[i-1][j]>table[i][j]+1&&i-1>=0)
                    {
                        table[i-1][j]=table[i][j]+1;
                        path_count[i-1][j]=path_count[i][j];
                    }
                    else if(table[i-1][j]==table[i][j]+1&&i-1>=0)
                    {
                        path_count[i-1][j]+=path_count[i][j];
                    }
                }
            }
        }


//        if(table[h-2][w-1]<table[h-1][w-2])
//        {
//            table[h-1][w-1]=table[h-2][w-1];
//        }
//        else{
//            table[h-1][w-1]=table[h-1][w-2];
//        }
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cout << fixed << setw(8)<< setfill(' ') << path_count[i][j] << ' ';
            }
            cout << endl;
        }

        cout << path_count[h-1][w-1] << endl << endl;
        n--;
    }
}
