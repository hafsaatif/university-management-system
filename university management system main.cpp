#include<iostream>
#include<string>
#include "admin.h"
#include "teacher.h"
#include "calculation.h"
#include "grades.h"
#include "evaluation.h"
#include "feedback.h"
#include "transcript.h"
#include "calender.h"
#include "student.h"
#include "outline.h"
using namespace std;
int main(){	
    cout << "o                     o                     ooooooooooo                  oooooooooooo" << endl;
    cout << "o                     o                    o                             o           o" << endl;
    cout << "o                     o                   o                              o            o" << endl;
    cout << "o                     o                  o                               o             o" << endl;
    cout << "o                     o                 o                                o              o" << endl;
    cout << "o                     o                o                                 o             o" << endl;
    cout << "o                     o               o                                  o            o" << endl;
    cout << "o                     o               o                                  o           o" << endl;
    cout << "o                     o               o                                  oooooooooooo" << endl;
    cout << "o                     o               o                                  o" << endl;
    cout << "o                     o                o                                 o" << endl;
    cout << "o                     o                 o                                o" << endl;
    cout << "o                     o                  o                               o" << endl;
    cout << " o                   o                    o                              o" << endl;
    cout << "  o                 o                      o                             o" << endl;
    cout << "   ooooooooooooooooo                        oooooooooooo                 o" << endl;
	char enter_choice;
	cout<<"                                  \n  UNIVERSITY MANAGEMENT SYSTEM\n";
			int teachersNo;
			cout<<"enter number of teachers :";
			cin>>teachersNo;				 
			int studentNo;
			cout<<"enter number of students : ";
			cin>>studentNo;
            admin* users[teachersNo + studentNo];
			feedback *ptrf[studentNo];							
			char c;
			string teacherPassword[teachersNo];
			string studentPassword[studentNo];
			string tpassword,spassword;		
	do{	
	int a;			
	cout<<"1.Admin\n2.Teacher\n3.Student\n";
	cin>>a;
	switch(a){	
		case 1:
			cout<<"    =================\n";
			cout<<"    | Welcome Admin |\n";
			cout<<"    =================\n";
			int b;
	    cout<<"1. Teacher Data\n2. Student Data\n";
	    cin>>b;
	    cout<<"---------------------------------------------------------------------------------------------------------------------\n";
	    switch(b){		
		case 1:{		
				for(int i=0;i<teachersNo;i++){				
					users[i]=new teacher;
					cout<<"Enter " << i+1 <<" Teacher Data"<<endl;
					users[i]->getdata();
					teacherPassword[i]=users[i]->password;
		     	    cout<<"---------------------------------------------------------------------------------------------------------------------\n";				
				}
					break;			
				}	
			break;			
		case 2:{
				for(int i=0;i<studentNo;i++){ 			
					users[teachersNo+i]=new student;
					cout<<"---------------------------------------------------------------------------------------------------------------------\n";
					cout<<"Enter " <<i <<" student Data"<<endl;
					users[teachersNo+i]->getdata();
					studentPassword[i]=users[teachersNo+i]->password;
	   			    cout<<"---------------------------------------------------------------------------------------------------------------------\n";
					}
				}
					break;
			}
				break;
					 
		case 2:{
			cout<<"    =================\n";
			cout<<"    |Welcome Teacher |\n";
			cout<<"    =================\n";
	cout<<"Enter User Id ";
	cin>>tpassword;
			for(int i=0;i<teachersNo;i++){
		if(tpassword==teacherPassword[i]){
			cout<<"1.Profile\n2.Enter Marks\n";
			int tchoice;
			cin>>tchoice;
			switch(tchoice){
				case 1:{			
					users[i]->show_data();
					break;
				}
				break;
			case 2:{
				cout<<"| enter marks  |"<<endl;
				for(int j=0;j<studentNo;j++){				
				cout<<"---------------------------------------------------------------------------------------------------------------------\n";
				cout<<"Enter marks of "<<j+1<<" student\n";			
			    users[teachersNo+j]->input_marks();
			    users[teachersNo+j]->calculate();
			    users[teachersNo+j]->grades();
				cout<<endl<<"--------------";
				cout<<"| ATTENDANCE |";
				cout<<"--------------";
				users[teachersNo+j]->attendance();
				cout<<"---------------------------------------------------------------------------------------------------------------------\n";
			}
					
				break;
				}
				break;		
			}
			}
			}			
			break;
			}
		case 3:{
		     	cout<<"    ==================\n";
				cout<<"    |Welcome Student |\n";
				cout<<"    ==================\n";
		cout<<"Enter User Id ;";
	cin>>spassword;
			for(int i=0;i<studentNo;i++){
	if(spassword==studentPassword[i]){
			int stchoice;
				cout<<"1.Profile\n2.Marks\n3.Transcript \n4.Outline \n5.Feedback.\n6.academic calender"<<endl;				
				cin>>stchoice;
				switch(stchoice){
				case 1:{			
				users[teachersNo+i]->show_data();
					break;
				}
				case 2:{
					users[teachersNo+i]->showmarks();
					break;
				}
				case 3:{				
					users[teachersNo+i]->trans();
					break;
				}
				case 4:{
					outline *ptroutline;
					ptroutline = new outline;
					ptroutline->student_outline();
					delete ptroutline;
					break;
					
				}
				case 5:{
					ptrf[i]=new student;
					ptrf[i]->giveFeedback();
					break;
				}
				case 6:{
					calender *ptrCalender;
					ptrCalender=new calender;
					ptrCalender->academiCalender();
					delete ptrCalender;
					break;
				}
					case 7:{
						evaluation *eptr;
						eptr=new evaluation;
						eptr->marksEvaluation();
						delete eptr;
						break;
					}
	
		}

				break;
		}
		}
		}
		}
	cout<<"\nEnter 'e' to Exit\nAny other key to Continue\n";
	cin>>c;
		}while(c!='e');
		}