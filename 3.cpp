#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l = s.size();
    for(int i=0; i<l; i++)
    {
        if(i%2==0&&i!=1)
        {
            if(s[i]=='z')
            {
                s[i]='a';
            }
            else
            {
                s[i]=s[i]+1;
            }
        }
    }
    cout<<s;
    return 0;
}
