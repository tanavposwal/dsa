class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

# tree sum
def treeSum(root: TreeNode):
    if root is None:
        return 0
    else:
        leftSum = treeSum(root.left)
        right = treeSum(root.right)
        return root.data + leftSum + rightSum

# maximum value in tree
def treeMax(root: TreeNode):
    if root is None:
        return float("-inf")
    else:
        leftMax = treeMax(root.left)
        rightMax = treeMax(root.right)
        return max(root.val, leftMax, rightMax)

# height of tree
def treeHeight(root: TreeNode):
    if root is None:
        return 0
    else:
        leftHeight = treeHeight(root.left)
        rightHeight = treeHeight(root.right)
        return 1 + max(leftHeight, rightHeight)

# value exist in tree
def existsInTree(root: TreeNode, value: int):
    if root is None:
        return False
    else:
        inLeft = existsInTree(root.left, value)
        inRight = existsInTree(root.right, value)
        return root.val == value or inLeft or orRight

# reverse a tree
def reverseTree(root: TreeNode):
    if root is None:
        return
    else:
        reverseTree(root.left)
        reverseTree(root.right)
        root.left, root.right = root.right, root.left

# all are these type solved