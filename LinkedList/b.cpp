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
		int cnt;
		LinkedList(){
			head = NULL;
			cnt = 0;
		}

		void push_back(int x){
			cnt++;
			Node* newNode = new Node(x);
			if(head == NULL)head = newNode;
			else{
				Node* temp = head;
				while(temp->next != nullptr){
					temp = temp->next;
				}
				temp->next = newNode;
			}
		}

		void removenth(int n){
			Node* prev = head;
			for(int i=1;i<cnt - n;i++){
				prev = prev->next;
			}
			prev->next = prev->next->next;

		}

		void rotate(){
			Node* prev = nullptr;
			Node* curr = head;
			Node* nxt = nullptr;
			while(curr != nullptr){
				nxt = curr->next;
				curr->next = prev;
				prev = curr;
				curr = nxt;
			}
			head = prev;
		}

		void display(){
			Node* temp = head;
			while(temp != NULL){
				cout<<temp->data<<endl;
				temp = temp->next;
			}
		}
};

int main(){
	LinkedList l1;
	l1.push_back(4);
	l1.push_back(5);
	l1.push_back(7);
	l1.push_back(9);
	l1.push_back(1);

	l1.removenth(3);

	l1.rotate();

	l1.display();
}










