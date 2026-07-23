class Solution {
  public:
  vector<int> ans;
  vector<bool>v;
  void helper(vector<vector<int>>&adj, int si){
      if(v[si]==true)return;
      v[si]=true;
      ans.push_back(si);
      for(int n: adj[si]){
          helper(adj,n);
      }
      return;
  };
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        ans.clear();
        v=vector<bool>(adj.size(),false);
        helper(adj,0);
        return ans;
    }
};