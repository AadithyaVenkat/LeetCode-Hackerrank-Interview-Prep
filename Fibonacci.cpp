class Solution {
public:
    int fib(int N) {
       
        if(N==0)
            return 0;
        vector<int> fib(N+1, 0);
        fib[0]=1;
        fib[1]=1;
        
        
        for(int i=2; i<N; i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
        }
        
        return fib[N-1];
    }
};
