#include<stdio.h>

long long int arr[1000000];

long long int fib(long long int n){
	if(n==1)
		return 1;
	else if(n==2)
		return 1;
	else{
		if(arr[n]==0)
			arr[n]=fib(n-1)+fib(n-2);
	}
	return arr[n];
}

int main(){
	long long int n;
	scanf("%lld",&n);
	printf("%lld\n",fib(n));
	return 0;
}
