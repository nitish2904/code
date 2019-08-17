#include<iostream>
using namespace std;
int main(){
	long ugly[100000],i=0;
	int i3=0,i5=0;
	long next_multiple3=3;
	long next_multiple5=5;
	long next = 1,count=0;
	ugly[0]=1;
	long l,r;
	cin>>l>>r;
	while(1){
		next=min(next_multiple3,next_multiple5);
		ugly[++i]=next;
		if(next>r)
			break;
		if(next>=l)
			count++;
		if(next==next_multiple3){
			i3++;
			next_multiple3=ugly[i3]*3;
		}
		if(next==next_multiple5){
			i5++;
			next_multiple5=ugly[i5]*5;
		}
	}
	cout<<count<<" "<<endl;
}