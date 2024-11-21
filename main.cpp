class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> maps;
        for(int i =0;i<nums.size();i++){
            int second = target - nums[i];
            auto search = maps.find(second);
            if(search!=maps.end()){
                res.push_back(i);
                res.push_back(search->second);
                return res;
            }
            else{
                maps[nums[i]] = i;
            }

        }
        return res;
    }
};
