#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    int cnt=0;
	    cin>>n;
	    int arr[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    if(arr[n-1]-arr[n-2]!=0){
	            cnt++;
	        }
	        if(arr[0]-arr[1]!=0){
	            cnt++;
	        }
	    for(int k=1;k<n-1;k++){
	        if(arr[k-1]-arr[k]!=0 ||arr[k+1]-arr[k]!=0){
	            cnt++;
	        }
	    }
	        cout<<cnt<<endl;
	}
	return 0;
}
