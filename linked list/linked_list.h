#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;

template<class T>
class List {
private:
	struct Node
	{
		T data;
		Node* next;
	};

	Node* head;

public:
	List() { head == nullptr; }
	List(T x);
	~List();

	// добавление узла в конец списка
	void pushToEnd(T x);
	// добавление узла в начало списка
	void pushToFront(T x);
	// вставка в определенную позицию
	void pushInPosition(T x, int pos);
	// удаление первого узла списка
	void deleteFirst();
	// удаление последнего узла списка
	void deleteLast();
	// удаление из определенной позиции
	void deleteInPosition(int pos);
	//вывод списка
	void printList();
};

template<class T>
List<T>::List(T x) {
	head = new Node;
	head->data = x;
	head->next = nullptr;
}

template<class T>
List<T>::~List(){
	while (head != nullptr) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

template<class T>
void List<T>::pushToEnd(T x) {
	if (head == nullptr) {
		head = new Node;
		head->data = x;
		head->next = nullptr;
	}
	else {
		Node* temp = head;
		while (temp->next != nullptr)
			temp = temp->next;
		temp->next = new Node;
		temp->next->data = x;
		temp->next->next = nullptr;
	}
}

template<class T>
void List<T>::pushToFront(T x) {
	Node* temp = new Node;
	temp->data = x;
	temp->next = head;
	head = temp;
}

template<class T>
void List<T>::pushInPosition(T x, int pos) {
	Node* temp = new Node;
	temp->data = x;
	temp->next = nullptr;
	if (head == nullptr)
		head = temp;
	else if (pos == 0)
	{
		temp->next = head;
		head = temp;
	}
	else
	{
		Node* cur = head;
		int d = 1;
		while (cur != nullptr)
		{
			if (d == pos)
			{
				temp->next = cur->next;
				cur->next = temp;
				break;
			}
			cur = cur->next;
			d++;
		}
	}
}

template<class T>
void List<T>::deleteFirst() {
	Node* temp = head;
	head = head->next;
	delete temp;
}

template<class T>
void List<T>::deleteLast() {
	Node* temp = head;
	while (temp->next->next != nullptr)
		temp = temp->next;
	delete temp->next;
	temp->next = nullptr;
}

template<class T>
void List<T>::deleteInPosition(int pos) {
	Node* temp = head;
	while (temp->next != nullptr) {
		--pos;
		if (pos == 1) {
			Node* t = temp->next;
			temp->next = temp->next->next;
			delete t;
		}
		else {
			temp = temp->next;
		}
	}
}

template<class T>
void List<T>::printList() {
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

#endif // !LINKED_LIST_H
