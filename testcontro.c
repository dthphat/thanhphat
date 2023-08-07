#include <stdio.h>

int main(){
	//dia chi bien
	int a;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("\n Gia tri cua a la = %d, a");
	printf("\n Dia chi cua bien a trong bo nho la = %p, &a");
	
	int *pc, c;
	c = 5;
	pc = &c;
	printf("\n Gia tri cua c la : %d, *pc");
	printf("\n Dia chi cua bien c : %p, pc");
	
	*pc = 1;
	printf("\n Gia tri cua c la : %d, c");
	printf("\n Gia tri cua *pc la : %d, *pc");
	
}
