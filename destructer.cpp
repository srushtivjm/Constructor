#include<iostream>
using namespace std;
class Points 
	{
		public :
		Points()
		{
		cout<<"Welcome "<<endl;
	    }
	    ~Points()
	    {
	    	cout<<"Thank you,visit again"<<endl;
		}
		void getdata()
		{
			cout<<"How are you"<<endl;
		}
	};
main()
{
	Points p1;
	p1.getdata();
}
