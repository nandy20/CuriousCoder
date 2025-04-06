//https://www.geeksforgeeks.org/problems/reverse-a-string/1
class Solution {
    public static String reverseString(String str) {
        // code here
        char[] chars = str.toCharArray();
        int i = 0, j = chars.length - 1;

        // Reverse the characters in the array
        while (i < j) {
            char temp = chars[i];
            chars[i] = chars[j];
            chars[j] = temp;
            i++;
            j--;
        }

        // Convert the character array back to string
        return new String(chars);
    }
}
