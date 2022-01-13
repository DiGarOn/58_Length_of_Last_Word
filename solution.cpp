#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = 0;
        int count = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ' ') count++;
            else {
                if(count != 0)last = count;
                count = 0;
            }
        }
        if(s[s.length()-1] != ' ') {
            last = count;
        }
        return last;
    }
};

int main() {
    string s = "  Hello World  ";
    Solution a;
    cout << a.lengthOfLastWord(s);
}