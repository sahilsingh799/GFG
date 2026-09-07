class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int count =0;
        // unordered_map<int , int>mp;
        // for(auto x: arr){
        //     mp[x]++;
        // }
        for(auto a:arr){
            if(a==target){
                count++;
            }
        }
        return count;
    }
};
