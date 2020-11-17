
#include <iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> v[6];
void insert(int s,int d)
{
    v[s].push_back(d);
    
}
void bfs(int val)
{
    queue<int> q;
    bool visited[6];
    q.push(val);
    visited[val]=true;
    while(!q.empty())
    {
        int store=q.front();
        cout<<store<<" ";
        q.pop();
        for(int i=0;i<v[store].size();i++)
        {
            if(!visited[v[store][i]])
            {
              visited[v[store][i]]=true; 
            }
            q.push(v[store][i]);
            
        }
        
    }
    
}
int main()
{
    insert(0,1);
    insert(0,2);
    insert(0,3);
    insert(1,4);
    insert(2,5);
    //for(auto it:v[0])
    //cout<<it<<" ";
    bfs(0);
    
    return 0;


}
