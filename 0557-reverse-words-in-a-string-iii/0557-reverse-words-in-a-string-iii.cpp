#include <string.h>
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, result;
        while (ss >> word) {
            reverse(word.begin(), word.end());
            result += word + ' ';
        }
        result.pop_back(); // This removes the extra space at the end.
        return result;
    }
};
