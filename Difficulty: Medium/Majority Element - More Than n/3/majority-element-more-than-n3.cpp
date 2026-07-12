class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // code here
        // vector<int>ans;
        // unordered_map<int,int>m;
        // for(int i=0;i<arr.size();i++){
        //     m[arr[i]]++;
        //     if(m[arr[i]]==arr.size()/3+1){
        //         ans.push_back(arr[i]);
        //     }
        // }
        // sort(ans.begin(),ans.end());
        // return ans;
        vector<int>ans;
        unordered_map<int,int>m;
        for(auto x: arr){
            m[x]++;
        }
        for(auto a: m){
            if(a.second>arr.size()/3) ans.push_back(a.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};