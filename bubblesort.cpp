#include<iostream>
using namespace std;

int main(){
	int n,arr[n],temp,counter=1;
	cout<<"Enter the size of array";
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	while(counter<n){
		for(int j=0;j<n-counter;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}counter++;
	}
	
	for (int a=0;a<n;a++){
		cout<<arr[a];
	}
	return 0;
	
}