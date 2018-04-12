#include <iostream>
#include <vector>
/*
 *  
给定一个整数数列，找出其中和为特定值的那两个数。

你可以假设每个输入都只会有一种答案，同样的元素不能被重用。

示例:

给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
 */
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        vector<int> resuN;
        int stat = 0,k = 0;
        for(int i = 0;i < nums.size();i++){
            if(stat == 1){
                if(nums[i] + result[0] == target){
                    result.push_back(nums[i]);
                    resuN.push_back(i);
                    return resuN;
                }
                if(i == nums.size() - 1){
                    k++;
                    i = k;
                    result.clear();
                    resuN.clear();
                    stat = 0;
                }
            }
            if(stat == 0){
                if(nums[i] != target||(nums[i]==0&&target==0&&nums[i]==target)){
                    result.push_back(nums[i]);
                    resuN.push_back(i);
                    stat++;
                }
                if(i == nums.size() - 1){

                }
            }
        }
    }
};

int main(){
    int tsumA[5] = {-1,-2,-3,-4,-5};
    vector <int> tsum(tsumA,tsumA+5);
    int tar = -8;
    Solution A;
    vector <int> resul = A.twoSum(tsum,tar);
    for(int i = 0;i < resul.size();i++){
        cout<<resul[i];
    }
    return 0;
}