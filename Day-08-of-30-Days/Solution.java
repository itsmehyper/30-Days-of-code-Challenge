// Day 08 of 30 Days 👾
public class Solution {
    public static boolean isPowerOfTwo(int num) {
        if (num < 1) {
            return false;
        }
        return (num & (num - 1)) == 0;
    }

    // Example
    public static void main(String[] args) {
        System.out.println(isPowerOfTwo(6)); // false
    }
}
