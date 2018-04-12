#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        if(x==0)
            return 0;
        long a,b=0;
        long wei,e=1;
        long temp = (long)x;
        for(wei = 0;x>=e;wei++){
            e*=10;
        }
        e = 10;
        for(;temp!=0;wei--){
            a = temp%e;
            b+=a;
            b*=10;
            temp/=e;
        }
        b/=10;
        if(b<-2147483648||b>2147483647)
            return 0;
        return (int)b;
    }
};


int main(){
    int a = 2147483647;
    Solution A;
    cout<<A.reverse(a);
    return 0;
}