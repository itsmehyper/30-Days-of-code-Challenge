// Day 04 of 30 Days 👾

public class Solution {
    public static boolean isPalindrome(String str) {

        // deleting non-alphabetic characters && and convert upper case to lower case
        String text = str.replaceAll("[^a-zA-Z]", "").toLowerCase();
        int first = 0;
        int last = text.length()-1;

        // two pointer approach for Time Complexity = O(n) i.e., linear time complexity
        while(first < last) {
            if(text.charAt(first) != text.charAt(last)) {
                return false;
            }
            first++;
            last--;
        } 
        return true;
    }

    // Example
    public static void main(String[] args) {
        System.out.println(isPalindrome("Coding"));
        System.out.println(isPalindrome("NaN"));
    }
}