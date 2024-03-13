// Day 01 of 30 days

class Main {
    // the method should accept a string and return a string
    public static String reverseString(String str) {
        StringBuilder result = new StringBuilder();
        for(int i=str.length()-1; i>=0; i--) {
            result.append(str.charAt(i));
        }
        return result.toString();
    }

    // Example 1
    public static void main(String[] args) {
        System.out.println(reverseString("Hello World"));
    }
}