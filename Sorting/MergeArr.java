// class MergeArr{

//     public void merge(int[] nums1, int m, int[] nums2, int n) {
//         int temp[] = new int[m+n];
//         int p1 = 0 , p2 =0 , p3 = 0;
//         while(p1<m && p2<n){
//             if(nums1[p1]<=nums2[p2]){

//                 temp[p3] = nums1[p1];
//                 p1++;
//                 p3++;
                
//             }
//             else{
//                 temp[p3] = nums2[p2];
//                 p2++;
//                 p3++;
//             }
//         }
//         while(p1<m){
//             temp[p3] = nums1[p1];
//             p1++;
//             p3++;
//         }
//          while(p2<n){
//            temp[p3] = nums2[p2];
//             p3++;
//             p2++;
//         }
//         for (int i = 0; i < m + n; i++) {
//             nums1[i] = temp[i];
//         }
    
//     }
    
//     public static void main(String[] args) {
//         MergeArr obj = new MergeArr();
//         int[] nums1 = {1, 2, 3, 0, 0, 0};
//         int[] nums2 = {2, 5, 6};
//         int m = 3, n = 3;

//         obj.merge(nums1, m, nums2, n);
//         for (int num : nums1) {
//             System.out.print(num + " ");
//         }
//     }
// }
class MergeArr {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int p1 = m - 1;  // Last valid element in nums1
        int p2 = n - 1;  // Last element in nums2
        int p3 = m + n - 1;  // Last position in nums1

        // Merge from the back to avoid overwriting nums1's original elements
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p3] = nums1[p1];
                p1--;
            } else {
                nums1[p3] = nums2[p2];
                p2--;
            }
            p3--;
        }

        // Copy remaining elements from nums2 (if any)
        while (p2 >= 0) {
            nums1[p3] = nums2[p2];
            p2--;
            p3--;
        }
    }

    public static void main(String[] args) {
        MergeArr obj = new MergeArr();
        int[] nums1 = {1, 2, 3, 0, 0, 0}; // nums1 has extra space for merging
        int[] nums2 = {2, 5, 6};
        int m = 3, n = 3;

        obj.merge(nums1, m, nums2, n);

        // Print merged array
        for (int num : nums1) {
            System.out.print(num + " ");
        }
    }
}
