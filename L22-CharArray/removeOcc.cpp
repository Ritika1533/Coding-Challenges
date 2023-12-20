class Solution {
    //1910. Remove All Occurrences of a Substring
public:
    string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part) < s.length() ){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};