class Solution {
public:
    bool isPalindrome(string s) {
       string yes;
       for(char c:s){
        if(isalnum(c)){
            yes+=tolower(c);
        }
       } 
       int left=0;
       int right=yes.size()-1;
       while(left<right){
        if(yes[left]!=yes[right]){
            return false;
        }
        left++;
        right--;
       }
       return true;
    }
};