//https://www.geeksforgeeks.org/problems/count-odd-even/1
class Solution {
    public int[] countOddEven(int[] arr) {
        // Code here
         int even=0,odd=0;
    for(int i=0;i<arr.length;i++)
    {
        if(arr[i]%2==0)
        {
        even++;
        }
        else
        {
            odd++;
        }
    }
    return new int[]{odd,even};
    }
}
