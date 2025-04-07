//https://leetcode.com/problems/merge-sorted-array/
class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        num3 = []
        i, j = 0, 0
        
        # Merge the two sorted lists
        while i < m and j < n:
            if nums1[i] < nums2[j]:
                num3.append(nums1[i])
                i += 1
            else:
                num3.append(nums2[j])
                j += 1
        
        # Add remaining elements from nums1
        while i < m:
            num3.append(nums1[i])
            i += 1
        
        # Add remaining elements from nums2
        while j < n:
            num3.append(nums2[j])
            j += 1
        
        # Modify nums1 in-place
        for i in range(m + n):
            nums1[i] = num3[i]
