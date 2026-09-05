class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        int n=s.size();
        string result= "";
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                result+= s[i]; 
            }
        }
        return result;
    }
};