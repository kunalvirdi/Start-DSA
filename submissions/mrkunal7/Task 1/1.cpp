#include<bits/stdc++.h>
using namespace std;

vector<int> getConcatenate(vector<int> &nums){
    vector<int> ans;
    for (int i = 0; i < nums.size();i++){
        ans.push_back(nums[i]);  //For storing first 'n' elements in 'ans' vector.
    }
    for (int i = 0; i < nums.size(); i++)
    {
        ans.emplace_back(nums[i]); //For storing back that numbers in vector named - 'ans' 
    }
    return ans;
}
