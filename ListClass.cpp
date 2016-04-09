#include "ListClass.h"
/*****************************************************************************************
 * begin
 ****************************************************************************************/

//Implementation of doubly linked list class
//This will allow us to maintain constant time operation as long as we have the postion given



/*****************************************************************************************
 * constructor and big 5
 ****************************************************************************************/
 
 List() { init(); }
 
 ~List() {
 	clear();
 	delete head;
 	delete tail;
 }
 
 List( const List & rhs ) {
 	List copy = rhs;
 	std::swap( *this, copy);
 	return *this;
 }
 
  List( List && rhs): theSize{ rhs.theSize }, head{ rhs.head}, tail{ rhs.tail} {
  	rhs.theSize = 0;
  	rhs.head = NULL;
  	rhs.tail = NULL;
  }
  
  List & operator= (List && rhs) {
  	std::swap(theSize, rhs.theSize);
  	std::swap(head, rhs.head);
 	std::swap(tail, rhs.tail);
 	
 	return *this;
 }
 
 void init() {
 	theSize = 0;
 	head = new Node;
 	tail = new Node;
 	head->next = tail;
 	tail->prev = head;
 }
 
 
 
 
 
 
 
 /*****************************************************************************************
 * end
 ****************************************************************************************/