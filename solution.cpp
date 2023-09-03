class Solution {
public:
    bool isAnagram(string s, string t) {
        int cnt1[26], cnt2[26];
        memset(cnt1, 0, sizeof(cnt1));
        memset(cnt2, 0, sizeof(cnt2));
        for (char c : s)
            cnt1[c-'a']++;
        for (char c : t)
            cnt2[c-'a']++;
        for (int i = 0; i < 26; i++) {
            if (cnt1[i] != cnt2[i])
                return false;
        }
        return true;
    }
};
