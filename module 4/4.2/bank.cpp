#include<iostream>
using namespace std;
class bank{
public:
		int s;
		
		
		bank(){
			cout<<"enter the name you want to see details:\n1 vedant\n2 khushi \n3 darshan\n";
			cin>>s;
			}
			
			
			
			
			void display(){
			
			if(s==1){
				cout<<"name\t acount no.\t type\t balance\n";
				cout<<"vedant\t 1001\t\t saving\t 10000\n";
			}else if(s==2){
				cout<<"name\t acount no.\t type\t balance\n";
				cout<<"khushi\t 1002\t\t saving\t 90000\n";
			}else{
				cout<<"name\t acount no.\t type\t balance\n";
				cout<<"darshan\t 1003\t\t current\t 30000\n";
			}
			}

};
	

int main(){
	bank obj;
	obj.display();
return 0;
}
