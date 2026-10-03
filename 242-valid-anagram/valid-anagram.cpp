class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.length() != t.length())
        return false;

    unordered_map<char, int> ankit;

    for (char c : s)
        ankit[c]++;

    for (char c : t)
        ankit[c]--;

    for (auto x : ankit) {
        if (x.second != 0)
            return false;
    }

    return true;
}

};
