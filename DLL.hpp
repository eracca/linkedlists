/*
 * DLL.hpp
 *
 *  Created on: Sep 28, 2016
 *      Author: Debra
 */

#ifndef DLL_HPP_
#define DLL_HPP_

#include "DNode.hpp"

class DLL {
	DNode *first;
	DNode *last;
	int size;
public:
	DLL();
	~DLL();
	void printDLL();
	void printRevDLL();
	void addFirst(int x);
	void addAtFront(int x);
	void push(int x);
	void addAtK(int x, int k);

	void join(DLL *list2);
	int pop();
	DNode *findKth(int k);
	int findK(int k);
	int remFirst();
	int remKth(int k);
	void sortDLL();
	void Merge2(DLL *l2);
	void RemoveDuplicates();
};



#endif /* DLL_HPP_ */
