#include <iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int temp = 0,jw = 0,st = 1;
        ListNode *p1 = l1,*p2 = l2,*ans = NULL,*np = NULL;
        while(p1!=NULL||p2!=NULL||jw!=0){
            if(p1 != NULL){
                temp += p1->val;
                p1 = p1->next;
            }
            if(p2 != NULL){
                temp += p2->val;
                p2 = p2->next;
            }
            temp += jw;
            jw = 0;
            if(temp >= 10){
                jw = 1;
                temp -= 10;
            }
            if(st == 0) {
                np->next = new ListNode(temp);
                np = np->next;
            }
            if(st == 1){
                np = new ListNode(temp);
                ans = np;
                st = 0;
            }
            temp = 0;

        }
        return ans;

    }
};


int main(){
    ListNode LL(9);
    ListNode AA(1);
    ListNode BB(9);
    ListNode CC(9);
    ListNode DD(9);
    ListNode EE(9);
    ListNode FF(9);
    ListNode GG(9);
    ListNode HH(9);
    ListNode II(9);
    ListNode JJ(9);
    AA.next = &BB;
    BB.next = &CC;
    CC.next = &DD;
    DD.next = &EE;
    EE.next = &FF;
    FF.next = &GG;
    GG.next = &HH;
    HH.next = &II;
    II.next = &JJ;
    Solution A;
    ListNode *answer = A.addTwoNumbers(&LL,&AA);
    ListNode *p = answer;
    do{
        cout<<p->val;
        p = p->next;
    }
    while(p != NULL);
    return 0;
}