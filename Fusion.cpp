#include <iostream>

using namespace std;


void ini(char* t, char* t2){
	int res=0;
	for(int i=6;i<12;i++){
		t[i]=t2[res];
		res++;
	}
}


int main(int argc, char *argv[])
{
	char a[13] = "hello ";
	char b[6] = "world";
	ini(a,b);
	for(int i=0;i<13;i++){
		cout<<a[i];
	}
}
