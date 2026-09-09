class Solution {
    public int prime_Sum(int n) {
        // code here
        // COACH REVIEW:
        // Current approach: Trial Division with a 6k +/- 1 optimization.
        // Time Complexity: O(n * sqrt(n)) - You are iterating up to n and checking primality up to sqrt(i).
        // Space Complexity: O(1) - No extra space used.
        //
        // Feedback:
        // Your logic for handling small n (n < 4) and the 6k optimization is a good start, 
        // but the current approach will likely TLE (Time Limit Exceeded) on GFG for large values of n.
        // 
        // Optimization Hint:
        // For "Sum of primes up to n", the most optimal approach is the Sieve of Eratosthenes.
        // Instead of checking each number individually, use a boolean array to mark multiples of primes.
        //
        // Step-by-step for Sieve:
        // 1. Create a boolean array `isPrime[]` of size n+1 and initialize all to true.
        // 2. Set isPrime[0] and isPrime[1] to false.
        // 3. For p = 2 to sqrt(n): if isPrime[p] is true, mark all multiples of p (starting from p*p) as false.
        // 4. Iterate through the array and sum all indices where isPrime[i] is true.
        //
        // Target Complexity:
        // Time: O(n log log n)
        // Space: O(n)
        //
        // If you find yourself stuck on the implementation, check the "Video Solutions" 
        // in the left pane of the LeetHub editor!
        
        int sum = 0;
        
        if( n<4){
            for(int i=2; i<=n; i++){
                sum += i;
            }
            return sum;
        }else{
            sum = 5;
        }
        
        for (int i = 4; i <= n; i++) {
            
            if (i % 2 != 0 && i % 3 != 0) {
                
                boolean isPrime = true;
             
                for (int j = 5; j * j <= i; j += 6) {
                    if (i % j == 0 || i % (j + 2) == 0) {
                        isPrime = false;
                        break;
                    }
                }
                
                if (isPrime) {
                    sum += i;
                }
            }
        }
        
        return sum;
        
        }
    }