class Solution {
  public:
    string toggleCase(string &s) {
        // code here
        string result="";
        for(auto x: s){
            if(isupper(x)){
                result+=tolower(x);
            }else{
                result+=toupper(x);
            }
        }
        return result;
    }
};