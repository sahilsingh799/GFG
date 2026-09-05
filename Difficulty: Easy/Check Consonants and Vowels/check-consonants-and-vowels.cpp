class Solution {
  public:
    void checkString(string& s) {
        int v = 0;
        int c = 0;

        // code here
        for(auto x:s){
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
                v++;
            }else{
                c++;
            }
        }
        if(v>c){
            cout<< "Yes\n";
        }else if(v<c){
            cout<< "No\n";
        }else{
            cout<< "Same\n";
        }
        return ;
    }
};