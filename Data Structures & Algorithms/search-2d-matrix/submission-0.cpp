class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        int l=0;
        int r=m-1;

        int red=-1;
        while(l<=r){
            int mid = l+(r-l)/2;

            if(target>= matrix[mid][0] && target<=matrix[mid][n-1]){
                red=mid;
                break;
            }
            if(target<matrix[mid][0]){
                r=mid-1;
            }
            if(target>matrix[mid][n-1]){
                l=mid+1;
            }
        }

        if(red==-1){
            return false;
        }
        else{
            int l=0;
            int r=n-1;

            while(l<=r){
                int mid=l+(r-l)/2;

                if(target==matrix[red][mid]){
                    return true;
                }
                if(target<matrix[red][mid]){
                    r=mid-1;
                }
                if(target>matrix[red][mid]){
                    l=mid+1;
                }
            }
        
        }
        return false;
    }
};
