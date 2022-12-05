class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
        vector<long long> res;
        long long start = pow ( 10, (intLength + 1) / 2 - 1), 
        end = pow (10, (intLength + 1) / 2),
        mul = pow (10, intLength / 2);
        for (int q : queries) 
            res.push_back(start + q > end ? -1 :
                (start + q - 1) * mul + reverse(start + q - 1, intLength % 2));
        return res;
    }
    int reverse (long long n, bool skip) {
        long long res = 0;
        for (n = skip ? n / 10 : n; n > 0; n /= 10)
            res = res * 10 + n % 10;
        return res;
    }
};