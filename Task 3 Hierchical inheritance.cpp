//WAP to enter student details of different stream using hiechical inheritance.
#include<iostream>
using namespace std;
class detail{
	public:
		int id;
		string name;
		int age;
		string birthcity;
		
		void getinfo(){
			cout<<"Enter the Student Id :"<<endl;
			cin>>id;
			cout<<"Enter the Student Name :"<<endl;
			cin>>name;
			cout<<"Enter the Student Age :"<<endl;
			cin>>age;
			cout<<"Enter the Student Birth City :"<<endl;
			cin>>birthcity;
		}
		void displayinfo(){
			cout<<"----------Student Details------------"<<endl;
			cout<<"Student Id ="<<id<<endl;
			cout<<"Student Name ="<<name<<endl;
			cout<<"Student Age ="<<age<<endl;
			cout<<"Student Birth City ="<<birthcity<<endl;
		}
};
class science : public detail{
	string stream;
	public:
		void getstream(){
			cout<<"Enter the Stream of Student :"<<endl;
			cin>>stream;
		}
		void display(){
			cout<<"Student Stream ="<<stream<<endl;
		}
};
class commerce : public detail{
	string stream;
	public:
		void getstream(){
			cout<<"Enter the Stream of Student :"<<endl;
			cin>>stream;
		}
		void display(){
			cout<<"Student Stream ="<<stream<<endl;
		}
};
int main(){
	science s1;
	s1.getinfo();
	s1.getstream();
	s1.displayinfo();
	s1.display();
	cout<<endl;
	cout<<"* * * * * * * * * * * * * * * * * * * * *"<<endl;
	cout<<endl;
	commerce c1;
	c1.getinfo();
	c1.getstream();
	c1.displayinfo();
	c1.display();
	return 0;
}
