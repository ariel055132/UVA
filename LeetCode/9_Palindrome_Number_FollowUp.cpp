class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse = 0;
        long long original = x;
        int digit = 0;
        while (x >= 1) {
            digit = x % 10;
            x = x / 10;
            reverse = reverse * 10 + digit;
        }
        return original == reverse;
    }
};