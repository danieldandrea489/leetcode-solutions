class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    int min = nums[0];
    for(int i=1; i<nums.size();i++)
    {
    if(nums[i]< min)
    min= nums[i];
    }
    vector<int> numbers (nums.size());
    for(int i=0; i<nums.size(); i++)
    {
    int max = nums[i];
    int count =0;
    for(int j= 0; j<nums.size(); j++)
    {
    if( nums[j]< nums[i])
    count++;
    }
    numbers[i]=count;
    }
    return numbers;
    }
};
