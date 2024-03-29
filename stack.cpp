#include<iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* top = NULL;
void push(int val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}
void pop() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   struct Node* ptr;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}
int stack[100], n=100, top1=-1;
void push1(int val) {
   if(top1>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top1++;
      stack[top1]=val;
   }
}
void pop1() {
   if(top1<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top1] <<endl;
      top1--;
   }
}
void display1() {
   if(top1>=0) {
      cout<<"Stack elements are:";
      for(int i=top1; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}

int main(){
	int x;
	cout<<"1.using linked list \n";
	cout<<"2.using arrays \n";
	cout<<"enter your choice \n";
	cin>>x;
	if(x==1){
		int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
	}
	else if(x==2){
		int ch1, val1;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch1;
      switch(ch1) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val1;
            push1(val1);
            break;
         }
         case 2: {
            pop1();
            break;
         }
         case 3: {
            display1();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch1!=4);
	}
	else{
		cout<<"invalid choice \n";
	}
	return 0;
}
