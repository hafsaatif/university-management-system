//CLASS TEACHER
#ifndef teacher_H
#define teacher_H
#include <iostream>
#include "admin.h"
using namespace std;
class teacher:public admin{
	protected:
		
		float quiz[2],assignment[2],mid,final,project;
		float aveQuiz=0,aveAssignment=0;
		int studentAttendance;
		public:
			virtual void calculate(){};
			virtual void grades(){};
			virtual void trans(){};
			void getdata(){
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
			
	void attendance(){
			cout<<endl<<"total lectures 36  ";
			cout<<"Lectures Attended ";
			cin>>studentAttendance;
}
	void input_marks(){		
				cout<<"Enter Marks:"<<endl;
				for(int i=1;i<3;i++){
				cout<<" Quiz "<<i<<endl<<"total marks   10  Obtained marks:   ";
				cin>>quiz[i];
				aveQuiz+=quiz[i];	
				}				
				for(int i=1;i<3;i++){
				cout<<"Assignment "<<i<<endl<<"total marks   10 Obtained marks:   ";
				cin>>assignment[i];
				aveAssignment+=assignment[i];
				}
				cout<<"Mid term "<<endl<<"total marks   75 Obtained marks:   ";
				cin>>mid;
				cout<<"Final "<<endl<<"total marks   100 Obtained marks:   ";
				cin>>final;
				cout<<"Project "<<endl<<"total marks   10 Obtained marks:   ";
				cin>>project;
			}
	void show_data(){		
				cout<<"  Name: ";
					cout<<name<<endl;	
				cout<<"  Father Name: ";
					cout<<fname<<endl;		
				cout<<"  Registration No.:";
					cout<<registrationNo<<endl;
				cout<<"  User ID :";
					cout<<password<<endl;
				cout<<"  Department : ";
					 cout<<department<<endl;
				cout<<"  Date of Birth : ";
					cout<<birth<<endl;
				cout<<"  Contact : ";
					cout<<contact<<endl;
			}
				void showmarks(){
				cout<<"Enter Marks:"<<endl;
				for(int i=1;i<3;i++){
				cout<<" Quiz "<<i<<endl<<"total marks   10\n Obtained marks   ";
				cout<<quiz[i]<<endl;				
				}				
				for(int i=1;i<3;i++){
				cout<<"Assignment "<<i<<endl<<"total marks   10\n Obtained marks   ";
				cout<<assignment[i]<<endl;					
				}
				cout<<"Mid term "<<endl<<"total marks   75\n Obtained marks   ";
				cout<<mid<<endl;
				cout<<"Final "<<endl<<"total marks   100\n Obtained marks   ";
				cout<<final<<endl;
				cout<<"Project "<<endl<<"total marks   10\n Obtained marks   ";
				cout<<project<<endl;					
					}
				};	
#endif
