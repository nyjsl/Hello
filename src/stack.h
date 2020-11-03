/*
 * stack.h
 *
 *  Created on: 2020年11月3日
 *      Author: xiaolian
 */

#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack{
private:
	enum{MAX = 10};
	Item items[MAX];
	int top;
public:
	Stack();
	bool isEmpty() const;
	bool isFull() const;
	bool push(const Item & item); // add item to stack
	bool pop(Item & item); // pop top into item
};




#endif /* STACK_H_ */
