void DFS_aux(vector<vector<int>> &g,int v, vector<bool> &visited,stack<int>& Stack)
{
     visited[v] = true;
     for (auto i:g[v])
          if (!visited[i])
               DFS_aux(g,i, visited, Stack);
     Stack.push(v);
}
vector<bool> visited(g.size(), false);
     stack<int> S;
     for (int i = 0; i < n; i++){
        if (visited[i] == false){
               DFS_aux(g, i,visited, S);
        }
     }
     while(!S.empty()) cout << S.top()+1 << " ",S.pop();