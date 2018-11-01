proj3: BinarySearchTree.o Node.o
	g++ BinarySearchTree.o Node.o -o BST

BinarySearchTree.o: BinarySearchTree.cpp
	g++ -c BinarySearchTree.cpp

Node.o: Node.cpp Node.h
	g++ -c Node.cpp

clean: rm *.o proj3
