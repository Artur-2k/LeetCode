// Recieves a sorted array of distinct integers and a target value.
// Return the index if the target is found. If not, return the index
// where it would be if it were inserted in order.
int searchInsert(int* nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1, mid = 0;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (target < nums[mid])
            right = mid - 1;
        else if (target > nums[mid])
            left = mid + 1;
        else
            return mid; // if present in the array
    }
    return right + 1; // position of the target in the array
}
