#include<iostream>
//lower triangular logic "j>i" or "i<j"
using namespace std;
main(){
	int c,d;

cout<<"enter the no.of rows";
cin>>c;
cout<<"enter the no.of columns";
cin>>d;
int a[c][d],lwT[c][d];
cout<<"enter 1st matrix";
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            cin>>a[i][j];
        }
    }
    if(c==d){
    	for(int i=0;i<c;i++){
    		for(int j=0;j<d;j++){
    			if(j>i)
				lwT[i][j]=0;
				else
				lwT[i][j]=a[i][j];
			}
		}
		cout<<"the lower triangular matrix is \n";
	for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            cout<<lwT[i][j]<<"\t";
        }
        cout<<"\n";
    }	
	}
	else 
	cout<<"triangular matrix not possible";
}
