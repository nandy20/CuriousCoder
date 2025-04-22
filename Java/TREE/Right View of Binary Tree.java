//https://www.geeksforgeeks.org/problems/right-view-of-binary-tree/1
class Solution {
    // Function to return list containing elements of right view of binary tree.
    ArrayList<Integer> rightView(Node root) {
        // add code here.
        
        // code here
        if(root==null){
            return new ArrayList();
        }
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        ArrayList<Integer>ans = new ArrayList();
        while(q.size()!=0){
            int size=q.size();
            for(int i=0;i<size;i++){
               if(i==size-1){
                   ans.add(q.peek().data);
               }
                Node front=q.peek();
                if(front.left!=null){
                    q.add(front.left);
                }
                if(front.right!=null){
                    q.add(front.right);
                }
                q.remove();
            }
        }
        return ans;
    }
}
