
BRUTE FORCE
TC- O(n2) 4ms
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j;
        bool t=false;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==target)
                {
                    t=true;
                    break;
                }
            }
            if(t==true)
                break;
        }
        return t;
    }
};



3ms
  class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j;
        bool t=false;
        for(i=0;i<matrix.size();i++)
        {
            if(matrix[i][matrix[i].size()-1] > target)
            {
                for(j=0;j<matrix[i].size();j++)
                {
                    if(matrix[i][j]==target)
                    {
                        t=true;
                        break;
                    }
                }
            }
            if(matrix[i][matrix[i].size()-1]==target)
            {
                t=true;
                break;
            }
            
        }
        
        return t;
    }
};
