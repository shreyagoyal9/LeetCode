 class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        // Step 1: Clean the string (remove non-alphanumeric and convert to lowercase)
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        // Step 2: Call recursive function
        return checkPalindrome(cleaned, 0);
    }

    bool checkPalindrome(string& s, int i) {
        int n = s.size();
        if (i >= n / 2) return true;
        if (s[i] != s[n - i - 1]) return false;
        return checkPalindrome(s, i + 1);
    }
};