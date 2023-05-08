#include<iostream>
using namespace std;
class bank{
	public:
		int b,c=1000,e;
		char a[20],d;
		bank(){
			cout<<"enter the name:";
			cin>>a;
			cout<<"enter the amount you want to deposite:";
			cin>>b;
			c=c+b;
			cout<<"your balance in account is:"<<c;
			cout<<"\ndo you want to withdraw(y/n):";
			cin>>d;
			if(d=='y'){
				cout<<"enter the amount to withdraw:";
				cin>>e;
				if(e>c){
					cout<<"not sufficient balance";
				}else{
				c=c-e;
				cout<<"\nname:"<<a<<"\nbalance:"<<c;}
			}else{
				cout<<"\nname:"<<a<<"\nbalance:"<<c;
			}
		}
};
int main(){
	bank obj;
	return 0;
}
