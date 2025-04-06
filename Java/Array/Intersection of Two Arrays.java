//https://leetcode.com/problems/intersection-of-two-arrays/
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        List<Integer> res = new ArrayList<>();

        for (int i = 0; i < nums1.length; i++) {
            for (int j = 0; j < nums2.length; j++) {
                if (nums1[i] == nums2[j]) {
                    boolean alreadyExists = false;
                    for (int k = 0; k < res.size(); k++) {
                        if (res.get(k) == nums1[i]) {
                            alreadyExists = true;
                            break;
                        }
                    }
                    if (!alreadyExists) {
                        res.add(nums1[i]);
                    }
                }
            }
        }

        // Convert result list to array
        int[] result = new int[res.size()];
        for (int i = 0; i < res.size(); i++) {
            result[i] = res.get(i);
        }

        return result;
    }
}
