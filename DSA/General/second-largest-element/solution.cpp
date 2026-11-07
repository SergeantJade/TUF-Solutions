class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int largest=INT_MIN;
        int second=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                second=largest;
                largest=nums[i];
            }
            else if(nums[i]<largest && nums[i]>second){
                second=nums[i];
            }
            
        }
        if(second ==INT_MIN){
            return -1;
        }
    return second;
    }
};