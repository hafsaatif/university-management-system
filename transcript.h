//CLASS TRANSCRIPT
#ifndef transcript_H
#define transcript_H
#include <iostream>
#include "grades.h"
using namespace std;
	class transcript:public grade{
		public:
			void trans(){	
			cout<<"Grade is : "<<grade<<endl<<"GPA is :"<<gpa;			
				}
	};
#endif
