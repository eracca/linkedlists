/*
 * SLL.hpp
 *
 *  Created on: Sep 26, 2016
 *      Author: Debra
 */

#ifndef SLL_HPP_
#define SLL_HPP_
#include "SNode.hpp"

class SLL {
	SNode *first;
	SNode *last;
	int size;
public:
	SLL();
	~SLL();
	void printSLL();
	void addFirst(int x);
	void addAtFront(int x);
	void push(int x);
	void addAtK(int x, int k);

	void join(SLL *list2);
	int pop();
	SNode *findKth(int k);
	int findK(int k);
	int remFirst();
	int remKth(int k);
	void reverseList();
};





#endif /* SLL_HPP_ */
