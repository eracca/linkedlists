/*
 * DNode.cpp
 *
 *  Created on: Sep 28, 2016
 *      Author: Debra
 */

#include "DNode.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

DNode::DNode(int k) {
	data = k;
	next = NULL;
	prev = NULL;
}
DNode::~DNode() {
	if (next != NULL || prev != NULL) {
		cout << "deleting this DNode may cause a memory leak" << endl;
	}
}
int DNode::getData() {
	return data;
}


