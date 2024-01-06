// Techfest and the Queue
// https://www.geeksforgeeks.org/problems/techfest-and-the-queue1044/1

// Time Complexity: O( b*log(b) )
// Space Complexity: O( b*log(b) )

class Solution {
public:
    int getPrimeFactorCount(int n){
        int count = 0;
        
        while(n%2 == 0){
            count++;
            n /= 2;
        }
        
        for(int i=3; i<=sqrt(n); i+=2){
            
            while(n%i == 0){
                count++;
                n /= i;
            }
        }
      
        if(n > 2){
            count++;
        }
        
        return count;
    }
	int sumOfPowers(int a, int b){
	    
	    int sum = 0;
        for(int i=a; i<=b; i++){
            sum += getPrimeFactorCount(i);
        }
        
        return sum;
    }
};
