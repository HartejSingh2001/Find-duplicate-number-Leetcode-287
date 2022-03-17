class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,num;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                num=nums[i];
                break;
            }
        }
        return num;
    }
};
