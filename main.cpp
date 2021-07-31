#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	//define
	int arr[] = {5,4,-1,7,8};
	int n =sizeof(arr)/sizeof(*arr);
//	int l=0;
//	cout<<maxSubarray(arr,l,r);
//	int subarryPrint(int i, int j);
//	int max__total =0;
	//brute force
//	for(int i=0;i<n;i++){
//		int total=0;
//		for(int j=n;j>=i;j--){
//			total = total+arr[j];
//			if(max__total<total){
//				max__total=total;
//			}	
//		}
////		 		
//	}
//	cout<<max__total;
	//optimize
	int index__value = 0;
	int max__total = 0;
	for(int i=0; i<n;i++){
		int index__value=index__value+arr[i];
		if(index__value<arr[i]){
			index__value=arr[i];
		}
		if(max__total<index__value){
			max__total=index__value; 			
		}
	}
	cout<<max__total;
	return 0;
}

