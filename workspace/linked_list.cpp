#include <string>
using namespace std;

template <typename item_type>
class linked_list{
    
    struct Node{
        item_type data;
        Node* next;
        Node* prev;
    };
    
  public:
  linked_list ();
  linked_list (item_type data);
  ~linked_list ();
  void add_node (item_type data);
  void delete_node (item_type data);
  
  private:
  Node* head;
  Node* tail;
};

linked_list :: linked_list (){
  
}

linked_list :: linked_list (item_type data){
  
}

linked_list :: ~linked_list (){
  
}

void linked_list :: add_node (item_type data){
  
}

void linked_list :: delete_node (item_type data){
  
}