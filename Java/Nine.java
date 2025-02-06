package JAVA;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Nine {
    public static List<Integer> removeNthElement(List<Integer> list, int n) {
        /*
         Enter code here
         */
        return null;
    }

    // Driver code
    public static void main(String[] args) {
        List<Integer> list1 = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));
        int n1 = 3;
        System.out.println(removeNthElement(list1, n1)); // Output: [1, 2, 3, 5]

        List<Integer> list2 = new ArrayList<>(Arrays.asList(1));
        int n2 = 0;
        System.out.println(removeNthElement(list2, n2)); // Output: []

        List<Integer> list3 = new ArrayList<>(Arrays.asList(1, 2));
        int n3 = 1;
        System.out.println(removeNthElement(list3, n3)); // Output: [1]
    }
}
