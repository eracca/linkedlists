/*
 * SSNode.hpp
 *
 *  Created on: Sep 26, 2016
 *      Author: Debra
 */

#ifndef SNode_HPP_
#define SNode_HPP_

class SNode {
	friend class SLL;
	int data;
	SNode *next;
public:
	SNode(int x);
	~SNode();
	int getData();
};



#endif /* SSNode_HPP_ */
