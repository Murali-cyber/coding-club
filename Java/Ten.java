package JAVA;
//import java.util.*;

public class Ten {
    public static boolean isValid(String s) {
        /*
         Enter code here
         */
        return false;
    }

    // Driver code
    public static void main(String[] args) {
        System.out.println(isValid("()"));        // Output: true
        System.out.println(isValid("()[]{}"));    // Output: true
        System.out.println(isValid("(]"));        // Output: false
        System.out.println(isValid("([)]"));      // Output: false
        System.out.println(isValid("{[]}"));      // Output: true
    }
}
