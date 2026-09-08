class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        string s=to_string(n);
        int i=0;
        int l=s.size()-1;
        while(i<l){
            char temp=s[i];
            s[i]=s[l];
            s[l]=temp;
            i++;
            l--;    
            
        }
        return stoi(s);
    }
};