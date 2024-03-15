// Day 05 of 30 Days 👾

public class Solution {
    public static boolean isPrime(int num) {
        if(num < 2) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    // Examples
    public static void main(String[] args) {
        System.out.println(isPrime(5)); // true
        System.out.println(isPrime(99)); // false
    }
}
