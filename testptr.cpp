#include <bits/stdc++.h>
using namespace std;


int main(){
	int a = 1000;
	int *ptr;
	ptr = &a;
	cout << (*ptr) << endl;
	(*ptr)++;
	cout << a << endl;
	int *ptr2 = ptr;
	cout <<"Dia chi cua bien a"  << &a << endl;
	cout <<"Gia tri cua con tro ptr"  << ptr << endl;
	cout <<"Gia tri cua con tro ptr2"  << ptr2 << endl;
	return 0;
}
