/*
 * DLL.cpp
 *
 *  Created on: Sep 28, 2016
 *      Author: Debra
 */

#include "DLL.hpp"
#include "DNode.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

DLL::DLL(){
	first = NULL;
	last = NULL;
	size = 0;
}
DLL::~DLL(){
	DNode *tmp = first;
	while (first != NULL) {
		tmp = first->next;
		delete first;
		first = tmp;
		size --;
	}
	first = NULL;
	last = NULL;
}
void DLL::printDLL() {
	DNode *tmp = first;
	while (tmp != NULL) {
		cout << tmp->data << "->";
		tmp = tmp->next;
	}
	cout << endl;
}
void DLL::printRevDLL() {
	DNode *tmp = last;
	while (tmp != NULL) {
		cout << tmp->data << "->";
		tmp = tmp->prev;
	}
	cout << endl;
}

void DLL::addFirst(int x) { //2 pts
//add very first element to list
    DNode *n = new DNode(x); 
    first = n;
    last = n; 
    size = 1; 
}

void DLL::addAtFront(int x) { //2 pts
//	add a new node to the beginning of the list
    DNode *n = new DNode(x); 
    n->next = first; 
    first-> prev = n; 
    first = n; 
    size++;  
}

void DLL::push(int x) { //2 pts
// add a new node to the end of the list
    DNode *n = new DNode(x); 
    n->prev = last; 
    last->next = n; 
    last = n; 
    size+;  
}

void DLL::addAtK(int x, int k){ //4 pts
//add at position k a new node with x as the data
    DNode *tmp = first;
    if (k==0){
        addAtFront(x); 
    }
    if (k < size && k >= 0){
        for (int i = 0; i< k-1; i++){
            tmp =  tmp->next;
        }
        //NEEDS WORK

}
void DLL::join(DLL *list2){ //2 pts
// join list 2 to the end of the list, modifying the size of the list
}

int DLL::pop() { //5 pts
//popping the last node off the end of the list and returning that data
}
DNode *DLL::findKth(int k) { 
//find the element at the kth position and returning a pointer to that node
}
int DLL::findK(int k) {
	DNode *tmp = first;
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
int DLL::remFirst() { //2 pts
//remove the first node from the list, returning its data
}
int DLL::remKth(int k) { //4 pts
//remove the kth element of the list, returning its data
}
void RecursiveReverse(DLL *l2) { //6 pts
// RECURSIVELY reverses the list
}
void DLL::sortDLL() { //10 pts
//sort the list from smallest to largest
}

void DLL::Merge2(DLL *l2) { //10 pts
//Merge two sorted lists into one longer sorted list, and setting
//the current list to the longer sorted list
// Note that I sorted both lists before I called this.
//also note that joining the two lists and then sorting is NOT what I want
//here - I want this function to start at the beginning of each list,
//and pull the smallest of the 2 values into the new list, then move up
//one in that particular list.  
// e.g., 
// l1 = 3,7,12,15,22,23,24,29    l2=4,8,12,13,27
// n=3
// l1 = 7,12,15,22,23,24,29    l2=4,8,12,13,27
// n=3,4
// l1 = 7,12,15,22,23,24,29    l2=8,12,13,27
// n=3,4,7
// l1 = 12,15,22,23,24,29    l2=8,12,13,27
// n=3,4,7,8
// l1 = 12,15,22,23,24,29    l2=12,13,27
// n=3,4,7,8,12
// l1 = 15,22,23,24,29    l2=12,13,27
// n=3,4,7,8,12,12
// l1 = 15,22,23,24,29    l2=13,27
// n=3,4,7,8,12,12,13
// l1 = 15,22,23,24,29    l2=27
// n=3,4,7,8,12,12,13
// l1 = 15,22,23,24,29    l2=27
// n=3,4,7,8,12,12,13,15
// l1 = 22,23,24,29    l2=27
// n=3,4,7,8,12,12,13,15,22
// l1 = 23,24,29    l2=27
// n=3,4,7,8,12,12,13,15,22,23
// l1 = 24,29    l2=27
// n=3,4,7,8,12,12,13,15,22,23,24
// l1 = 29    l2=27
// n=3,4,7,8,12,12,13,15,22,23,24,27
// l1 = 29    l2
// n=3,4,7,8,12,12,13,15,22,23,24,27,29
}
void DLL::RemoveDuplicates() { //12pts
// assumes the list is unsorted, removes all duplicates from the list
//Note how massively easier this would be if we just sorted the list first...
// Note also that you can use a helper function if you like
}




