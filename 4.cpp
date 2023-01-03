#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the first arry len>>";
    cin>>n;
    vector<int>a(n);
    cout<<"enter the elements first arry >>";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"\n";
    cout<<"enter the secend arry len>>";
    cin>>m;
    vector<int>a2(m);
    cout<<"\nenter the elements secend arry >>";
    for(int i=0; i<m; i++)
    {
        cin>>a2[i];
    }

    cout<<"\n";

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)continue;
            else
            {
                if(a[i]==a[j])
                {
                    a[j]=0;
                }
            }
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)continue;
            else
            {
                if(a2[i]==a2[j])
                {
                    a2[j]=0;
                }
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i]!=0 && a[i]==a2[j])
            {
                cout<<a[i]<<" ";
            }
        }
    }
    return 0;
}
