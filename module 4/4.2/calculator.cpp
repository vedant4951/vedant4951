#include<iostream>
using namespace std;
class calculator{
	public:
		int a,b,c,r;
		
		calculator(){
			cout<<"what do you want to do: \n 1 add \n 2 sub \n 3 mul \n 4 div:\n";
			cin>>a;
			cout<<"enter the first number:\n";
			cin>>b;
			cout<<"enter the second number:\n";
			cin>>c;
		
		
		if(a==1){
			r=b+c;
		}else if(a==2){
			r=b-c;
		}else if(a==3){
			r=b*c;
		}else{
			r=b/c;
		}
		}
		
		
		void dis()
		{
			cout<<"\nresult is: "<<r;
		}
};
int main(){
	calculator obj;
	obj.dis();
	return 0;
}
