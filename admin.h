//CLASS ADMIN
#ifndef admin_H
#define admin_H
#include <iostream>
using namespace std;
class admin{
	protected:
		int n;
	string pass;
string name,registrationNo,fname,department,birth,contact;	
	public:
		string password;
			virtual void attendance()=0;
			virtual void input_marks()=0;
			virtual void calculate()=0;
			virtual void grades()=0;
			virtual void trans()=0;
			virtual void showmarks()=0;
	virtual	void getdata()=0;
	virtual	void show_data()=0;			
};
#endif
