// Solution for https://www.geeksforgeeks.org/problems/rotation4723/1
class Solution {
    public int findKRotation(List<Integer> a) {
        int x=-1;
        for(int i=0;i<a.size()-1;i++){
            if(a.get(i)>a.get(i+1)){
                x=i;
                break;
            }
        }
        if(x!=-1){
            return x+1;
        }
        return 0;
    }
}
