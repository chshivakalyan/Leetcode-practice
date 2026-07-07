class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> ans;
        vector<int> res;
        int n=nums.size();
        for(int num : nums){
            ans[num]++;
        }
        for(auto it:ans){
            if(it.second>n/3){
                res.push_back(it.first);
            }
        }

        return res;
    }
};