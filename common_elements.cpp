#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n1,n2,n3;
       cin>>n1>>n2>>n3;
       int i,a[n1],b[n2],c[n3];
       unordered_map <int,int > m;
       unordered_map <int,int > :: iterator it;
       for(i=0;i<n1;i++)  
       {  cin>>a[i];  m[a[i]]=1;}
       for(i=0;i<n2;i++)  
       {  cin>>b[i]; 
       if(m.find(b[i])==m.end())
       {
           continue;
       }
       else
       m[b[i]]=2;
       }
       for(i=0;i<n3;i++)  
       {  cin>>c[i];  if(m.find(c[i])==m.end())
       {
           continue;
       }
       else if(m[c[i]]==2)
       m[c[i]]=3; }
       vector <int> ans;
  for(it=m.begin();it!=m.end();it++)
  {
      int key=it->first;
      int freq=it->second;
      if(freq==3)
      ans.push_back(key);
  }
  int n=ans.size();
  if(n==0)
  cout<<-1<<endl;
  else
  {sort(ans.begin(),ans.end());
  for(i=0;i<n;i++)
  cout<<ans[i]<<" ";
  cout<<endl;}
       
   }
}