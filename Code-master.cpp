#include <iostream>
#include <string>

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

class interest :public fin
{
private:
	int x;
	int y;
public:
	interest(int x, int y)
	{
		this->x = x;
		this->y = y;
	}


void option() override
	{
		int c = x % y;
		cout << x << "/" << y << "=" << c << endl;
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
	sum sum(7,5);
	interest interest(79,34);
	Print v1;
	v1.display(&sum);
	v1.display(&interest);
	return 0;
}
