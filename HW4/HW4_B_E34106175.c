/* Fibonacci series
0,1,1,2,3,5,8,13,21,34,55,89,114

	f(x) = f(x-1) + f(x-2);
	f(0) = 0;
	f(1) = 1;
	
 */ 
 
 #include <stdio.h>

int main(){
	//variables
	int  n;
	long fib_n;
	long fib_n_1=1,fib_n_2=0;
	
	///user enter an integer, n
	printf("enter an integer\n");
	scanf("%d",&n);
	
	//print Fibonacci series from 0 to n
	int i;
	for(i=0;i<=n;i++){
		
		if(i==0){
			fib_n=fib_n_2;
		}else if(i==1){
			fib_n=fib_n_1;
		}else{
			fib_n=fib_n_1+fib_n_2;
			fib_n_2=fib_n_1;
			fib_n_1=fib_n;
		}
		
		printf("Fibonacci(%d) = %ld\n",i,fib_n);
	}
	
	return 0;
}
