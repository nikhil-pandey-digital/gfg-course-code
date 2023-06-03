#include <bits/stdc++.h>
using namespace std;

  int helper(vector<vector<int>>& grid,int i,int j,int n)
    {
        int maxx=grid[i][j];
        
       for(;i<i+3;i++)
       {
           for(;j<j+3;j++)
           {
               maxx=max(maxx,grid[i][j]);
           }
       }
        
        return maxx;
    
    }
    
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int n= grid.size();
        
        vector<vector<int>> maxLocal(n-2);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i+2 < n) && (j+2<n))
                {
                    int maxx=helper(grid,i,j,n);
                    maxLocal[i].push_back(maxx);
                }
            }
        }
        
        return maxLocal;
    }

int main()
{
   string s="hello how are ypu";
   cout<<index_of('');

      
}