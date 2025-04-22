//https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1
class GFG
{
    //Function to store the zig zag order traversal of tree in a list.
	ArrayList<Integer> zigZagTraversal(Node root)
	{
	    //Add your code here.
	    ArrayList<Integer> ans = new ArrayList<>();
        if (root == null) {
            return ans;
        }
        
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        boolean flag = true;
        
        while (!q.isEmpty()) {
            int size = q.size();
            ArrayList<Integer> level = new ArrayList<>();
            
            for (int i = 0; i < size; i++) {
                Node node = q.poll();
                level.add(node.data);
                
                if (node.left != null) {
                    q.add(node.left);
                }
                if (node.right != null) {
                    q.add(node.right);
                }
            }
            
            // If the flag is false, reverse the level before adding it to the result
            if (!flag) {
                Collections.reverse(level);
            }
            
            ans.addAll(level);
            flag = !flag; // Toggle the flag for next level
        }
        
        return ans;
	}
}
