#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int ans=nums2[0]-nums1[0];
        return ans;
     //    int ans=0;
     // int i=0;
     //    int j=0;
     //    while(i<nums1.size() && j<nums2.size())
     //    {
     //        ans=nums2[j]-nums2[i];
     //        i++;
     //        j++;
     //    }
     //    return ans;
        
    }
};