// Day 06 of 30 Days 👾
public class Solution {
    public static int binaryToDecimal(String bin) {
        // base case
        if(bin.isEmpty()) {
            System.out.println("Invalid Binary Number");
            return 0;
        }
        int sum = 0;
        for(int i=0; i<bin.length(); i++) {
            char ch = bin.charAt(i);

            if(ch == '0' || ch == '1') {
                sum = sum * 2 + (ch - '0');
            } else {
                throw new IllegalArgumentException("Invalid binary number!");
            }
        }
        return sum;
    } 

    // Examples
    public static void main(String[] args) {
        System.out.println(binaryToDecimal("1011")); // Answer: 11
        System.out.println(binaryToDecimal("111")); // Answer: 7
    }
}
