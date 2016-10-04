/*
 * lab3main.cpp
 *
 *  Created on: Feb 26, 2015
 *      Author: Debra
 */

//#include <iostream>
//#include <stdlib.h>

#include "SLL.hpp"
#include "SNode.hpp"
#include "DLL.hpp"
#include "DNode.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	/*
	cout << "SLL" << endl;
// Testing SLL
	SLL *list = new SLL;
	list->addFirst(rand()%50);
	list->printSLL();
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			list->push(42);
			i++;
		}
		else {
			list->push(rand()%50);
		}
		list->printSLL();
	}
	SNode *s = list->findKth(6);
	int y = s->getData();
	cout << y << endl;
	int x = list->findK(42);
	cout << x << endl;
	list->addAtK(55,4);
	list->printSLL();
	list->addAtK(60,0);
	list->printSLL();
	x = list->pop();
	cout << x << endl;
	list->printSLL();
	x = list->pop();
	cout << x << endl;
	list->printSLL();
	x = list->remFirst();
	cout << x << endl;
	list->printSLL();
	x = list->remFirst();
	cout << x << endl;
	list->printSLL();
	x = list->remKth(3);
	cout << x << endl;
	list->printSLL();
	x = list->remKth(4);
	cout << x << endl;
	list->printSLL();

	SLL *l2 = new SLL;
	l2->addFirst(rand()%50);
	for (int i = 0; i < 10; i++) {
		l2->push(rand()%50);
	}
	l2->printSLL();
	cout << endl;
	list->join(l2);
	list->printSLL();

//Testing DLL
	cout << "DLL" << endl << endl;
	DLL *listd = new DLL;
	listd->addFirst(rand()%50);
	listd->printDLL();
	for (int i = 0; i < 8; i++) {
		if (i == 4) {
			listd->push(42);
			i++;
		}
		else {
			listd->push(rand()%50);
		}
		listd->printDLL();
	}
	DNode *s2 = listd->findKth(6);
	int y2 = s2->getData();
	cout << y2 << endl;
	int x2 = listd->findK(42);
	cout << x2 << endl;
	listd->addAtK(55,4);
	listd->printDLL();
	listd->addAtK(60,0);
	listd->printDLL();
	x2 = listd->pop();
	cout << x2 << endl;
	listd->printDLL();
	x2 = listd->pop();
	cout << x2 << endl;
	listd->printDLL();
	x2 = listd->remFirst();
	cout << x2 << endl;
	listd->printDLL();
	x2 = listd->remFirst();
	cout << x2 << endl;
	listd->printDLL();
	x2 = listd->remKth(3);
	cout << x2 << endl;
	listd->printDLL();
	x2 = listd->remKth(4);
	cout << x2 << endl;
	listd->printDLL();
	DLL *ld2 = new DLL;
	ld2->addFirst(rand()%50);
	for (int i = 0; i < 8; i++) {
		ld2->push(rand()%50);
	}
	ld2->printDLL();
	cout << endl;
	listd->join(ld2);
	listd->printDLL();
	listd->printRevDLL();
	*/
	DLL *list1 = new DLL;
	list1->addFirst(rand()%50);
	list1->printDLL();
	for (int i = 0; i < 8; i++) {
		if (i == 4) {
			list1->push(42);
			i++;
		}
		else {
			list1->push(rand()%50);
		}
	}
	list1->printDLL();
	list1->sortDLL();
	list1->printDLL();

	DLL *list2 = new DLL;
	list2->addFirst(rand()%50);
	list2->printDLL();
	for (int i = 0; i < 8; i++) {
		if (i == 4) {
			list2->push(42);
			i++;
		}
		else {
			list2->push(rand()%50);
		}
	}
	list2->printDLL();
	list2->sortDLL();
	list2->printDLL();
	list1->Merge2(list2);
	list1->printDLL();
}

