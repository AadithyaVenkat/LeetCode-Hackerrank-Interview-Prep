/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */

class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        
        if(reader.get(0)>target)
            return -1;
        
        int high=1;
        //Expanding twice from start until we get enough bounds to perform BSearch
        
        while(reader.get(high)<target)
        {
            high*=2;
        }
        
        int low=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(reader.get(mid)==target)
                return mid;
            else if(reader.get(mid)<target)
                low=mid+1;
            else
                high=mid-1;
        }
        
        return -1;
  
    }
};
