class Solution {
public:
// Time complexity
    int removeDuplicates(vector<int>& nums) {
    int p=0;
    int cnt = 1;
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i] != nums[p])
        {
            nums[++p] = nums[i];
            cnt = 1;
        }
        else if(cnt<2)
        {
            nums[++p] = nums[i];
            cnt++;
        }
    }
    return p+1;
    }
};
