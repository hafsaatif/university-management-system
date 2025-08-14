//CLASS STUDENT
#ifndef student_H
#define student_H
#include <iostream>
#include "transcript.h"
#include "feedback.h"
using namespace std;
	class student :public transcript ,public feedback{
		public:
			void getdata()
		{
		cout<<"Enter name: ";
			cin>>name;	
		cout<<"Enter father name: ";
			cin>>fname;		
		cout<<"Enter Registration No.:";
			cin>>registrationNo;
		cout<<"Enter User ID :";
			cin>>password;
		cout<<"Enter Department : ";
			 cin>>department;
		cout<<"Enter date of birth in the form DD-MM-YYYY: ";
			cin>>birth;
		cout<<"Enter contact : ";
			cin>>contact;
	}
		void show_data(){
		cout<<"  Name: ";
			cout<<admin::name<<endl;	
		cout<<"  Father Name: ";
			cout<<admin::fname<<endl;		
		cout<<"  Registration No.:";
			cout<<admin::registrationNo<<endl;
		cout<<"  User ID :";
			cout<<admin::password<<endl;
		cout<<"  Department : ";
			 cout<<admin::department<<endl;
		cout<<"  Date of Birth : ";
			cout<<admin::birth<<endl;
		cout<<"  Contact : ";
			cout<<admin::contact<<endl;			
			}
	};
#endif
