#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int ct=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]) ct++;
            }
            ans.push_back(ct);
        }
        return ans;
    }
};