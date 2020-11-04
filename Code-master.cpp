#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class fin
{
public:
	virtual void option() 
	{

	}
	
};

class sum :public fin
{
private:
	int x;
	int y;
public:
	sum(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void option() override
	{
		int c = x + y;
		cout << x << "+" << y << "=" << c << endl;
	}

};

class dif :public fin
{
private:
	int x;
	int y;
public:
	dif(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void option() override
	{
		int c = x - y;
		cout << x << "-" << y << "=" << c << endl;
	}

};

class ymn :public fin
{
	private:
	int x;
	int y;

	public:
	ymn(int x, int y)
	{
	this->x=x;
	this->y=y;
	}

	void option() override
	{
	int c = x * y;
	cout<<x<<" * "<<y<<" = "<<c<<endl;
	}
};

class povv :public fin
{
	private:
	int x;
	int y;

	public:
	povv(int x, int y)
	{
	this->x=x;
	this->y=y;
	}

	void option() override
	{
		int c=pow(x,y);
		cout<<x<<" в степени "<<y<<" = "<<c<<endl;
	}

};


class Print :public fin
{
public:
	void display(fin* foo)
	{
		foo->option();
	}
};

int main()
{
	
	int a;
	int x,y;

	cout<<"Введите два числа"<<endl;
	cin>>x>>y;
	sum sum(x,y);
	dif dif(x,y);
	ymn ymn(x,y);
	povv povv(x,y);
	Print var;
	cout<<"Главное меню:\n1.Сложение\n2.Вычитание\n3.Умножение\n4.Возведение в степень"<<endl;
	cin>>a;
	switch (a)
	{
		case 1:
		var.display(&sum);
		break;
		
		case 2:
		var.display(&dif);
		break;

		case 3:
		var.display(&ymn);

		case 4:
		var.display(&povv);
		break;


		default:
		cout<<"Ошибка,вы вышли из поограммы"<<endl;
		
	}

	return 0;
}
