//WAP to display Student marksheet using Multiple inheritance.
#include<iostream>
using namespace std;
class info{
	public:
		int id;
		string name;
			
		void getinfo(){
			cout<<"Enter the Student Id :"<<endl;
			cin>>id;
			cout<<"Enter the Student Name :"<<endl;
			cin>>name;
		}
		void displayinfo(){
			cout<<"----------Student Marksheet------------"<<endl;
			cout<<endl;
			cout<<"Student Id = "<<id<<endl;
			cout<<"Student Name = "<<name<<endl;
		}
};
class subject{
	public:
		int math,sci,eng,guj,com,total;
		void getmark(){
			cout<<"Enter the Maths Mark (out of 100) :"<<endl;
			cin>>math;
			cout<<"Enter the Science Mark (out of 100) :"<<endl;
			cin>>sci;
			cout<<"Enter the English Mark (out of 100) :"<<endl;
			cin>>eng;
			cout<<"Enter the Gujarati Mark (out of 100) :"<<endl;
			cin>>guj;
			cout<<"Enter the Computer Mark (out of 100) :"<<endl;
			cin>>com;
			total =math+sci+eng+guj+com;
		}
	
};
class marksheet :public info, public subject{
	public:
		void displaymark(){
			cout<<"Maths    = "<<math<<endl;
			cout<<"Science  = "<<sci<<endl;
			cout<<"English  = "<<eng<<endl;
			cout<<"Gujarati = "<<guj<<endl;
			cout<<"Computer = "<<com<<endl;
			cout<<"Total Mark Obtain Out of 500 = "<<total<<endl;
		}
}; 
int main(){
	marksheet obj;
	obj.getinfo();
	obj.getmark();
	obj.displayinfo();
	obj.displaymark();
	cout<<endl;
	cout<<"* * * * * * * * * * * * * * * * * * * "<<endl;
	return 0;
}
