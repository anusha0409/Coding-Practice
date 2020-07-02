#include<bits/stdc++.h>
using namespace std;
int res[100000],res_size;
void factorial(int x)
{
	int carry=0;
	for(int i=0;i<res_size;i++)
	{
		int p=res[i]*x+carry;
		res[i]=p%10;
		carry=p/10;
	}
	while(carry)
	{
		res[res_size]=carry%10;
		carry=carry/10;
		res_size++;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N,i;
		cin>>N;
        res_size=1;
        res[0]=1;
    for(i=2;i<=N;i++)
    	factorial(i);
    for(i=res_size-1;i>=0;i--)
    	cout<<res[i];
	}
}
