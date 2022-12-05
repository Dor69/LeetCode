class Solution {
public:
    string intToRoman(int num) {
        string res;
        int i = 0;
        while (num > 0) {
            int digit = num % 10;
            num /= 10;
            res = digitToRoman(digit, i) + res;
            i++;
        }
        return res;        
    }
    string digitToRoman(int digit, int i) {
        string res;
        if (digit == 0) return res;
        if (i == 0) {
            if (digit <= 3) {
                for (int j = 0; j < digit; j++) res += 'I';
            } else if (digit == 4) {
                res = "IV";
            } else if (digit <= 8) {
                res = "V";
                for (int j = 0; j < digit - 5; j++) res += 'I';
            } else {
                res = "IX";
            }
        } else if (i == 1) {
            if (digit <= 3) {
                for (int j = 0; j < digit; j++) res += 'X';
            } else if (digit == 4) {
                res = "XL";
            } else if (digit <= 8) {
                res = "L";
                for (int j = 0; j < digit - 5; j++) res += 'X';
            } else {
                res = "XC";
            }
        } else if (i == 2) {
            if (digit <= 3) {
                for (int j = 0; j < digit; j++) res += 'C';
            } else if (digit == 4) {
                res = "CD";
            } else if (digit <= 8) {
                res = "D";
                for (int j = 0; j < digit - 5; j++) res += 'C';
            } else {
                res = "CM";
            }
        } else {
            for (int j = 0; j < digit; j++) res += 'M';
        }
        return res;
    }
};