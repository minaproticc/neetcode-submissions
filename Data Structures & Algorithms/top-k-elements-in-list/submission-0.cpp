class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {       
        //kljuc=br nize vrednost=br pojavljivanja
        unordered_map<int,int> m;

        for(int i = 0; i<nums.size()  ; i++){
            m[nums[i]]++;
        }

        vector<vector<int>> bucket(nums.size()+1);

        //bucket 
        for(auto p : m){
            bucket[p.second].push_back(p.first);
        }

        vector<int> result;

        for(int i=nums.size(); i>=1 ; i--){
            for(int x : bucket[i]){
                result.push_back(x);

                if(result.size()==k)
                    return result;

                }
        }

        return result;
        
    }
};
