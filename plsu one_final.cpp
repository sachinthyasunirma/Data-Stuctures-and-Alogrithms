#include<iostream>

using namespace std;

int main(){
	int arr[]={4,5,9,9};
	int n = sizeof(arr)/sizeof(*arr);
	int carrying_bit=0;
	int last_plus=1;
	bool stop_loop=true;
	int j=n;
	for(int i=n-1;i>=0;i--){
		if(arr[i]==9){
		arr[i]=0;
		carrying_bit=1;
		last_plus=0;		
		}else{
			arr[i]=arr[i]+last_plus+carrying_bit;
			break;
		}		
	}
	
	for(int i=0;i<j;i++){
		cout<<arr[i]<<endl;
	}
	
}




//while(stop_loop){
//		if(arr[n-1]==9){
//			arr[n-1]=0;
//			carrying_bit=1;
//			last_plus=0;
//			n--;
//		}
//		else{
//			arr[n-1]=arr[n-1]+last_plus+carrying_bit;
//			stop_loop=false;
//		}
//	}
