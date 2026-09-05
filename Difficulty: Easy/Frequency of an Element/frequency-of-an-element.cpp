class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        // code here
        unordered_map<int,int>mp;
        for(auto a:arr){
            mp[a]++;
        }
        return mp[x];
    }
};