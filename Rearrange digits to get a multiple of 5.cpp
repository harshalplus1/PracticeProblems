#include <iostream>
using namespace std;

int main() {
    int T,D,flag=0;
    string num;
    int dig[3];
    cin>>T;
	for(int z=0;z<T;z++){
	    cin>>D;
	    cin>>num;
	    for(int i=0;i<D;i++){
	        if(num[i]=='0'||num[i]=='5'){
	           flag=1;
	           break;
	       }
	    }
	    if(flag==1){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	    flag=0;
	}
	return 0;
}
