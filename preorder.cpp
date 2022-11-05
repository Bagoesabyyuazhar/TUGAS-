// C++ program to print Postorder traversal from
// given Inorder and Preorder traversals.
#include <bits/stdc++.h>
using namespace std;

int postIndex;

// Fills preorder traversal of tree with given
// inorder and postorder traversals in a stack
void fillPre(int iN[], int post[], int inStrt,
			int inEnd, stack<int> &s,
			map<int, int> hm)
{
	if (inStrt > inEnd)
		return;

	// Find index of next item in
	// postorder traversal in inorder.
	int val = post[postIndex];
	int inIndex = hm[val];
	postIndex--;

	// traverse right tree
	fillPre(iN, post, inIndex + 1, inEnd, s, hm);

	// traverse left tree
	fillPre(iN, post, inStrt, inIndex - 1, s, hm);

	s.push(val);
}

// This function basically initializes postIndex
// as last element index, then fills stack with
// reverse preorder traversal using printPre
void printPreMain(int iN[], int post[], int N)
{
	int len = N;
	postIndex = len - 1;
	stack<int> s;

	// Insert values in a hash map
	// and their indexes.
	map<int, int> hm;
	for (int i = 0; i < N; i++)
		hm[iN[i]] = i;

	// Fill preorder traversal in a stack
	fillPre(iN, post, 0, len - 1, s, hm);

	// Print contents of stack
	while (s.size() != 0)
	{
		cout << s.top() << " ";
		s.pop();
	}
}
	
int main()
{
	int iN[] = { 4, 10, 12, 15, 18, 22, 24, 25,
				31, 35, 44, 50, 66, 70, 90 };
	int N = sizeof(iN) / sizeof(iN[0]);
	int post[] = { 4, 12, 10, 18, 24, 22, 15, 31,
				44, 35, 66, 90, 70, 50, 25 };
	printPreMain(iN, post, N);

	return 0;
}

// This code is contributed by decode2207.

