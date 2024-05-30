#! /usr/bin/python3

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def insert(node, key):
    if node is None:
        return Node(key)

    if key < node.data:
        node.left = insert(node.left, key)
    elif key > node.data:
        node.right = insert(node.right, key)

    return node

def search(node, key, level):
    if node is None or node.data == key:
        return node,level

    if key < node.data:
        return search(node.left, key, level+1)
    elif key > node.data:
        return search(node.right, key, level+1)

def min_node(node, min_val):
    if node is None:
        return min_val

    if min_val >= node.data:
        return min_node(node.left, node.data)
    
    return node.data

def common_nodes(a, b):
    if a is None or b is None:
        return
    
    common_nodes(a.left, b)
    
    s,l = search(b, a.data, 0)
    if not s is None:
        print("{}".format(a.data))

    common_nodes(a.right, b)
    
def printTree(node, space):
    if node is None:
        return

    space += 5

    printTree(node.left, space)

    print(" " * space, "{}".format(node.data))

    printTree(node.right, space)

def main():
    root = Node(10)

    # left
    insert(root, 5)
    insert(root, 7)
    insert(root, 1)

    # right
    insert(root, 15)
    insert(root, 20)
    insert(root, 11)
    insert(root, 22)

    a = Node(5)
    insert(a, 1)
    insert(a, 0)
    insert(a, 4)
    insert(a, 10)
    insert(a, 7)
    insert(a, 9)

    b = Node(10)
    insert(b, 7)
    insert(b, 4)
    insert(b, 9)
    insert(b, 20)

    # print
    printTree(root, 0)
    
    s,l = search(root,22,0)
    if s is None:
        print("value not found")
    else:
        print("Value {} found in level {}".format(s.data, l))

    print("The minimum value is {}".format(min_node(root, root.data)))

    common_nodes(a,b)

if __name__ == '__main__':
    main()
