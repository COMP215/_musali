# files: 
#BinarySearchTree.cpp
#BinarySearchTree.h
#LinkedList.cpp
#LinkedList.h
#main.cpp

The BinarySearchTree.h:
    
    Contains a Node class that contains a string data, pointer for left and right, and a Node that passes in a string. It also has a BinarySearchTree class that contains a pointer called root in private so it cant be changed in main.cpp. It has a BinarySearchTree constructor a bool Insert that passes in a string, a bool Inorder constructor, a bool InOrder constructor that passes in a Node pointer, and a bool Search that passes in a string called search_value.

BinarySearchTree.cpp

    The Node constructor intializes data = data, left is null, and right is null. The Binary Search Tree constructor sets the root to NULL. Bool Insert passes in a string data. If the root is empty then it is assigned a newNode containing the data passed. It is returned so you can leave the condition. It then enters the elseif condition that is entered if the root is not empty. It creates a Node pointer called current that is assigned to a root. It then enters a while loop if the current pointer is not equal to Null then if the data is the same as the data the current pointer is pointing to it returns false and leaves the condition. If the data is less than the current data it enters an else if condition that if the left side is NULL then it will contain the new data or the current data will be assigned the current left. Else it will do the same for the right if the data is grater until the new data is lexicographically placed in order. It will return false to leave boolean statement and satisfy it. BoolSearch creates a pointer called current that is set to the root. It enters a while loop if current is not equal to null and current moves either to next left or right node until the value is found. It returns false to satisfy boolean statement and leave Search(). There is a void function called InOrder hat recursively calls itself if root is equal to NULL. There is an InOrder that passes in a pointer called node. If the node pointing is left is not equal to NULL and InOrder is recursively called to left side of node and thn the data is ouputed. It then enters the right side of the node and is recursively called.

LinkedList.h

    Contains the classes LinkedListNode and LinkedList. The LinkedListNode class has LinkedListNode constructor that passes in a string, a pointer that is clalled next, and a string called data in public. The LinkedList has a bool Insert that passes in a string, LinkedList constructor, bool Search that passes in a string, and a pointer called tail in public. In private it has a pointer called head.

LinkedList.cpp
    It has constructors for LinkedListNode that passes in a string called data and LinkedList. LinkedListNode sets pointer data_ to the string data and pointer next to NULL. LinkedList has pointer head and tail intialized to NULL. Bool Insert sets a newNode pointer to a new node that contains a passed in string. if the head is the same as nothing. It also sets the head and tail to the newNode then returns true to leave condition. Else a newNode pointer is set a node containing data and sets what tail is pointing to, to the newnode. It then sets the tail to new node so it keeps going down the list until it is empty then it set the tail to the last inserted thing. It returns true to escape.There is a bool Search that enters an if conditions when head is not equal to NULL. a newNode pointer is created that is assigned a new node containg data that has been passsed through. If the head is the same as the data has been passed through then it returns a true statemnent and leaves the boolean. Else a pointer is created called current that is set to head. While this current is not empty it goes through each of the data until it is pointing to nothing or you find the passed data. If nothing is found a string saying it couldnt be found is outputed.

main.cpp
    BinarySearch Tree pointer called people_names is set to a new Binarysearchtree. LinkedListpointer is created that intializes a LinkedList. Foowords is read in and inserted into the binarytree and linkedlist. Words.txt is then put into variable and searched through the linked list and binary tree. The file is then closed.


