#include<bits/stdc++.h>
using namespace std;

class Node {
	public :
		int data;
		Node* next;

		Node(int val){
			data = val;
			next = NULL;
		}
};

class LinkedList{
	public :
		Node* head;
		int count;
		LinkedList(){
			head = NULL;
			count = 0;
		}

		void push_back(int x){
			count++;
			Node* newNode = new Node(x);
			if(head == NULL)head = newNode;
			else{
				Node* temp = head;
				while(temp->next!= NULL){
					temp = temp->next;
				}
				temp->next = newNode;
			}
		}

		void push_front(int x){
			count++;
			Node* newNode = new Node(x);
			newNode->next = head;
			head = newNode;
		}

		void insert(int x, int pos){
			count++;
			Node* newNode = new Node(x);
			if(pos == 0){
				newNode->next = head;
				head = newNode;
			}

			Node* temp = head;
			for(int i = 0;i<pos -1;i++){
				temp = temp->next;
			}
			newNode->next = temp->next;
			temp->next = newNode;
		}

		void pop_front(){
			count--;
			if(head == NULL)return;
			Node* temp = head;
			head = head->next;
			delete temp;
		}

		void pop_back(){
			count--;
			if(head == NULL)return;
			if(head->next == NULL){
				delete head;
				head = NULL;
			}
			Node* prev = NULL;
			Node* curr = head;
			while(curr->next != NULL){
				prev = curr;
				curr = curr->next;
			}
			delete curr;
			prev->next = NULL;
		}

		void display(){
			Node* temp = head;
			while(temp != NULL){
				cout<<temp->data<<endl;
				temp = temp->next;
			}
		}

		int size(){
			return count;
		}
};

int main(){
	LinkedList l1;
	l1.push_back(5);
	l1.push_back(6);
	l1.push_front(7);

	l1.insert(97,1);

	cout<<l1.size();
	cout<<endl;

	l1.display();
}


















