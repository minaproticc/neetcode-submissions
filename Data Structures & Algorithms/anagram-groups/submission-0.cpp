class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;

        for(string word : strs){
            int freq[26]={0};

            for(char c: word){
                freq[c-'a']++;
            }

            string key="";
            for(int i=0; i<26; i++){
                key+= "#" + to_string(freq[i]);
            }

            m[key].push_back(word);
        }

        vector<vector<string>> result;

        for (auto p : m) {
            result.push_back(p.second);
        }

        return result;
    }
};
