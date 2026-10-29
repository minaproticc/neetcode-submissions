class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            int n= nums.size();
            vector<int> sufix(n);
            vector<int> result(n);

            result[0]=1;
            sufix[n-1]=1;

            for(int i =1; i<n ; i++){
                result[i]=result[i-1]*nums[i-1];
            }

            int sufixProd=1;
            for(int i=n-1; i>=0; i--){
                result[i]=result[i]*sufixProd;
                sufixProd=sufixProd*nums[i];
            }

        return result;
    }
};
