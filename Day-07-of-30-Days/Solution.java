// Day 07 of 30 Days

public class Solution {
    public static int sumOfIntegers(int num) {
        int sum = 0;
        for (int i = 1; i <= num; i++) {
            sum += i;
        }
        return sum;
    }
    
    public static void main(String[] args) {
        // Examples
        System.out.println(sumOfIntegers(10)); // output: 55
        System.out.println(sumOfIntegers(0)); // output: 0
        System.out.println(sumOfIntegers(7)); // output: 28
        System.out.println(sumOfIntegers(18)); // output: 171
    }
}