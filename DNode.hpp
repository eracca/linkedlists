/*
 * DNode.hpp
 *
 *  Created on: Sep 28, 2016
 *      Author: Debra
 */

#ifndef DNODE_HPP_
#define DNODE_HPP_

class DNode {
	friend class DLL;
	int data;
	DNode *next;
	DNode *prev;
public:
	DNode(int x);
	~DNode();
	int getData();
};



#endif /* DNODE_HPP_ */
