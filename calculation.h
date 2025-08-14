//CLASS CALCULATION
#ifndef calculation_H
#define calculation_H
#include <iostream>
#include "teacher.h"
using namespace std;
	class calculation : public teacher{
		protected:
			float sum,afinal,amid;			
		public:	
			void calculate(){			
				aveAssignment=(aveAssignment/20)*10;
				aveQuiz=(aveQuiz/20)*10;
				afinal=(final/100)*40;
				amid=(mid/75)*30;
				sum=aveAssignment+aveQuiz+mid+final+project;				
			}	
};
#endif
