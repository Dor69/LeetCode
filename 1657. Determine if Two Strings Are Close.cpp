
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        bool res = false;
        if (word1.length() != word2.length()) {
            return res;
        }
        else{
            int count1[26] = {0};
            int count2[26] = {0};
            for (int i = 0; i < word1.length(); i++) {
                count1[word1[i] - 'a']++;
                count2[word2[i] - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                if ((count1[i] == 0 && count2[i] != 0) || (count1[i] != 0 && count2[i] == 0)) {
                    return res;
                }
            }
            sort(count1, count1 + 26);
            sort(count2, count2 + 26);
            for (int i = 0; i < 26; i++) {
                if (count1[i] != count2[i]) {
                    return res;
                }
            }
            res = true;
            return res;
        }
    }
};