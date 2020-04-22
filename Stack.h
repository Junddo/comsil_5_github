#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"

template <typename T>
class Stack : public LinkedList<T>{
	public : virtual bool Delete(T &element);
};

template <typename T>
bool Stack<T>::Delete(T &element){
	if(this->first == NULL) return false;
	element = this->first->data;
	Node<T> *temp = this->first;
	this->first = this->first->link;
	delete temp;
	this->current_size--;
	return true;
}
#endif
	


