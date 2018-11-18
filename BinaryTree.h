#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef char BTData;

typedef struct _bTreeNode
{
	BTData data;
	struct _bTreeNode * left;
	struct _bTreeNode * right;
} BTreeNode;

void InorderTraverse(BTreeNode * bt);
void PreorderTraverse(BTreeNode * bt);
void PostorderTraverse(BTreeNode * bt);

BTreeNode * MakeBTreeNode(void);
BTreeNode * DeleteBTreeNode(BTreeNode * bt);
BTData GetData(BTreeNode * bt);
void SetData(BTreeNode * bt, BTData data);

BTreeNode * GetLeftSubTree(BTreeNode * bt);
BTreeNode * GetRightSubTree(BTreeNode * bt);

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub);
void MakeRightSubTree(BTreeNode * main, BTreeNode * sub);

#endif