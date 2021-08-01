#include<iostream>

using namespace std;
int main(){
	int arr[]={-1,-2,-3};
	int n = sizeof(arr)/sizeof(*arr);
	int first_num = -1000;
	int second_num=-1000;
	int third_num=-1000;
	int index_element;
	
	for(int i=0;i<n;i++){
		index_element=arr[i];
		if(first_num<index_element){
//			third_num=second_num;
//			second_num=first_num;
			first_num=index_element;
				if(first_num>second_num){
				int temp=0;
				temp=first_num;
				first_num=second_num;
				second_num=temp;
			}if(second_num>third_num){
				int temp=0;
				temp=second_num;
				second_num=third_num;
				third_num=temp;
			}
			
		}
	}
	cout<<first_num*third_num*second_num;
	
}

 
