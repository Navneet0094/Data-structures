class SearchInsertPosition {
    public static int searchInsert(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] >= target) {
                return i; // Return index when target is found or should be inserted
            }
        }
        return nums.length; // Target is greater than all elements, insert at the end
    }

    public static void main(String[] args) {
        int[] nums1 = {1, 3, 5, 6};
        int target1 = 5;
        System.out.println("Output: " + searchInsert(nums1, target1)); // Output: 2

        int[] nums2 = {1, 3, 5, 6};
        int target2 = 2;
        System.out.println("Output: " + searchInsert(nums2, target2)); // Output: 1

        int[] nums3 = {1, 3, 5, 6};
        int target3 = 7;
        System.out.println("Output: " + searchInsert(nums3, target3)); // Output: 4
    }
}
