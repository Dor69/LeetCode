class Solution {
public:
    string nearestPalindromic(string n) {
        if(n.length()==1) return to_string(stoi(n)-1);
        
        int len = n.length();
        vector<long> candidates;
        candidates.push_back(pow(10,len)+1);
        candidates.push_back(pow(10,len-1)-1);

        int mid = (len+1)/2;
        long prefix = stol(n.substr(0,mid));

        vector<long> v = {prefix-1, prefix, prefix+1};
        for(long i : v){
            string postfix = to_string(i);
            if (len%2!=0) postfix.pop_back();
            reverse(postfix.begin(), postfix.end());
            string c = to_string(i) + postfix;
            candidates.push_back(stol(c));
        }
        long midDiv = LONG_MAX; long result; long num = stol(n);
        for (long c : candidates){
            if (c==num) continue;
            if (abs(c-num)<midDiv){
                midDiv = abs(c-num);
                result = c;
            }
            else if (abs(c-num)==midDiv){
                result = min(result, c);
            }
        }
        return to_string(result);            
    }
};