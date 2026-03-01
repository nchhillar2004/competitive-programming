class Solution {
public:
    string trimTrailingVowels(string s) {
        string vowels = "aeiou";

        for (int i = s.length()-1; i >= 0; i--) {
            if (vowels.find(s[i]) == string::npos) {
                return s.substr(0, i+1);
            }
        }
        return "";
    }
};
