class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size()) {
            return false;
        }

        unordered_map<char, int> freq1;
        unordered_map<char, int> freq2;

        for (int i = 0; i < s1.size(); i++) {
            freq1[s1[i]]++;
            freq2[s2[i]]++;
        }

        if (freq1 == freq2) {
            return true;
        }

        int l = 0;
        int r = s1.size();//stavila sam na 1 vise jer ga dodajem odmah u whileu

        while (r < s2.size()) {

            // Izbacujemo levi karakter
            freq2[s2[l]]--;

            if (freq2[s2[l]] == 0) {
                freq2.erase(s2[l]);
            }

            l++;

            // Dodajemo novi desni karakter
            freq2[s2[r]]++;

            r++;

            if (freq1 == freq2) {
                return true;
            }
        }

        return false;
    }
};
