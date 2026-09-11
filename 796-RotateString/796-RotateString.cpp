// Last updated: 9/11/2026, 7:59:04 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() !=  goal.size()){
            return false;
        }
        string rotated = s + s;
        return rotated.find(goal) != string::npos;
    }
};