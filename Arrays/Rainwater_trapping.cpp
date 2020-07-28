#include<bits/stdc++.h>
using namespace std;
void trap(vector<int> height) {
        //min(maxL,maxR)
        //suffix[i]=max(A[i to n-1])
        //running maximum from 0 to i-1
        //subtact height of the i from the difference of the maximum
       
        
        int n=height.size();
        int i,maxSoFar=0,h,ans=0;
        vector <int> suffix(n,0);
        suffix[n-1]=height[n-1];
        maxSoFar=height[n-1];
        for(i=n-2;i>=0;i--)
        {
            suffix[i]=max(height[i],maxSoFar);
            maxSoFar=max(suffix[i],maxSoFar);
        }
        maxSoFar=0;
         for(i=0;i<n-1;i++)
        {
           h=min(maxSoFar,suffix[i+1]);
            maxSoFar=max(maxSoFar,height[i]);
            if(h>=height[i])
            {  h=h-height[i];
            ans=ans+h;}
        }
        cout<<ans<<endl;
        

}
int main(){

 trap({3,0,2,0,4});

  }
