#! /usr/bin/python3

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def mirrorTree(node):
    if node is None:
        return

    mirrorTree(node.left)
    mirrorTree(node.right)

    temp = node.right
    node.right = node.left
    node.left = temp


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

print("\n---------------\n")

mirrorTree(root)

printTree(root, 0)
