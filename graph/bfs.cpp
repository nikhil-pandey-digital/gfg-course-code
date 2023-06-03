#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>adj,vector<bool>visited,int source)
{
       queue<int>q;
       q.push(source);
       visited[source]=true;

       while (!q.empty())
       {
           int current=q.front();
            cout<<current<<" ";
            q.pop();

            for(auto x: adj[current] )
            {
                if(!visited[x])
                {
                    visited[x]=true;
                    q.push(x);
                }
            }

       }
       
}

int main() {

//assume that user will provide the adjlist of graph to be traversed 

vector<bool>visited;

for(int i=0;i<adjlist.size();i++)
{
    if(!visited[i])
    {
        bfs(adjlist,visited,i);
    }
}

}