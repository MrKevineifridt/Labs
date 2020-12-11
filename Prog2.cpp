#include <iostream>
#include <windows.h>

using namespace std;


class SetofInt{
private:
	int size;
	int *set;
public:

	SetofInt();
	SetofInt(int);
	SetofInt(int,int*);
	SetofInt(const SetofInt &obg);

	SetofInt & operator= (const SetofInt &obg){
		if (this != &obg) {
			delete[] set;
			size = obg.size;
			set = new int[size];
			for (int i = 0; i < size; i++) {
				set[i] = obg.set[i];
			}
			}
		else {
			}
		return *this;

	}
	
	int & operator[](int index){
		if(index<=size && index>=0)
			return set[index-1];
		else exit(0);
	}
	
	SetofInt operator+(const SetofInt test) {
		if(this->size >= test.size){

		SetofInt temp(this->size);
		for(int i=0;i<test.size;i++)
			temp.set[i]=this->set[i]+test.set[i];
		for(int i=test.size;i<temp.size;i++)
			temp.set[i]=this->set[i];
		return SetofInt(temp.size,temp.set);
		}
		else if(this->size < test.size){

		SetofInt temp(test.size);
		for(int i=0;i<=this->size;i++)
			temp.set[i]=this->set[i]+test.set[i];
		for(int i=this->size;i<temp.size;i++)
			temp.set[i]=test.set[i];
		return SetofInt(temp.size,temp.set);
		}

	}

	SetofInt operator-(const SetofInt test) {
		if(this->size >= test.size){

		SetofInt temp(this->size);
		for(int i=0;i<test.size;i++)
			temp.set[i]=this->set[i]-test.set[i];
		for(int i=test.size;i<temp.size;i++)
			temp.set[i]=this->set[i];
		return SetofInt(temp.size,temp.set);
		}
		else if(this->size < test.size){

		SetofInt temp(test.size);
		for(int i=0;i<=this->size;i++)
			temp.set[i]=this->set[i]-test.set[i];
		for(int i=this->size;i<temp.size;i++)
			temp.set[i]=-test.set[i];
		return SetofInt(temp.size,temp.set);
		}
	}

	SetofInt operator*(const SetofInt test){
		int firstcount=0,c=0;
	if(this->size>=test.size){
		for(int j=0;j<test.size;j++)
			for(int i=0;i<this->size;i++)
				if(this->set[i]==test.set[j]){firstcount++;j++;i=0;};
		if(!firstcount){cout<<"Пересечение пусто !\n";return SetofInt(1);}
		else{
		SetofInt temp(firstcount);
		for(int j=0;j<test.size;j++)
			for(int i=0;i<this->size;i++)
				if(this->set[i]==test.set[j]){temp.set[c++]=test.set[j];j++;i=0;};
		
		return SetofInt(temp.size,temp.set);
		}
		}
	else{
		firstcount=0,c=0;
		for(int i=0;i<this->size;i++)
			for(int j=0;j<test.size;j++)
				if(this->set[i]==test.set[j]){firstcount++;i++;j=0;};
		if(!firstcount){cout<<"Пересечение пусто !\n";return SetofInt(1);}
		else{
		SetofInt temp(firstcount);
		for(int i=0;i<this->size;i++)
			for(int j=0;j<test.size;j++)
				if(this->set[i]==test.set[j]){temp.set[c++]=this->set[i];i++;j=0;};
		
		return SetofInt(temp.size,temp.set);
		}
	}
	}

	void show();
	bool isa(int);
	bool isai(int,SetofInt);
	bool isas(int,SetofInt);
	bool isad(int,SetofInt);
	int getsize(){return size;}
	friend SetofInt getset(SetofInt,SetofInt);
	friend void show(SetofInt *A,int size);
	~SetofInt();
};

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int count=0,v=0,num=0;
	do{
		cout<<"Для начала работы введите кол-во объектов числового множества: ";cin>>num;
		if(!cin) {cout<<"Выход из программы\n";system("pause"); exit(1);}
		if(num<2)cout<<"Число объектов множества не должно быть <2!\n";
	}while(num<2);
		cout<<"\nТеперь заполните данные о каждом числовом множестве :\n";
		SetofInt *obg = new SetofInt[num],A(1);
	do{
		system("cls");
		cout<<"Работа с прототипом\n"
		<<"Выберите нужный вам пункт взаимодействия:\n"
		<<"1 - проверить принадлежность числа нужному нам множеству\n"
		<<"2 - проверить перегрузку нужной операции\n"
		<<"3 - построить множество по формуле (A+B)-(A*B)\n"
		<<"4 - показать ваши множества\n"
		<<"любой другой символ - выход из программы\n";
		cout<<"Напишите ваш выбор:";cin>>v;

		int n=0,temp1,temp2,v1=0,count1=0,i=0;
		switch(v)
		{
		case 1:
			system("cls");
			do{
			cout<<"Введите нужное число на проверку: ";cin>>n;count1=1;
			cout<<"Введите номера объектов от 1 до "<<num<<" :";cin>>temp1>>temp2;
			if(!(temp1>=1 && temp1<=num && temp2>=1 && temp2<=num)){cout<<"Неверный номер множества! Выход в главное меню!\n";break;}
			cout<<"Теперь выберите нужную проверку :\n"
				<<"1 - принадлежность элемента данным множествам (по отдельности)\n"
				<<"2 - принадлежность элемента пересечению множеств\n"
				<<"3 - принадлежность элемента объединению множеств\n"
				<<"4 - принадлежность элемента разности множеств\n"
				<<"любой другой символ - выход из проверки\n";
			cout<<"Напишите ваш выбор:";cin>>v1;
			switch(v1)
			{
			case 1: 
				{if(obg[temp1-1].isa(n))
					cout<<"Элемент принадлежит 1 заданному множеству!\n";
				else cout<<"Элемент не принадлежит заданному множеству!\n";}
				{if(obg[temp2-1].isa(n))
					cout<<"Элемент принадлежит 2 заданному множеству!\n";
				else cout<<"Элемент не принадлежит заданному множеству!\n";}
				break;
			case 2: if(obg[temp1-1].isai(n,obg[temp2-1]))
						cout<<"Элемент принадлежит заданному множеству!\n";
					else cout<<"Элемент не принадлежит заданному множеству!\n";
					break;
			case 3: if(obg[temp1-1].isas(n,obg[temp2-1]))
						cout<<"Элемент принадлежит заданному множеству!\n";
					else cout<<"Элемент не принадлежит заданному множеству!\n";
					break;
			case 4: if(obg[temp1-1].isad(n,obg[temp2-1]))
						cout<<"Элемент принадлежит заданному множеству!\n";
					else cout<<"Элемент не принадлежит заданному множеству!\n";
					break;
			default : count1=0;

			}
			system("pause");system("cls");
			}while(count1);
			count=1;
			break;
		case 2:
		do{
		system("cls");
		cout<<"Введите номера объектов от 1 до "<<num<<" :";cin>>temp1>>temp2;
		if(!(temp1>=1 && temp1<=num && temp2>=1 && temp2<=num)){cout<<"Неверный номер множества! Выход в главное меню!\n";break;}
		cout<<"Теперь выберите нужную проверку :\n"
				<<"1 - построение поэлементной суммы множеств\n"
				<<"2 - построение поэлементной разности множеств\n"
				<<"3 - построение пересечения множеств\n"
				<<"4 - индексация множества\n"
				<<"любой другой символ - выход из проверки\n";
		cout<<"Напишите ваш выбор:";cin>>v1;
		count1=1;n=0;
		switch(v1){
		case 1:
			A=obg[temp1-1]+obg[temp2-1];A.show();
			system("pause");break;
		case 2:
			A=obg[temp1-1]-obg[temp2-1];A.show();
			system("pause");break;
		case 3:
			A=obg[temp1-1]*obg[temp2-1];A.show();
			system("pause");break;
		case 4:
			cout<<"Введите позицию и номер выбранного объекта (через пробел): ";cin>>i>>n;
			if(n!=temp1 && n!=temp2){cout<<"Неверный номер объекта! Выход в главное меню!\n";system("pause");break;}
			if(i>obg[n-1].getsize()){cout<<"Неверная позиция множества! Выход в главное меню!\n";system("pause");break;}
			cout<<"Ваш элемент: "<<obg[n-1][i]<<endl;
			system("pause");break;
		default: count1=0;
		}
		}while(count1);count=1;
		system("pause");break;
		case 3:
		system("cls");
		cout<<"Введите номера объектов от 1 до "<<num<<" :";cin>>temp1>>temp2;count=1;
		if(!(temp1>=1 && temp1<=num && temp2>=1 && temp2<=num)){cout<<"Неверный номер множества! Выход в главное меню!\n";system("pause");break;}
		A=getset(obg[temp1-1],obg[temp2-1]);A.show();
		system("pause");break;
		case 4:
			system("cls");show(obg,num);
			count=1;system("pause");break;
		default :
			cout<<"Выход из программы!\n";
			count=0;
		}
	} while (count);
	delete []obg;
	system("pause");
    return 0;
}
SetofInt::SetofInt(){
	cout<<"Введите размер массива чисел:";cin>>size;
	if(!cin) {cout<<"Выход из программы\n";system("pause"); exit(1);}
	if(!size) exit(1);
	else
	{set = new int[size];
	cout<<"Введите элементы числового массива: ";
	for(int i=0;i<size;i++)
	{cin>>set[i];if(!cin) {cout<<"Выход из программы\n";system("pause"); exit(1);}}}
}
SetofInt::SetofInt(int siz){
	size=siz;
	set=new int[siz];
	if(!set)exit(1);
	for(int i = 0; i < size; i++)
        {
            set[i] = 0;
        }
}
SetofInt::SetofInt(const SetofInt &obg){
	size = obg.size;
		set = new int[size];
		for (int i = 0; i < size; i++) {
			set[i] = obg.set[i];
		}

}
SetofInt::SetofInt(int si,int*se)
{
	size=si;
	set=new int[si];
	if(!set)exit(1);
	for(int i = 0; i < size; i++)
        {
            set[i] = se[i];
        }

}
SetofInt::~SetofInt(){
	delete []set;
}
void SetofInt::show(){
	if(!set) cout<<"множество пусто!\n";
	else{
	cout<<"Ваш массив :\n";
	for(int i=0;i<size-1;i++)
		cout<<set[i]<<" ";
	cout<<set[size-1]<<endl;}
}
bool SetofInt::isa(int n){
	bool counter=0;
	for(int i=0;i<this->size;i++)
		if(this->set[i]==n)counter = 1;
	return counter;
}
bool SetofInt::isai(int n, SetofInt obg){
	SetofInt temp(1);
	temp=*this*obg;
	if(temp.isa(n)) return 1;
	else return 0;
}
bool SetofInt::isas(int n, SetofInt obg){
	SetofInt temp(this->size+obg.size);
	bool counter=0;int c=this->size;
	for(int i=0;i<this->size;i++)
		temp.set[i]=this->set[i];
	for(int j=0;j<obg.size;j++)
		temp.set[c++]=obg.set[j];
	if(temp.isa(n)) return 1;
	else return 0;
}
bool SetofInt::isad(int n, SetofInt obg){
	int count = 0,c=0;SetofInt temp(this->size);
		for(int i=0;i<this->size;i++){
			count=0;
			for(int j=0;j<obg.size;j++)
				if(this->set[i]==obg.set[j]){count=1;}
			if(count==0)temp.set[c++]=this->set[i];
		}
		if(temp.isa(n))return 1;
		else return 0;
}
SetofInt getset(SetofInt A, SetofInt B){
	SetofInt temp1(A.size+B.size),temp2(1),temp3(A.size+B.size);
	int count=0,si=0;
	temp2=A*B;
	int c=A.size;
	for(int i=0;i<A.size;i++)
		temp1.set[i]=A.set[i];
	for(int j=0;j<B.size;j++)
		temp1.set[c++]=B.set[j];
	c=0;
	for(int i=0;i<temp1.size;i++){
		count=0;
		for(int j=0;j<temp2.size;j++)
			if(temp1.set[i]==temp2.set[j]){count=1;}
		if(count==0){temp3.set[c++]=temp1.set[i];si++;}
		}
	if(si) return SetofInt(si,temp3.set);
	else return SetofInt(1);
}
void show(SetofInt *A,int size){
	for (int i=0;i<size;i++){
		cout<<"Множество №"<<i+1<<" :\n";
		for(int j=0;j<A[i].size-1;j++)
			cout<<A[i].set[j]<<" ";
		cout<<A[i].set[A[i].size-1]<<endl;
	}
}