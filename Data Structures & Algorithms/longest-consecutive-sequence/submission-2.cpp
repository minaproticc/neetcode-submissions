class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        
        int n=nums.size();
        for(int i=0; i<n; i++){
            s.insert(nums[i]);
        }

        int maxLength=0;
        for(int i=0; i<n; i++){
            if(s.find(nums[i]-1)==s.end()){
                int current=nums[i];
                int length=1;
                while(s.find(current+1)!=s.end()){
                    length++;
                    current=current+1;
                }
                maxLength=max(maxLength,length);
            }
        }
        return maxLength;
    }
};
