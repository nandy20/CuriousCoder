//https://www.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/1
def help(root,arr):
    if root:
        if root.left and not root.right:
            arr.append(root.left.data)
        elif root.right and not root.left:
            arr.append(root.right.data)
        help(root.left,arr)
        help(root.right,arr)

def noSibling(root):
    arr=[]
    help(root,arr)
    arr.sort()
    return arr if arr else [-1]
