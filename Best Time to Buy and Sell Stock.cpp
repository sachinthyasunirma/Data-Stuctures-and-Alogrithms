#include<iostream>
using namespace std;
//Optimal Soultion for the Best time to buy and sell stock

int main(){
	//initialing array and variables
	int max__inArray=0;
	int max__profit=0;
	int arr[] = {7,6,5,4,3,1};
	int n = sizeof(arr)/sizeof(*arr);
	//cout<<n;
	for(int i=n-1;i>=0;i--){
		if(max__inArray<=arr[i]){
			max__inArray=arr[i];		
		}
		max__profit=max__inArray-arr[i];
	}
	cout<<max__profit;
	return 0;
}
