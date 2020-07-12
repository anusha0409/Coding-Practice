class Solution {
public:
    int search(vector<int>& nums, int target) {
        //first find the min point of array
        //FFFFTTT
        //if A[mid]<A[high] mid lies in second pulse
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        if(n==0)
            return -1;
        //find peak
        while(low<high)
        {
            mid=low+(high-low)/2;
                if(nums[mid]<nums[high])
                    high=mid;
            else
                low=mid+1;     
        }
        int pos=low;
       low=pos;
        high=n-1;
        //search in second half
        while(low<high)
        {
            mid=low+(high-low)/2;
                if(nums[mid]>=target)
                    high=mid;
            else
                low=mid+1;
        }
        if(nums[low]==target)
            return low;
        low=0;
        high=pos-1;
        //first half
          while(low<high)
        {
            mid=low+(high-low)/2;
                if(nums[mid]>=target)
                    high=mid;
            else
                low=mid+1;
        }
        if(nums[low]==target)
            return low;
        return -1;
        
    }
};
