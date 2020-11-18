
#include <iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> v[6];
void insert(int s,int d)
{
    v[s].push_back(d);
    
}
void dfs(int val)
{
    stack<int> st;
    bool visited[6];
    st.push(val);
    visited[val]=true;
    while(!st.empty())
    {
        int store=st.top();
        cout<<store<<" ";
        st.pop();
        for(int i=0;i<v[store].size();i++)
        {
            if(!visited[v[store][i]])
            {
              visited[v[store][i]]=true; 
            }
            st.push(v[store][i]);
            
            
            
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
    dfs(0);
    
    return 0;


}
