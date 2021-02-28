#include <iostream>
#include "linked_list.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "Создание списка и добавление элементов в конец списка" << endl;
	List<int> l;

	l.pushToEnd(1);
	l.pushToEnd(2);
	l.pushToEnd(3);
	l.pushToEnd(4);
	l.pushToEnd(5);

	l.printList();

	cout << "Добавление элемента в начало списка" << endl;
	l.pushToFront(0);
	l.pushToFront(-1);

	l.printList();

	cout << "Удаление первого элемента списка" << endl;

	l.deleteFirst();

	l.printList();

	cout << "Удаление последнего элемента списка" << endl;

	l.deleteLast();

	l.printList();

	cout << "Добавление элемента в определенное место списка" << endl;

	l.pushInPosition(22, 2);

	l.printList();

	cout << "Удаление элемента из определенной позиции списка" << endl;

	l.deleteInPosition(2);
	l.printList();

	system("pause");
	return 0;
}