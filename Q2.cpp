#include <iostream>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s)
{
    unordered_map<char, int> char_freq;
    // Count the frequencies of each character
    for (char c : s)
    {
        char_freq[c]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (char_freq[s[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string s = "leetcode";
    cout << firstUniqChar(s) << endl;

    return 0;
}
