class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxLen=0;
        unordered_set<char> seen;

        while(r<s.size()){

            while(seen.find(s[r])!=seen.end()){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            maxLen=max(maxLen,r-l+1);

            r++;
        }

         return maxLen;  
    }
};
