// Day 17 of 30 Days 👾
public class Solution {
    public static int recursiveFactorial(int num) {
        if(num == 0) {
            return 1;
        }

        return num * recursiveFactorial(num - 1);
    }

    // Examples
    public static void main(String[] args) {
        System.out.println(recursiveFactorial(5)); // Output: 120
        System.out.println(recursiveFactorial(0)); // Output: 1
        System.out.println(recursiveFactorial(3)); // Output: 6
    }
}
