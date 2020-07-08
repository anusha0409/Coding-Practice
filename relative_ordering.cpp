#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,m;
       cin>>n>>m;
       int a[n],b[m];
       int i;
       map <int,int> ma;
       map <int,int> :: iterator it;
       unordered_map<int ,int> s;
       for(i=0;i<n;i++) 
       {cin>>a[i];  ma[a[i]]++;}
       for(i=0;i<m;i++) 
       {    cin>>b[i];     s[b[i]]=1;}
      for(i=0;i<m;i++)
      {
          if(ma.find(b[i])==ma.end())
          continue;
          else{
              int key =b[i];
              int freq=ma[b[i]];
              if(s[key]==-1)  continue;
              while(freq--)
              cout<<b[i]<<" ";
              ma[b[i]]=-1;
              s[key]=-1;
          }
      }
  for(it=ma.begin();it!=ma.end();it++)
  {   
       int key =it->first;
              int freq=it->second;
              if(freq==-1)  continue;
              else
              {
                  while(freq--)
                  cout<<key<<" ";
              }
              
      
  }
       
       cout<<endl;
   }
}