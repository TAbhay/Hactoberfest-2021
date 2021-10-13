#include<iostream>

class linkedList{

	typedef struct Node{
		Node *next;
		int data;
		Node(int val){
			next = NULL;
			data = val;
		}
	}Node;

	public:
		Node *head;
		linkedList(){
			head = NULL;
		}

		void insertAtFirst(int data){
			if(!head)
				head = new Node(data);
			else{
				Node *temp = new Node(data);
				temp->next = head;
				head = temp;
			}
		}


		void insertAtLast(int data){
			if(!head)
				head = new Node(data);
			else{
				Node *temp = head;
				while(temp->next)
					temp = temp->next;
				temp->next = new Node(data);
			}
		}

		void insertAtIndex(int index, int data){
			if(!head && index < 1)
				std::cout<<"Please enter a valid index or first create a List!"<<std::endl;
			else{
				--index;
				Node *temp = head;
				Node *prev = NULL;
				while(index-- && temp){
					prev = temp;
					temp = temp->next;
				}
				if(!prev){
					prev = new Node(data);
					prev->next = temp;
					head = prev;
				}
				else{
					Node *t = new Node(data);
					t->next = prev->next;
					prev->next = t;
				}
			}
		}

		int getNodeValueAtIndex(int index){
			--index;
			Node *temp = head;
			while(index-- && temp)
				temp = temp->next;
			if(temp)
				return temp->data;
			else
				std::cout<<"Please enter a Valid index."<<std::endl;
			return -1;
		}

		void deleteAtIndex(int index){
			if(!head)
				std::cout<<"Invalid index or Nodes to Delete. "<<std::endl;
			else{
				--index;
				Node *temp = head;
				Node *prev = NULL;
				while(index-- && temp){
					prev = temp;
					temp = temp->next;
				}
				if(!temp)
					std::cout<<"Please enter a valid index!"<<std::endl;
				else if(!prev)
				{
					prev = head;
					head = head->next;
					free(prev);
				}
				else{
					prev = temp->next;
					free(temp);
				}
			}

		}
		
		void printList(){
			Node *temp = head;
			while(temp){
				std::cout<<temp->data<<" ";
				temp = temp->next;
			}
			std::cout<<std::endl;
		}

};

int main(){
	linkedList list;
	list.insertAtFirst(10);
	list.insertAtFirst(12);
	list.insertAtFirst(14);
	list.insertAtLast(16);
	list.printList();
	list.deleteAtIndex(1);
	list.printList();
	list.deleteAtIndex(4);
	list.printList();
	return 0;
}