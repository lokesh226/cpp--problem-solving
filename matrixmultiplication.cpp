#include<iostream>
using namespace std;
main(){
    int a[3][3],b[3][3],mul[3][3];
    cout<<"enter 1st matrix";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter 2nd matrix";
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    
   
        for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int sum = 0;
            for(int k = 0; k < 3; k++) {
                sum += a[i][k] * b[k][j];
            }
            mul[i][j] = sum;
        }
    }
cout<<"multiplied matrix is \n"
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mul[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
