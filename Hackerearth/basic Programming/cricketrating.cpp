#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int currmax = 0;
    int maxend = 0;
    for(int i=0;i<n;i++)
    {
        maxend = maxend + a[i];
        if(currmax < maxend)
        {
            currmax  = maxend;
        }
        if(maxend < 0)
        {
            maxend = 0;
        }
    }

    cout<<currmax<<'\n';
}
int main() {
    int t;
    //cin>>t;
    t =  1;
    while(t--)
    {
        solve();
    }
	
	return 0;
}