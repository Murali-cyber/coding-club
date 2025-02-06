package JAVA;

//import java.util.HashMap;
//import java.util.Map;
import java.util.Arrays;

class One {
    public int[] twoSum(int[] nums, int target) {
        /*
         Enter code here
         */
        return null;
    }

    public static void main(String[] args) {
        One solution = new One();
        
        int[] nums1 = {2, 7, 11, 15};
        int target1 = 9;
        System.out.println(Arrays.toString(solution.twoSum(nums1, target1)));  // Expected output: [0, 1]

        int[] nums2 = {3, 2, 4};
        int target2 = 6;
        System.out.println(Arrays.toString(solution.twoSum(nums2, target2)));  // Expected output: [1, 2]

        int[] nums3 = {3, 3};
        int target3 = 6;
        System.out.println(Arrays.toString(solution.twoSum(nums3, target3)));  // Expected output: [0, 1]
    }
}
