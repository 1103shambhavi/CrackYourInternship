class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq_s(26, 0);
        vector<int> freq_t(26, 0);
        
        for (auto ch : s) {
            freq_s[ch-'a']++;
        }
        for (auto ch : t) {
            freq_t[ch-'a']++;
        }
        
        return freq_s == freq_t;
    }
};