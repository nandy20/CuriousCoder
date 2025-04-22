//https://www.geeksforgeeks.org/problems/level-order-traversal/1
class Solution {
    public ArrayList<ArrayList<Integer>> levelOrder(Node root) {
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
        if(root==null)return ans;
        Queue<Node> q=new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            int size=q.size();
            ArrayList<Integer> level=new ArrayList<>();
            for(int i=0;i<size;i++){
                Node node=q.poll();
                level.add(node.data);
                if(node.left!=null)q.offer(node.left);
                if(node.right!=null)q.offer(node.right);
            }
            ans.add(level);
        }
        return ans;
    }
}

