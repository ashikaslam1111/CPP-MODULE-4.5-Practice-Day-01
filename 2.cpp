#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==1 || i%2!=0)
        {
            sum=sum*a[i];
        }
    }
    cout<<sum;
    return 0;
}
