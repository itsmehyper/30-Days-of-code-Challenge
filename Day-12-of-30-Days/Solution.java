// Day 12 of 30 Days 👾

public class Solution { // time complexity = O(n^2)
    public static boolean isAnagram(String str1, String str2) {
        String text1 = str1.replaceAll("[^a-zA-Z]", "").toLowerCase();
        String text2 = str2.replaceAll("[^a-zA-Z]", "").toLowerCase();

        if (text1.length() == text2.length()) {
            int count = 0;
            for (int i = 0; i < text1.length(); i++) {
                for (int j = 0; j < text2.length(); j++) {
                    if (text1.charAt(i) == text2.charAt(j)) {
                        count++;
                        break;
                    }
                }
            }
            if (count == text1.length()) {
                return true;
            }
        }
        return false;
    }

    // Examples
    public static void main(String[] args) {
        System.out.println(isAnagram("test", "test")); // true
        System.out.println(isAnagram("Listen", "Silent")); // true
        System.out.println(isAnagram("hello", "world")); // false
        System.out.println(isAnagram("Astronomer", "Moon starer")); // true
    }
}
