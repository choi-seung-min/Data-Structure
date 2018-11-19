#include<stdio.h>
#include "BinaryTree.h"

int main()
{
	BTreeNode * node1 = MakeBTreeNode;
	BTreeNode * node2 = MakeBTreeNode;
	BTreeNode * node3 = MakeBTreeNode;
	BTreeNode * node4 = MakeBTreeNode;
	BTreeNode * node5 = MakeBTreeNode;
	BTreeNode * node6 = MakeBTreeNode;
	BTreeNode * node7 = MakeBTreeNode;

	SetData(node1, "-");
	SetData(node2, "*");
	SetData(node3, "1");
	SetData(node4, "4");
	SetData(node5, "2");
	SetData(node6, "+");
	SetData(node7, "7");

	MakeLeftSubTree(node1, node2);

	BTreeNode * bt1 = MakeBTreeNode();
	BTreeNode * bt2 = MakeBTreeNode();
	BTreeNode * bt3 = MakeBTreeNode();
	BTreeNode * bt4 = MakeBTreeNode();
	BTreeNode * bt5 = MakeBTreeNode();
	BTreeNode * bt6 = MakeBTreeNode();
	BTreeNode * bt7 = MakeBTreeNode();

	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);
	SetData(bt5, 5);
	SetData(bt6, 6);
	SetData(bt7, 7);

	MakeLeftSubTree(bt1, bt2);
	MakeRightSubTree(bt1, bt3);
	MakeLeftSubTree(bt2, bt4);
	MakeRightSubTree(bt2, bt5);
	MakeLeftSubTree(bt3, bt6);
	MakeRightSubTree(bt3, bt7);

	printf("       %d      \n", getdata(bt1));
	printf("   %d       %d   \n", getdata(bt2), getdata(bt3));
	printf("%d    %d   %d   %d\n", getdata(bt4), getdata(bt5), getdata(bt6), getdata(bt7));
	InorderTraverse(bt1);
	DeleteBTreeNode(bt1);
	return 0;
}