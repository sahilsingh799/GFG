class CheckBit {
    static boolean checkKthBit(int n, int k) {
        // code here
        String binary = "";
        while(n > 0){
            binary = (n % 2) + binary;
            n /= 2;
        }
        
        
        if(k >= binary.length()) return false;
        // System.out.println(binary);
        k = binary.length() - k - 1;
        
        
        
        // System.out.println(k);
        
            if(binary.charAt(k) == '1'){
                return true;
            }
        
        return false;
    }
}

// 100