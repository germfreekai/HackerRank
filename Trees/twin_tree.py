#! /usr/bin/python3

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def twinTrees(a, b):
    if a is None and b is None:
        return True

    if a is not None and b is not None:
        return ((a.data == b.data) and twinTrees(a.left, b.left) and twinTrees(a.right, b.right) )
    
    return False

def printTree(node, space):
    if node is None:
        return

    space += 5

    printTree(node.right, space)

    print(" " * space, "{}".format(node.data))
    
    printTree(node.left,space)


root = Node(1)

# Left sde
root.left = Node(2)
root.left.left = Node(3)
root.left.right = Node(5)
root.left.right.left = Node(44)

# Right side
root.right = Node(3)
root.right.right = Node(17)
root.right.right.right = Node(33)

printTree(root, 0)

print("\n-------------\n")

root1 = Node(1)

# Left sde
root1.left = Node(2)
root1.left.left = Node(3)
root1.left.right = Node(5)
root1.left.right.left = Node(44)

# Right side
root1.right = Node(3)
root1.right.right = Node(17)
root1.right.right.right = Node(33)

printTree(root1, 0)

print("\n-------------\n")

print(twinTrees(root, root1))
