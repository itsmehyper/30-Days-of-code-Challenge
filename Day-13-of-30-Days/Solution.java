import java.util.*;
public class Solution {
    public static Map<Character, Integer> calculateVowels(String input) {
        // Initialize a map to store vowel counts
        Map<Character, Integer> vowelCounts = new HashMap<>();
        String vowels = "aeiou";

        for (char vowel : vowels.toCharArray()) {
            vowelCounts.put(vowel, 0);
        }
        input = input.toLowerCase();

        // Iterate through each character in the input string
        for (char c : input.toCharArray()) {
            if (vowels.contains(Character.toString(c))) {
                vowelCounts.put(c, vowelCounts.get(c) + 1);
            }
        }

        return vowelCounts;
    }

    public static void main(String[] args) {
        System.out.println(calculateVowels("Hello World"));
        System.out.println(calculateVowels("Try"));
    }
}
