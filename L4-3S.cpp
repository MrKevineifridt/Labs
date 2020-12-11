#include <iostream>
#include <Windows.h>

using namespace std;



template <class T>
class List {
	class node {
	public:
		T element;
		node* Next;
	};
	node* Head;
public:
	List()
	{
		Head = NULL;
	}
	~List()
	{
		while (Head != NULL) {
			node* temp = Head->Next;
			delete Head;
			Head = temp;
		}
	}
	void Input(T variable)
	{
		node* temp = new node;
		temp->Next = NULL;
		temp->element = variable;
		temp->Next = Head;
		Head = temp;
	}
	void Output()
	{
		node* temp = Head;
		while (temp != NULL)
		{
			cout << temp->element << " ";
			temp = temp->Next;
		}
		cout << "\n";
	}
	T GetHeadElement(int i)
	{
		node* temp = Head;
		while (i > 0) {
			temp = temp->Next;
			i--;
		}
		return temp->element;
	}
};

void ListOfInt()
{
	List<int> list1, list2;
	int size1, size2;
	int variable;
	cout << "Количество элементов первого списка: ";
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cout << "List1[" << i + 1 << "] = ";
		cin >> variable;
		list1.Input(variable);
	}
	cout << "Количество элементов второго списка: ";
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cout << "List2[" << i + 1 << "] = ";
		cin >> variable;
		list2.Input(variable);
	}
	int k = 0;

	system("cls");
	cout << "List1: ";
	list1.Output();
	cout << "List2: ";
	list2.Output();
	cout << endl;

	if (size2 < size1)
		cout << "Элементы List1 не содержатся в List2 в указаном списке List1 порядке";
	else
	{
		for (int i = 0; i < size2; i++)
		{
			if (list1.GetHeadElement(k) == list2.GetHeadElement(i))
				k++;
			else
				k = 0;
			if (k == size1)
			{
				cout << "Элементы List1 содержатся в List2 в указаном списке List1 порядке";
				break;
			}
		}
		if (k != size1)
			cout << "Элементы List1 не содержатся в List2 в указаном списке List1 порядке";
	}
	cout << endl;
}

void ListOfDouble()
{
	List<double> list1, list2;
	int size1, size2;
	double variable;
	cout << "Количество элементов первого списка: ";
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cout << "List1[" << i + 1 << "] = ";
		cin >> variable;
		list1.Input(variable);
	}
	cout << "Количество элементов второго списка: ";
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cout << "List2[" << i + 1 << "] = ";
		cin >> variable;
		list2.Input(variable);
	}
	int k = 0;

	system("cls");
	cout << "List1: ";
	list1.Output();
	cout << "List2: ";
	list2.Output();
	cout << endl;

	if (size2 < size1)
		cout << "Элементы List1 не содержатся в List2 в указаном списке List1 порядке";
	else
	{
		for (int i = 0; i < size2; i++)
		{
			if (list1.GetHeadElement(k) == list2.GetHeadElement(i))
				k++;
			else
				k = 0;
			if (k == size1)
			{
				cout << "Элементы List1 содержатся в List2 в указаном списке List1 порядке";
				break;
			}
		}
		if (k != size1)
			cout << "Элементы List1 не содержатся в List2 в указаном списке List1 порядке";
	}
	cout << endl;
}

void ListOfBool()
{
	List<bool> list1, list2;
	int size1, size2;
	bool variable;
	cout << "Количество элементов первого списка: ";
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cout << "List1[" << i + 1 << "] = ";
		cin >> variable;
		list1.Input(variable);
	}
	cout << "Количество элементов второго списка: ";
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cout << "List2[" << i + 1 << "] = ";
		cin >> variable;
		list2.Input(variable);
	}
	int k = 0;

	system("cls");
	cout << "List1: ";
	list1.Output();
	cout << "List2: ";
	list2.Output();
	cout << endl;

	if (size2 < size1)
		cout << "Элементы List1 не содержатся в List2 в указаном списке List1 порядке";
	else
	{
		for (int i = 0; i < size2; i++)
		{
			if (list1.GetHeadElement(k) == list2.GetHeadElement(i))
				k++;
			else
				k = 0;
			if (k == size1)
			{
				cout << "Элементы List1 содержатся в List2 в указаном списке List1 порядке";
				break;
			}
		}
		if (k != size1)
			cout << "Элементы List1 не содержатся в List2 в указаном списке List1 порядке";
	}
	cout << endl;
}

void ListOfFloat()
{
	List<float> list1, list2;
	int size1, size2;
	float variable;
	cout << "Количество элементов первого списка: ";
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cout << "List1[" << i + 1 << "] = ";
		cin >> variable;
		list1.Input(variable);
	}
	cout << "Количество элементов второго списка: ";
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cout << "List2[" << i + 1 << "] = ";
		cin >> variable;
		list2.Input(variable);
	}
	int k = 0;

	system("cls");
	cout << "List1: ";
	list1.Output();
	cout << "List2: ";
	list2.Output();
	cout << endl;

	if (size2 < size1)
		cout << "Элементы List1 не содержатся в List2 в указаном списке List1 порядке";
	else
	{
		for (int i = 0; i < size2; i++)
		{
			if (list1.GetHeadElement(k) == list2.GetHeadElement(i))
				k++;
			else
				k = 0;
			if (k == size1)
			{
				cout << "Элементы List1 содержатся в List2 в указаном списке List1 порядке";
				break;
			}
		}
		if (k != size1)
			cout << "Элементы List1 не содержатся в List2 в указаном списке List1 порядке";
	}
	cout << endl;
}

void ListOfChar()
{
	List<char> list1, list2;
	int size1, size2;
	char variable;
	cout << "Количество элементов первого списка: ";
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cout << "List1[" << i + 1 << "] = ";
		cin >> variable;
		list1.Input(variable);
	}
	cout << "Количество элементов второго списка: ";
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cout << "List2[" << i + 1 << "] = ";
		cin >> variable;
		list2.Input(variable);
	}
	int k = 0;

	system("cls");
	cout << "List1: ";
	list1.Output();
	cout << "List2: ";
	list2.Output();
	cout << endl;

	if (size2 < size1)
		cout << "Элементы List1 не содержатся в List2 в указаном списке List1 порядке";
	else
	{
		for (int i = 0; i < size2; i++)
		{
			if (list1.GetHeadElement(k) == list2.GetHeadElement(i))
				k++;
			else
				k = 0;
			if (k == size1)
			{
				cout << "Элементы List1 содержатся в List2 в указаном списке List1 порядке";
				break;
			}
		}
		if (k != size1)
			cout << "Элементы List1 не содержатся в List2 в указаном списке List1 порядке";
	}
	cout << endl;
}

int main()
{
	setlocale(0, "");
	bool flag = true;
	while (flag) {
		system("cls");
		int choice;
		cout << "0.Выход\n1.Cписок типа int\n2.Cписок типа double\n3.Cписок типа bool\n4.Cписок типа float\n5.Список типа char\n";
		cin >> choice;
		switch (choice) {
		case 0:
			flag = false;
			break;
		case 1:
			system("cls");
			ListOfInt();
			system("pause");
			break;
		case 2:
			system("cls");
			ListOfDouble();
			system("pause");
			break;
		case 3:
			system("cls");
			ListOfBool();
			system("pause");
			break;
		case 4:
			system("cls");
			ListOfFloat();
			system("pause");
			break;
		case 5:
			system("cls");
			ListOfChar();
			system("pause");
			break;
		}
	}
}