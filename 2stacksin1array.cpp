#include<iostream>
using namespace std;
int stack[100], n=100,mid=n/2;
int tops1=-1,tops2=mid-1;
void push1(int val){
	if(tops1>=mid-1)
	cout<<"stack overflow"<<endl;
	else{
		tops1++;
		stack[tops1]=val;		
	}
}
void push2(int val){
	if(tops1>=n-1)
	cout<<"stack overflow"<<endl;
	else{
		tops2++;
		stack[tops2]=val;
	}
}
void pop1(){
	if(tops1==-1)
	cout<<"stack underflow"<<endl;
	else{
		cout<<"the popped element is"<<stack[tops1]<<endl;
		tops1--;
	}
}
void pop2(){
	if(tops2==mid-1)
	cout<<"stack underflow"<<endl;
	else{
		cout<<"the popped element is"<<stack[tops2]<<endl;
		tops2--;
	}
}
void display1(){
	if(tops1>=0){
		cout<<"elements are \t";
		for(int i=tops1;i>=0;i--){
			cout<<stack[i]<<"\t";
		}
		cout<<endl;
	}
	else
	cout<<"stack is empty"<<endl;
}
void display2(){
	if(tops2>=mid){
		cout<<"elements are \t";
		for(int i=tops2;i>=mid;i--){
			cout<<stack[i]<<"\t";
		}
		cout<<endl;
	}
	else
	cout<<"stack is empty"<<endl;
}

int main(){
	int ch,val;
	cout<<"choose opperation"<<endl;
	cout<<"1.push opperation in stack1"<<endl;
	cout<<"2.push opperation in stack2"<<endl;
	cout<<"3.pop opperation in stack1"<<endl;
	cout<<"4.pop opperation in stack2"<<endl;
	cout<<"5.display opperation in stack1"<<endl;
	cout<<"6.display opperation in stack2"<<endl;
	cout<<"7.exit"<<endl;
	do{
		cout<<"enter choice \t";
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"Enter value to be pushed:"<<endl;
            	cin>>val;
            	push1(val);
				break;
			}
			case 2:{
				cout<<"Enter value to be pushed:"<<endl;
            	cin>>val;
            	push2(val);
				break;
			}
			case 3:{
				pop1();
				break;
			}
			case 4:{
				pop2();
				break;
			}
			case 5:{
				display1();
				break;
			}
			case 6:{
				display1();
				break;
			}
			case 7:{
				cout<<"exit"<<endl;
				break;
			}
			default:{
				cout<<"invalid choice"<<endl;
			}
		}
	}while(ch!=7);
}
