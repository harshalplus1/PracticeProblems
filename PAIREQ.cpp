#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int a[n];
	    int occ[n]={0};
	    for(int j=0;j<n;j++){
	        int num;
	        cin>>num;
	        a[j]=num;
	    }
	    for(int k=0;k<n;k++){
	        int cnt1=1;
	        for(int z=k+1;z<n;z++){
	            if(a[k]==a[z]){
	                cnt1++;
	            }
	        }
	        occ[k]=cnt1;
	    }
	    cout<<endl;
	    int num;
	    num=occ[0];
	    for(int k=0;k<n;k++){
	        for(int z=k+1;z<n;z++){
	            if(num<occ[z]){
	                num=occ[z];
	            }
	        }
	    }
	   cout<<n-num<<endl;
	}
	return 0;
}
