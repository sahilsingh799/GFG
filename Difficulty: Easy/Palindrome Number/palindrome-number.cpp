class Solution {
  public:
    bool isPalindrome(int n) {
       // if(n<0)return false;
        // code here
        string s=to_string(abs(n));
        int i=0;
        int j=s.size()-1;
        //if(n<0)return false;
        while(i<j){
            //if(s<0)return false;
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};