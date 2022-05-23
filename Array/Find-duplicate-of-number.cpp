//APPROACH 1: Binary search   TC-O(nlogn) SC-O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int lb=1,ub=(int)nums.size()-1;
        int count;
        while(lb<=ub)
        {
            int mid=lb+(ub-lb)/2;
            count=0;
            for(auto n:nums)
            {
                if(n<=mid)
                    ++count;
            }
            if(count<=mid)
            {
                lb=mid+1; //right side of array
            }
            else
            {
                ub=mid-1; //left side of array
            }
        }
        return lb;
    }
};



//OPTIMIZED APPROACH: Floyd's Tortoise and Hare (Cycle Detection)- Linked list cycle II

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do
        {
            fast=nums[nums[fast]];
            slow=nums[slow];
        }while(slow!=fast);//first collision
        
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
