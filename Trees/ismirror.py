#! /usr/bin/python3

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def isMirror(a, b):
    if a is None and b is None:
        return True

    if a is not None and b is not None:
        return ( (a.data == b.data) and isMirror(a.right, b.left) and isMirror(a.left, b.right) )

    return False

def printTree(node, space):
    if node is None:
        return

    space += 5

    printTree(node.right, space)

    print(" " * space, "{}".format(node.data))
    
    printTree(node.left,space)


root = Node(1)

# Left
root.left = Node(2)
root.left.left = Node(3)
root.left.right = Node(4)

# Right
root.right = Node(2)
root.right.left = Node(4)
root.right.right = Node(3)

printTree(root, 0)

print("\n---------------\n")

b = Node(1)
b.left = Node(3)
b.right = Node(3)
b.left.left = Node(4)
b.right.left = Node(44)

printTree(b, 0)

print(isMirror(root, b))
