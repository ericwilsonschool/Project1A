#ifndef _iterator_h
#define _iterator_h
#include "linked_list.cpp"
class iterator{
private:
    linked_list<T>* parent;
    typename linked_list<T>::Node* current;
    iterator(linked_list<T>* my_parent, Node* position) : parent(my_parent),
    current(position) {}

public:
    friend class <T>linked_list;
    T& operator* () const {
        if (current == NULL)
            throw std :: invalid_argument("Attempting to derefernce end");
        return current->data;
    }
    
    T* operator-> () {
        if(current == NULL)
            throw std :: invalid_argument("Attempting to advance past end");
        return &(current->data);
    }
    iterator& operator++(){
        if(current == NULL)
            throw std:: invalid_argument("Attempt to advance past end()");
        current = current->next;
        return *this;
    }
    iterator& operator--() {
        if (current == parent->head)
            throw std::invalid_argument("Attempt to move before begin()");
        if (current == NULL)   // Past last element.
            current = parent->tail;
        else
            current = current->prev;
        return *this;
    }
    
    
    iterator& operator++(int) {
        // Make a copy of the current value.
        iterator return_value = *this;
        // Advance self forward.
        ++(*this);
        // Return old value.
        return return_value;   // Return the value prior to increment
    }
    
    iterator  operator--(int) {
        // Make a copy of the current value.
        iterator return_value = *this;
        // Move self backward.
        --(*this);
        // Return old value.
        return return_value;   // Return the value prior to decrement
    }
    
    //Compare for equality
    bool operator ==(const iterator& other){
        return current == other.current;
    }
    
    //Not equal
    bool operator !=(const iterator&other){
        return current != other.current;
    }
    
};

#endif
