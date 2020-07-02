#include<bits/stdc++.h>
using namespace std;
int main()
{    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],i,j,k;
		for(i=0;i<n;i++)
			cin>>a[i];
		int sums[n]={},diffs[n]={};
		for(i=0;i<n;i++)
		{   diffs[i]=(a[i]-i);
			sums[i]=(a[i]+i);
		}
		sort(sums,sums+n);
		sort(diffs,diffs+n);
		int ans=max(sums[n-1]-sums[0],diffs[n-1]-diffs[0]);
cout<<ans;
	}
}