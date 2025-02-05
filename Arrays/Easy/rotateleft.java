
import java.util.Arrays;
class rotateleft {
    public static void reverse(int[] a , int l ,int r){
       int temp;
        while(l<r){
            temp = a[l];
            a[l] = a[r];
            a[r] = temp;
            l++; r--;
        }
       
    }
    public static void rotate(int[] nums, int k) {
        int N = nums.length;
        k = k%N;
        reverse(nums,0,N-1);
        reverse(nums,0,N-k-1);
        reverse(nums,N-k,N-1);
    }
    public static void main(String[] args) {
        int []arr = {1,2,3,4,5,6,7,8,9};
        int k =3;
        rotate(arr,k);
        // System.out.println(arr);
        System.out.println(Arrays.toString(arr));
    }
}