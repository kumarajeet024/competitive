//codechef april cook off 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n],i,j;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            cin>>a[i][j];
        int count=0,count1;
        for(i=0;i<n;i++)
        {
            count1=0;
            for(j=0;j<n;j++)
                if(a[i][j]==0)
                count1=1;
            if(count1==0)
                count=1;
            if(count==1)
                break;
        }
        for(j=0;j<n;j++)
        {
            count1=0;
            for(i=0;i<n;i++)
                if(a[i][j]==0)
                count1=1;
            if(count1==0)
                count=1;
            if(count==1)
                break;

        }
        if(count==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
