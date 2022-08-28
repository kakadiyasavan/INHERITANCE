#include<iostream>

using namespace std;

class p{
	
	public:
		
	void pa(){
		int a=10;
		int b=180;
		float c=3.14;
		int d;
		
		d=a*b/c;
		
		cout<<"Degrees : "<<d;
		
		cout<<endl<<endl;
		}
};
class q:public p{
	
	public:
	
	void fun(){
		int a=10;
		int b=32;
		float d;
		int c=5;
		int e=9;
		
		d=(a-b)*c/e;
		
		cout<<"Celsius : "<<d;
		
		cout<<endl<<endl;
	}
	
};
class r:public q{
	public:
		
	void data(){
		int a=10;
		float d;
		double c=273.15;
		
		d=a+c;
		
		cout<<"Kelvin : "<<d;
	}
	
};
main(){
	r obj;
	
	obj.pa();
	obj.fun();
	obj.data();
}
