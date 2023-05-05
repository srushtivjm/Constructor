#include<iostream>
using namespace std;
class 	Points
{
	public :
		int p1,p2;
		
		Points(int n1,int n2)
		{
			this->p1 =n1;
			this->p2 =n2;
			getdata();
		}
		void getdata()
		{
			cout<<this->p1<<" "<<this->p2<<endl;
		}
		Points(Points &n)
	    {
			this->p1=n.p1;
			this->p2=n.p2;
			print();
		}
		void print()
		{
			cout<<this->p1<<" "<<this->p2<<endl;
		}
};
main()
{
	Points o1(30,60);
	Points o2(40,50);
	Points o3(o1);
	Points o4(o2);
	
}
