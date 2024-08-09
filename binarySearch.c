// Recieves an ascending ordered array of unique ints and a target
// Returns it's index or -1 in case the target doesn't belong
int search(int* nums, int numsSize, int target) 
{   
    int left = 0, right = numsSize - 1, mid = 0;
    while (left <= right)
    {
        mid = left + (right - left) / 2; // prevents overflow
        if (target < nums[mid])
            right = mid - 1;
        else if (target > nums[mid])
            left = mid + 1;
        else
            return mid;
    }
    return -1;
}
