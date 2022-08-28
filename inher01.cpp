#include<iostream>

using namespace std;

class x{
	
	public:
		
	void data(){
		int a =10;
		int b;
		b=a*a*a;
		
		cout<<"First : "<<b<<endl;
	}
};
class y : public x{
	
	public:
		
	void fun(){
		int k=20;
		int q=k*k*k;
		
		
		cout<<"Second : "<<q<<endl;
	}
};

main(){
	y obj;
	
	obj.data();
	obj.fun();
}

