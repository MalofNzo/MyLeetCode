#include <iostream>
using namespace std;

string reverse(string s,int st){
        string temp;
        for(int i = s.size();i>st - 1;i--){
            temp += s[i-1];
        }
        temp += s;
        return temp;
}

class Solution {
public:
    string longestPalindrome(string s) {
        string ans,cmp;
        int st = 0;//考虑单字符和空字符     未考虑全相等&&（单数||双数）   无相等
        if(s.size()==1||s.size()==0)
            return s;
        for(int i = 0;i < s.size();i++){
            if(s[i]==s[i+1]){
                st = 1;
                ans = s[i+1];
                for(int j = 1;i-j-st+1>=0&&i+j+1<s.size()&&s[i-j-(st-1)]==s[i+1+j];j++){
                    ans = ans + s[i+j+1];
                }
                if(ans.size()*2-(st-1)>cmp.size()){
                    cmp = reverse(ans,st);
                }
            }
            if(s[i+1]==s[i-1]){
                st = 2;
                ans = s[i];
                ans += s[i+1];
                for(int j = 1;i-j-st+1>=0&&i+j+1<s.size()&&s[i-j-(st-1)]==s[i+1+j];j++){
                    ans = ans + s[i+j+1];
                }
                if(ans.size()*2-(st-1)>cmp.size()){
                    cmp = reverse(ans,st);
                }
            }
        }
        if(cmp.size()==0){
            cmp+=s[0];
            return cmp;
        }
        return cmp;
    }
};


int main(){
    string AA = "abcde";
    Solution A;
    cout<<A.longestPalindrome(AA);
    return 0;
}