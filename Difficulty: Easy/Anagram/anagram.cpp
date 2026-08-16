class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        if(s1.size()!=s2.size()){
            return false;
        }
        // code here
        unordered_map<char,int>mp;
        for(char x: s1)mp[x]++;
        for(char a: s2)mp[a]--;
        for(auto it: mp){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};