class Solution {
public:
    int findMin(vector<int>& A) {
        
        int low=0, high=A.size()-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(A[mid]>=A[high])
                low=mid+1;
            else
                high=mid;
        }
        
        return A[low];
    }
};
