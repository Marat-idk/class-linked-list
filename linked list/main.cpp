#include <iostream>
#include "linked_list.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "�������� ������ � ���������� ��������� � ����� ������" << endl;
	List<int> l;

	l.pushToEnd(1);
	l.pushToEnd(2);
	l.pushToEnd(3);
	l.pushToEnd(4);
	l.pushToEnd(5);

	l.printList();

	cout << "���������� �������� � ������ ������" << endl;
	l.pushToFront(0);
	l.pushToFront(-1);

	l.printList();

	cout << "�������� ������� �������� ������" << endl;

	l.deleteFirst();

	l.printList();

	cout << "�������� ���������� �������� ������" << endl;

	l.deleteLast();

	l.printList();

	cout << "���������� �������� � ������������ ����� ������" << endl;

	l.pushInPosition(22, 2);

	l.printList();

	cout << "�������� �������� �� ������������ ������� ������" << endl;

	l.deleteInPosition(2);
	l.printList();

	system("pause");
	return 0;
}