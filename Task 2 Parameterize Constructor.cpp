//WAP in c++ to enter student details by passing parameterize constructor.
#include<iostream>
using namespace std;
class details{
	public:
		int id,age;
		string name;
		details(int rollNo, string sname,int age1){
			id=rollNo;
			name=sname;
			age=age1;
		}
		void display(){
			cout<<"Student Roll No ="<<id<<endl;
			cout<<"Student Name ="<<name<<endl;
			cout<<"Student Age ="<<age<<endl;
		}
};
int main(){
	details obj(12,"Pratik",27);
	obj.display();
	return 0;
}

