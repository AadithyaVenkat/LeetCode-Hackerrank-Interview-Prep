class Solution {
public:
    int countPrimes(int n) {
        
        // Sieve of Eronthesis eliminates all the mulitples of numbers to be false 
        // And the remaining is left to be true
        
        int cnt=0;
        bool prime[n+1];
        
        //memset copies any pointer type, any value and fills the memory
        memset(prime, true, sizeof(prime));
        for(int i=2; i*i<=n; i++)
        {
            if(prime[i]==true)
            {
                for(int j=i*i; j<n; j+=i)
                {
                    prime[j]=false;
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            if(prime[i]==true)
                cnt=cnt+1;
        }
        return cnt;
        
    }
};
