class Solution {
public:
void total(int k,vector<bool>&col,vector<bool>&d1,vector<bool>&d2,vector<string>&current,vector<vector<string>> &res)
    {
        int n=col.size();
     if(k<0)
     {  res.push_back(current); return;}
     
     for(int i=0;i<n;i++)
     {
         if(!col[i]&&!d1[k-i+n-1]&&!d2[i+k])
         { 
             col[i]=true;
             d1[k-i+n-1]=true;
             d2[i+k]=true;
             current[k][i]='Q';
         total(k-1,col,d1,d2,current,res);
             col[i]=false;
             d1[k-i+n-1]=false;
             d2[i+k]=false;
              current[k][i]='.';
         }
     }
     
    }
    vector<vector<string>> solveNQueens(int n) {
         vector<bool> col(n,false);
        vector<bool> d1(n,false);
        vector<bool> d2(n,false);
        vector<string> current(n,string(n,'.'));
        vector<vector<string>> res;
        total(n-1,col,d1,d2,current,res);
        return res;
    }
};
