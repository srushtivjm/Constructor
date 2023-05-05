#include<iostream>
using namespace std;
class Student
{
	public :
		int id;
		char name[100];
		int age;
	
	Student()
	{
		cout<<"Enter Id =";
		cin>>id;
		cout<<"Enter name =";
		cin>>name;
		cout<<"Enter age =";
		cin>>age;
		cout<<"-------------------"<<endl;
		getdata();
	}
	void getdata()
	{
		cout<<"Id ="<<id<<endl
		<<"Name ="<<name<<endl
		<<"Age ="<<age;
	}
};

main()
{
	Student();
}
