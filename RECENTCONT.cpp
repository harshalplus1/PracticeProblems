#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	int cnt;
	string ch;
	for(int i=0;i<test;i++){
	    cin>>cnt;
	    int cnt1=0;
	    int cnt2=0;
	    for(int i=0;i<cnt;i++){
	        string temp;
	        cin>>temp;
	        if(temp=="START38"){
	                cnt1++;
	           }
	        if(temp=="LTIME108"){
	               cnt2++;
	           }
	    }
	    cout<<cnt1<<" ";
	    cout<<cnt2<<endl;
	}
	return 0;
}
