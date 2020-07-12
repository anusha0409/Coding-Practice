#include<bits/stdc++.h>
using namespace std;
 void maxProfit(vector<int>& prices) {
        //preprocess profit[i]---max profit you can make by selling till 0 to i-1
        //use min so far
        //A[i] is if u buy at i
        //use maxsofar
        int n=prices.size();
        int i,profit[n],res=0;
        int minSoFar=prices[0];
        profit[0]=0;
        for(i=1;i<n;i++)
        {
            res=max(res,prices[i]-minSoFar);
            minSoFar=min(minSoFar,prices[i]);
            profit[i]=res;
        }
        int a[n]; int maxSoFar=prices[n-1],ans=0;
        a[n-1]=0; res=0;
        for(i=n-2;i>=0;i--)
        {
              res=max(res,maxSoFar-prices[i]);
              maxSoFar=max(maxSoFar,prices[i]);
              a[i]=res;
              ans=max(ans,profit[i]+res);
        }
   
    }
    int main()
    {
    	vector <int> v={7,6,4,3,1 };
      maxProfit(v);
      return 0;
    }
