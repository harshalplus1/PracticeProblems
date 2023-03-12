#include <iostream>
using namespace std;

int main() {
	int ch;
	int cnt[4];
	int num=0;
	for(int i=0;i<4;i++){
	    cin>>ch;
	    cnt[i]=ch;
	}
	for(int i=0;i<4;i++){
	    if(cnt[i]>=10){
	        num++;
	    }
	}
	cout<<num;
	return 0;
}
