class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    int n = nums.size();

    //these are the two manual cases 
	if(nums[0]>nums[1]) return 0;
	if(nums[n-1]>nums[n-2]) return n-1;

	//implementing binary search
	int low = 1, high = n-2;
	while(low<=high) {
		int mid = (low + high)/2;
		if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) //if the mid element is peak
			return mid;
		else if(nums[mid]>nums[mid-1])
			low = mid + 1;
		else high = mid - 1;
    }
    return -1;
	}
};
