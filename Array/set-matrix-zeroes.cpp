//BRUTE FORCE APPROACH 
//TC: O(m^3)
//SC: O(1)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j,k;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    for(k=0;k<matrix.size();k++)
                    {
                        if(matrix[k][j]!=0)
                            matrix[k][j]=-999;
                    }
                    for(k=0;k<matrix[i].size();k++)
                    {
                        if(matrix[i][k]!=0)
                            matrix[i][k]=-999;
                    }
                }
            }
            
        }
         for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==-999)
                {
                    matrix[i][j]=0;  
                }
            }
            
        }
        
    }
};

//BRUTE FORCE APPROACH 
//TC: O(m*n)
//SC: O(m+n)
class Solution {
public:
    //making 2 vectors for row and coloumn 
    //if 0 is present in the matrix , we will mark 0 in row and col matrix at the same index as that of matrix
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j,k;
        vector<int> row(matrix.size(),-1);
        vector<int> col(matrix[0].size(),-1);
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
                }
            }
            
        }
        
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                if(row[i]==0 || col[j]==0)
                {
                    matrix[i][j]=0;  
                }
            }
            
        }
        
    }
};

//OPTIMIZED APPROACH 
//taking 1st row from matrix as row dummy matrix and taking 1st column from the matrix as column dummy matrix

