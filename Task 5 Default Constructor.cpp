0//WAP to caculate volume of cube using Default constructor.
#include<iostream>
using namespace std;
class cube{
	public:
		cube(){
			int a;
			double volume;
			cout<<"Enter the Value of Side(a) :"<<endl;
			cin>>a;
			volume = a*a*a;
			cout<<"Volume of Cube is "<<volume<<endl;
		}
};
int main(){
	cube obj;
	return 0;
}
