// Day 03 of 30 Days 👾

public class Solution {
    public static boolean isLeapYear(int year) {
        if (year % 400 == 0) {
            return true;
        } else if (year % 4 == 0 && year % 100 != 0) {
            return true;
        } else {
            return false;
        }
    }

    // Example 1
    public static void main(String[] args) {
        System.out.println(isLeapYear(2019));
    }
}