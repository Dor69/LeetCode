class Solution {
public:
    bool halvesAreAlike(string s) {
        bool result = false;
        string s1, s2;
        int count1 = 0, count2 = 0;
        int len = s.length();
        s1 = s.substr(0, len/2);
        s2 = s.substr(len/2, len);
        for(int i = 0; i < len/2; i++){
            if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U'){
                count1++;
            }
            if(s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u' || s2[i] == 'A' || s2[i] == 'E' || s2[i] == 'I' || s2[i] == 'O' || s2[i] == 'U'){
                count2++;
            }
        } 
        if (count1 == count2){
            result = true;
        }
        return result;
    }
};