#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public :
		int id;
		char name[100];
		int age;
		int std;
	
	Student(int n1,char n2[],int n3,int n4)
	{
	    this->age =n1;
	    strcpy(this->name,n2);
	    this->age =n3;
	    this->std =n4;
	
	}
	void getdata()
	{
		cout<<"Id ="<<this->id<<endl
		<<"Name ="<<this->name<<endl
		<<"Age ="<<this->age<<endl
		<<"Sandred ="<<this->std<<endl;
		cout<<endl;
	}
};
main()
{
	Student s1(1,"Mahi",15,9);
	s1.getdata();
	Student s2(2,"Vidhi",17,12);
	s2.getdata();
}
