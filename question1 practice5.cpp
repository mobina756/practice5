#include <iostream>
using namespace std;
int main() { 
double salary,taxrate,finalsalary;
cout<<"enter the salary:";
cin>>salary;
if(salary<6000000){
	taxrate=0;
	}else if(salary<8000000){
		taxrate=0.05;
		}else if(salary<10000000){ 
		taxrate=0.1;
		}else if(salary<14000000){
			taxrate=0.15;
			}else if(salary>18000000){ 
			taxrate=0.20;
			}else if(salary>25000000){ 
			taxrate=0.25;
			}else{
				taxrate=0.35;
	} 
	finalsalary=salary-(salary*taxrate);
	cout<<"final salary after tax deduction:"<<finalsalary<<endl;
	return 0;
}