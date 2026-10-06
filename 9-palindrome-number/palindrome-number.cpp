class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0)
            return false;

        int original = x;
        long long reverse = 0;

        while (x > 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }

        return original == reverse;
    }
};


// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string s = to_string(x);
//         int j = s.size()-1;
//         int i=0;
//         while(i<j){
//             if(s[i]!=s[j]){
//                return 0;
//             }
//             i++;
//             j--;
//         }
//         return 1;
        
        
        
//     }
// };