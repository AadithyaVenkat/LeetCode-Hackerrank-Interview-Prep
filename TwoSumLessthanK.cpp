class Solution {
public:
    int twoSumLessThanK(vector<int>& A, int K) {
        
        int res=-1;
        sort(A.begin(), A.end());
        int low=0, high=A.size()-1;
        while(low<high)
        {
            int sum = A[low]+A[high];
            if(sum<K)
            {
                res=max(res,sum);
                low++;
            }
            else
                high--;
            
        }
        
        return res;
        
    }
};
