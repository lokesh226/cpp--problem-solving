#include <iostream>
#include <vector>

using namespace std;



int main() {
    int x,count=0;
    cout<<"enetr the size of array";
    cin>>x;
    int arr[x];
    cout<<"enetr the elements of array ";
    for(int i=0;i<x;i++){
    	cin>>arr[i];
	}
	
	for(int i=0;i<x;i++){
		int sum=0;
		for(int j=i;j<x;j++){
			if((j-i)%2==0)
			sum+=arr[j];
			else
			sum-=arr[j];
			if(sum==0)
			count++;
		}
	}
    cout << "Number of subarrays with equal sum at even and odd positions: " << count<< endl;

    return 0;
}

