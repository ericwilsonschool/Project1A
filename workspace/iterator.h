#ifndef _iterator_h
#define _iterator_h
class iterator{
    friend class linked_list;
    
private:
    linked_list* parent;
    typename linked_list::Node* current;
    iterator(linked_list* my_parent, Node* position) : parent(my_parent),
    current(position) {}

public:
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
