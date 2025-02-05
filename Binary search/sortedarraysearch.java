class SortedArraySearch {
    static boolean searchInSorted(int arr[], int k) {
        int l = 0, h = arr.length - 1; // Correct high index initialization
        while (l <= h) {
            int m = (l + h) / 2; // Calculate mid
            if (arr[m] == k) {
                return true; // Key found
            } else if (arr[m] < k) {
                l = m + 1; // Search in the right half
            } else {
                h = m - 1; // Search in the left half
            }
        }
        return false; // Key not found
    }

    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 4, 6}; // Example array
        int key = 6; // Key to search for
        boolean found = searchInSorted(arr, key); // Call the method
        System.out.println("Key " + key + " found: " + found); // Output the result
    }
}
