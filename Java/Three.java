package JAVA;

public class Three {
    public int reverse(int x) {
        /*
         Enter code here
         */
        return 0;
    }

    public static void main(String[] args) {
        Three solution = new Three();
        System.out.println(solution.reverse(123));    // Output: 321
        System.out.println(solution.reverse(-123));   // Output: -321
        System.out.println(solution.reverse(120));    // Output: 21
        System.out.println(solution.reverse(1534236469));  // Output: 0 (overflow case)
    }
}
