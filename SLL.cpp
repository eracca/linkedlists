/*
 * SLL.cpp
 *
 *  Created on: Sep 26, 2016
 *      Author: Debra
 */

#include "SLL.hpp"
#include "SNode.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

SLL::SLL(){
	first = NULL;
	last = NULL;
	size = 0;
}
SLL::~SLL(){
	SNode *tmp = first;
	while (first != NULL) {
		tmp = first->next;
		delete first;
		first = tmp;
		size --;
	}
	first = NULL;
	last = NULL;
}
void SLL::printSLL() {
	SNode *tmp = first;
	while (tmp != NULL) {
		cout << tmp->data << "->";
		tmp = tmp->next;
	}
	cout << endl;
}

void SLL::addFirst(int x) { // 3 pts
//make a new list of only one node, data is x
    SNode *n=new Snode(x);
    first = n;
    last = n; 
    size=1;   
}

void SLL::addAtFront(int x) {  //3 pts
//add a new node to the front of the list with data being x
    SNode *n= new Snode(x); 
    n->next=first; 
    first = n;  
    size++; 
}

void SLL::push(int x) { //6 pts
//add a new node to the end of the list, with data x
    SNode *n = new Snode(x);
    last->next=n;
    last=n; 
    size++; 
}

void SLL::addAtK(int x, int k){
	SNode *tmp = first;
	if (k==0) {
		addAtFront(x);
		size++;
	}
	if (k < size  && k >= 0) {
		for (int i = 0; i < k-1; i++) {
			tmp = tmp->next;
		}
		SNode *tmp2 = tmp->next;
		tmp->next = new SNode(x);
		tmp->next->next = tmp2;
		size++;
	}
}

void SLL::join(SLL *list2){ //3 pts
//join the list with list2, making the current list one longer list
    last->next = list2.first;
    last=list2.last; 
    size+=list2.size; 
}

int SLL::pop() {
	if (size > 0) {
		int x = last->data;
		if (first != last ){
			SNode *tmp = first;
			for (int i = 0; i < size-1;i++) {
				tmp = tmp->next;
			}
			delete last;
			last = tmp;
			last->next = NULL;
		}
		else {
			delete last;
			first = NULL;
			last = NULL;
		}
		size --;
		return x;
	}
	else {
		return -1;
	}
}

SNode *SLL::findKth(int k) { //4 pts
// find the node at the kth location and return it
    if (k==0){
        return first;
    }
    else{
        SNode* tmp = first;
        for (int i=0; i<k; i++)
            tmp=tmp->next; 
    }
}

int SLL::findK(int k) {
	SNode *tmp = first;
	int ind = 0;
	while (tmp != NULL && tmp->data != k) {
		tmp = tmp->next;
		ind++;
	}
	if (ind < size) {
		return ind;
	}
	else {
		return -1;
	}
}
int SLL::remFirst() { //3 pts
//remove the first node from the list, returning its data
    SNode *tmp = first;
    first = first->next; 
    size--;
    int x = tmp->data; 
    delete tmp; 
    return x; 
}

int SLL::remKth(int k) {
	if (k < size && k > 0) {
		SNode *tmp = first;
		for (int i = 0; i < k -1; i++) {
			tmp = tmp->next;
		}
		int x = tmp->next->data;
		SNode *tmp2= tmp->next;
		tmp->next = tmp->next->next;
		delete tmp2;
		return x;
	}
}

void SLL::reverseList(){ //10 pts
//Reverses the list, after completed, the last should be the first
//in the list and the first should be the last
//Challenge - I did this with one pass across the list
    SNode* tmp = first; 
    for (int i=0;  i<size; i++){
        tmp = tmp->next; 
        last->next = first; 
        last->next = NULL;
        first = tmp; 
    }
}

