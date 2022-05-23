//APPROACH 1: Counting sort  TC:O(n+n) SC:O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,c1=0,c2=0,c3=0;
        int n=(int)nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                c1++;
            }
            if(nums[i]==1)
            {
                c2++;
            }
            if(nums[i]==2)
            {
                c3++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(c1)
            {
                nums[i]=0;
                c1--;
            }
            else if(c2)
            {
                nums[i]=1;
                c2--;
            }
            else
                nums[i]=2;
        }
    }
};


//OPTIMIZED APPROACH: Dutch Flag Algorithm 
//TC: O(n)  SC: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low=0,high=(int)nums.size()-1,mid=0;
        
       while(mid<=high)
       {
           if(nums[mid]==0)
           {
               swap(nums[low++],nums[mid++]);
           }
           else if(nums[mid]==1)
           {
               mid++;
           }
           else
           {
               //nums[mid]==2
               swap(nums[mid],nums[high--]);
           }
       }
    }
};
