//CLASS FEEDBACK
#ifndef feedback_H
#define feedback_H
#include <iostream>
using namespace std;
class  feedback{
	protected:
		int rating[5],i=0;
		string subject[5]={"OOP","COAL","Discrete Structures","Pak Studies","Multivariate Calculus"};
		string comment;
	public:
		void giveFeedback(){
		cout<<"*"<<endl;
		cout<<"1.Excellent \n2.Good \n 3.Satisfied \n 4.not satisfied\n";
			cout<<"*"<<endl;
		for (int j=0;j<5;j++){
			cout<<""<<endl;
			cout<<"| subject :       |                "<<subject[j]<<endl;
			cout<<""<<endl<<endl;
	cout<<"QUESTIONS                                                    "<<endl;
	cout<<"*"<<endl;
	 cout<<"Do you understand the lecture :                    ";
	 cin>>rating[i];
	 i++;
	 cout<<"How is the techer's lecture prepartion :                      ";
	 cin>>rating[i];
	 i++;
	 cout<<"Does your teacher cover all the course outlines  :            ";
	 cin>>rating[i];
	 i++;
	 cout<<"Does yor teacher timely inform you about the quiz assignment :";
	 cin>>rating[i];
	 i++;
	 cout<<"Does your teacher answer the questions :                     ";
	 cin>>rating[i];
	 i++;
	}
	cout<<"comments:"<<endl;
	getline(cin,comment);
	}
	};
	#endif
