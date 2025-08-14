//CLASS GRADES
#ifndef grades_H
#define grades_H
#include <iostream>
#include "calculation.h"
using namespace std;
class grade:public calculation{
	protected:
		string grade;
		float gpa;
	public:
		void grades(){
			if(sum >=84 ){
			
				 grade= "A";
				 gpa=4;
			}
			else if(sum <84 && sum>=80 ){
			
				  grade="A-";
				  	 gpa=3.97;
				  }
			else if(sum >=75 && sum <=79 ){
			
				grade= "B";
					 gpa=3.5;
				}
			else if(sum >=70 && sum<=74 ){
			
				 grade= "B-";
				 	 gpa=3.33;
				 }
		 	else if(sum >=65 && sum<=69 ){
			 
				 grade= "C";
				 	 gpa=3.20;
				 }
		 	else if(sum >=60 && sum<=64 ){
			 
				 grade= "C-";
				 	 gpa=2.7;
				 }
		 	else if(sum >=55 && sum<=59 ){
			 
				 grade= "D";
				 	 gpa=2.5;
				 }
	    	else if(sum >=50 && sum<=54 ){
			
				 grade= "D-";
				 	 gpa=2.20;
				 	 }
			else{
			
			     grade= "F";
				 	 gpa=2;
				}			 
			}			
};
#endif
