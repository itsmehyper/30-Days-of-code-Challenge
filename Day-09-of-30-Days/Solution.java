// Day 09 of 30 Days 👾

public class Solution {
    public static int sumOfDigit(int num) {
        // base case
        if (num < 10) {
            return num;
        }

        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }

        return sumOfDigit(sum);
    }

    // Example
    public static void main(String[] args) {
        System.out.println(sumOfDigit(2369));
    }
}
