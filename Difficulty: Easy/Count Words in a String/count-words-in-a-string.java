class Solution {
    public int countWords(String s) {
        // code here
      
        int l=0, r=0;
        int count = 0;
        
        while(r<s.length()){
            
            while(r<s.length() && (s.charAt(r) == ' ' || s.charAt(r) == '\t' || s.charAt(r) == '\n')){
                
           
            r++;
            }
            
            l = r;
            
            while(r<s.length() && s.charAt(r) != ' ' && s.charAt(r) != '\t' && s.charAt(r) != '\n'){
                
            r++;
            }
            
            if(l < r) {
                
                count++;
            }
            
        }
        
        return count;
        
        
    }
}