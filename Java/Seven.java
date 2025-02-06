package JAVA;
import java.util.*;

class Seven {
    public List<List<Integer>> threeSum(int[] nums) {
        /*
         Enter code here
         */
        return null;
    }

    public static void main(String[] args) {
        Seven solution = new Seven();
        System.out.println(solution.threeSum(new int[]{-1,0,1,2,-1,-4}));  // Output: [[-1,-1,2],[-1,0,1]]
        System.out.println(solution.threeSum(new int[]{0,1,1}));           // Output: []
        System.out.println(solution.threeSum(new int[]{0,0,0}));           // Output: [[0,0,0]]
    }
}