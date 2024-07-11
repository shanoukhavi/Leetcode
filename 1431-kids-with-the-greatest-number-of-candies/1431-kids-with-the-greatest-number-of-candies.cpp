#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int n=candies.size();
    vector<bool> res;
    int largest=*max_element(candies.begin(),candies.end());
    for(int i=0;i<candies.size();i++){
        if(candies[i]+extraCandies>=largest){
            res.push_back(true);
        }
        else{
            res.push_back(false);
        }
    }
    return res;
    }
};