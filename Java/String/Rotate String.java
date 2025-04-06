//https://leetcode.com/problems/rotate-string/
class Solution {
    public boolean rotateString(String s, String goal) {
        int len = s.length();

        for (int i = 1; i <= len; i++) {
            String rotated = s.substring(i) + s.substring(0, i);
            if (rotated.equals(goal)) {
                return true;
            }
        }

        return false;
    }
}
