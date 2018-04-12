#include <iostream>
#include <cstring>
using namespace std;


int func(string x,char y){//x中有没有y
    for(int i = 0;i < x.size();i++){
        if(x[i]==y)
            return 1;
    }
    return 0;
}
class Solution {
public:
    int lengthOfLongestSubstring(string s){
        string ans;
        string cmp;
        for(int i = 0;i<s.size();i++){
            for(int k = i,l = 0;k<s.size();k++,l++){
                if(func(ans,s[k]))break;
                ans = ans+s[k];
            }
            if(ans.size()>cmp.size())
                cmp = ans;
            ans = "";
        }
        return (int)cmp.size();
    }
};


int main(){
    string AA = "ABACDEF";
    Solution A;
    cout<<A.lengthOfLongestSubstring(AA);
    return 0;
}