//给你一个正整数，打印出1-N包括N的整数
#include <stdio.h>
void printN(int N);
void printNR(int N);
int main(){
	int N;
	scanf("%d",&N);
	printN(N);
	printf("0----------------------0\n");
	printNR(N);
	return 0;
}

void printN(int N){
	int i;
	for(i = 0; i <= N;i++){
		printf("%d\n",i);
	}
}

void printNR(int N){
	if(N){
		printNR(N-1);
		printf("%d\n",N);
	}
}



