#include <iostream>
#include <time.h>
#include <locale>
#include <Windows.h>

using namespace std;

class Pet {
public:
	double weight, age, food;
	string name, color;
	virtual void setName() = 0;
	virtual void setColor() = 0;
	virtual void setAge() = 0;
	virtual void setWeight() = 0;
	virtual void setFood() = 0;
	virtual void Show() = 0;
	virtual void setParameter() = 0;
	double getWeight() {
		return weight;
	}
	double getAge() {
		return age;
	}
	string getName() {
		return name;
	}
	string getColor() {
		return color;
	}
};

class Dog : public Pet {
public:
	string breed;
	void setParameter() {
		cout << "Введите породу собаки: ";
		cin >> breed;
	}
	virtual void setFood() {
		food = 10 + rand() % 100;
	}
	virtual void setName() {
		cout << "Введите имя собаки:";
		cin >> name;
	}
	virtual void setColor() {
		cout << "Введите цвет собаки:";
		cin >> color;
	}
	virtual void setAge() {
		cout << "Введите возраст собаки:";
		cin >> age;
	}
	virtual void setWeight() {
		weight = food * 0.1 * 3;
	}
	virtual void Show() {
		cout << name << " \t " << age << " \t\t " << weight << "\t " << color << "\t" << breed << endl;
	}
};

class Cat : public Pet {
	string species;
	void setParameter() {
		cout << "Введите породу кота:";
		cin >> species;
	}
	virtual void setFood() {
		food = 10 + rand() % 100;
	}
	virtual void setName() {
		cout << "Введите имя кота:";
		cin >> name;
	}
	virtual void setColor() {
		cout << "Введите цвет кота:";
		cin >> color;
	}
	virtual void setAge() {
		cout << "Введите возраст кота:";
		cin >> age;
	}
	virtual void setWeight() {
		weight = food * 0.1 * 1;
	}
	virtual void Show() {
		cout << name << " \t " << age << " \t\t " << weight << "\t " << color << "\t" << species << endl;
	}
};

class Parrot : public Pet {
	string race;
	void setParameter() {
		cout << "Введите породу попугая:";
		cin >> race;
	}
	virtual void setFood() {
		food = 10 + rand() % 100;
	}
	virtual void setName() {
		cout << "Введите имя попугая:";
		cin >> name;
	}
	virtual void setColor() {
		cout << "Введите цвет попугая:";
		cin >> color;
	}
	virtual void setAge() {
		cout << "Введите возраст попугая:";
		cin >> age;
	}
	virtual void setWeight() {
		weight = food * 0.1 * 0.5;
	}
	virtual void Show() {
		cout << name << " \t " << age << " \t\t " << weight << "\t " << color << "\t" << race << endl;
	}
};

class Snake : public Pet {
	double length;
	string poison;
	void setParameter() {
		cout << "Введите размер змеи:";
		cin >> length;
		cout << "Наличие яда:";
		cin >> poison;
	}
	virtual void setFood() {
		food = 10 + rand() % 100;
	}
	virtual void setName() {
		cout << "Введите имя змеи:";
		cin >> name;
	}
	virtual void setColor() {
		cout << "Введите цвет змеи:";
		cin >> color;
	}
	virtual void setAge() {
		cout << "Введите возраст змеи:";
		cin >> age;
	}
	virtual void setWeight() {
		weight = food * 0.1 * 0.45;
	}
	virtual void Show() {
		cout << name << " \t " << age << " \t\t " << weight << "\t " << color << "\t" << length << "\t" << poison <<  endl;
	}
};

class Turtle : public Pet {
	double PzKpfwAusfE100;
	void setParameter() {
		cout << "Введите размер панциря черепахи:";
		cin >> PzKpfwAusfE100;
	}
	virtual void setFood() {
		food = 10 + rand() % 100;
	}
	virtual void setName() {
		cout << "Введите имя черепахи:";
		cin >> name;
	}
	virtual void setColor() {
	}
	virtual void setAge() {
		cout << "Введите возраст черепахи:";
		cin >> age;
	}
	virtual void setWeight() {
		weight = food * 0.1 * 0.7;
	}
	virtual void Show() {
		cout << name << "\t" << age << "\t\t" << weight << "\t" << PzKpfwAusfE100 << endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned int)time(NULL));
	int NumberOfDog, NumberOfCat, NumberOfParrot, NumberOfSnake, NumberOfTurtle, num;
	cout << "Количество собак = ";
	cin >> NumberOfDog;
	cout << "Количество котов = ";
	cin >> NumberOfCat;
	cout << "Количество попугаев = ";
	cin >> NumberOfParrot;
	cout << "Количество змей = ";
	cin >> NumberOfSnake;
	cout << "Количество черепах = ";
	cin >> NumberOfTurtle;
	num = NumberOfDog + NumberOfCat + NumberOfParrot + NumberOfSnake + NumberOfTurtle;
	Pet** pets = new Pet * [num];
	for (int i = 0; i < NumberOfDog; i++)
	{
		pets[i] = new Dog;
		pets[i]->setName();
		pets[i]->setAge();
		pets[i]->setColor();
		pets[i]->setFood();
		pets[i]->setWeight();
		pets[i]->setParameter();
	}
	for (int i = NumberOfDog;  i < NumberOfDog + NumberOfCat; i++)
	{
		pets[i] = new Cat;
		pets[i]->setName();
		pets[i]->setAge();
		pets[i]->setColor();
		pets[i]->setFood();
		pets[i]->setWeight();
		pets[i]->setParameter();
	}
	for (int i = NumberOfDog + NumberOfCat; i < NumberOfDog + NumberOfCat + NumberOfParrot; i++)
	{
		pets[i] = new Parrot;
		pets[i]->setName();
		pets[i]->setAge();
		pets[i]->setColor();
		pets[i]->setFood();
		pets[i]->setWeight();
		pets[i]->setParameter();
	}
	for (int i = NumberOfDog + NumberOfCat + NumberOfParrot; i < NumberOfDog + NumberOfCat + NumberOfParrot + NumberOfSnake; i++)
	{
		pets[i] = new Snake;
		pets[i]->setName();
		pets[i]->setAge();
		pets[i]->setColor();
		pets[i]->setFood();
		pets[i]->setWeight();
		pets[i]->setParameter();
	}
	for (int i = NumberOfDog + NumberOfCat + NumberOfParrot + NumberOfSnake; i < NumberOfDog + NumberOfCat + NumberOfParrot + NumberOfSnake + NumberOfTurtle; i++)
	{
		pets[i] = new Turtle;
		pets[i]->setName();
		pets[i]->setAge();
		pets[i]->setColor();
		pets[i]->setFood();
		pets[i]->setWeight();
		pets[i]->setParameter();
	}
	for (int i = 0; i < NumberOfDog; i++)
	{
		cout << "====================== Собаки ======================" << endl;
		cout << "Имя \t Возраст \t Вес \t Цвет \t Порода " << endl;
		pets[i]->Show();
	}
	for (int i = NumberOfDog; i < NumberOfDog + NumberOfCat; i++)
	{
		cout << "====================== Коты ========================" << endl;
		cout << "Имя \t Возраст \t Вес \t Цвет \t Порода " << endl;
		pets[i]->Show();
	}
	for (int i = NumberOfDog + NumberOfCat; i < num - NumberOfTurtle - NumberOfSnake; i++)
	{
		cout << "====================== Попугаи ======================"<< endl;
		cout << "Имя \t Возраст \t Вес \t Цвет \t Порода " << endl;
		pets[i]->Show();
	}
	for (int i = num - NumberOfTurtle - NumberOfSnake; i < num - NumberOfTurtle; i++)
	{
		cout << "======================= Змеи ========================"<<endl;
		cout << "Имя \t Возраст \t Вес \t Цвет \t Длина(м) \t Яд" << endl;
		pets[i]->Show();
	}
	for (int i = num - NumberOfTurtle; i < num; i++)
	{
		cout << "===================== Черепахи ======================"<<endl;
		cout << "Имя \t Возраст \t Вес \t Панцирь(м^2)" << endl;
		pets[i]->Show();
	}
}