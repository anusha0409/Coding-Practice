class Solution {
public:
    void f(int rowid,int colid,vector<vector<bool>>&row,vector<vector<bool> >&col,vector<vector<bool>>&box,vector<vector<char>> &curr,vector<vector<char>> &res)
    {
        if(rowid==9)   // Base Case
        {
           res=curr;
            return;
        }
        
        if(curr[rowid][colid]!='.')
        {
              if(colid==8)
                f(rowid+1,0,row,col,box,curr,res);
                else
                  f(rowid,colid+1,row,col,box,curr,res);  
            return;
        }
        
           int i;
        for(i=1;i<=9;i++) // i represents the numbers 1 to 9
        {
            if(!row[rowid][i-1] && !col[colid][i-1] &&!box[(rowid/3)*3+colid/3][i-1]) //i-1 as 0 based indexing
            {
                row[rowid][i-1]=true;
                col[colid][i-1]=true;
                box[(rowid/3)*3+colid/3][i-1]=true;
                curr[rowid][colid]=(char)('0'+i); //set current cell as i
                if(colid==8)
                f(rowid+1,0,row,col,box,curr,res);
                else
                  f(rowid,colid+1,row,col,box,curr,res);  
                row[rowid][i-1]=false;
                col[colid][i-1]=false;
                box[(rowid/3)*3+colid/3][i-1]=false;
                curr[rowid][colid]='.'; //set current cell as i
            }
                
    } }
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<bool> > row(9, vector<bool>(9,false));
        vector<vector<bool> > col(9, vector<bool>(9,false));
        vector<vector<bool>> box(9, vector<bool>(9,false));
        vector<vector<char>> res;
         vector<vector<char>> curr;
        curr=board;
        int i,j;
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    row[i][board[i][j]-'0'-1]=true;
                    col[j][board[i][j]-'0'-1]=true;
                    box[(i/3)*3+j/3][board[i][j]-'0'-1]=true;
                }
            }
        }
        
        f(0,0,row,col,box,curr,board);
         
        
    }
};
