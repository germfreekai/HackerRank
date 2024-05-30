#! /usr/bin/python3

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def maxDepth(node):
    if node is None:
        return 0

    left_d = maxDepth(node.left)
    right_d = maxDepth(node.right)

    if left_d > right_d:
        return left_d + 1
    else:
        return right_d + 1

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
root.left.right.right = Node(44)

# Right side
root.right = Node(3)
root.right.right = Node(17)
root.right.right.right = Node(33)

print("Max height: {}".format(maxDepth(root)))

printTree(root, 0)
