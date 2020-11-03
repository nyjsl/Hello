/*
 * Stack.cpp
 *
 *  Created on: 2020年11月3日
 *      Author: xiaolian
 */
#include "stack.h"

Stack::Stack(){
	top = 0;
}
bool Stack::isEmpty() const{
	return top == 0;
}
bool Stack::isFull() const{
	return top == MAX;
}
bool Stack::push(const Item & item){
	if(top<MAX){
		items[top++] = item;
		return true;
	}else{
		return false;
	}
}
bool Stack::pop(Item & item){
	if(top>0){
		item = items[--top];
		return true;
	}else{
		return false;
	}
}

