/* HW3 */ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status{win,lose};

int main(){
	int sum;
	int n1,n2,n3;//dice point
	int choice;
	int count_win;
	double Pwin;
	
	enum Status status;
	
	srand(time(NULL));
	
	int p;
	//for(p=1;p<=1000;p++){
	
	count_win=0;

	int i;
	for(i=1;i<=1000;i++){//repeat 1000 times
	
	//choose odd or even
	choice=rand()%2;
	
	//roll 3D6
	n1=rand()%6+1;
	n2=rand()%6+1;
	n3=rand()%6+1; 
	sum=n1+n2+n3;
	
	//determine lose or win
	switch (choice){
			
		case 0://choose even
		
			//sum is odd or even
			if(sum%2==0){//sum is even
			
				if(n1==n2&&n2==n3){//3 same point
					status=lose;
				}else{
					status=win;
				}
				
			}else{//sum is odd
				status=lose;
			}
			
			break;
		
		case 1://choose odd
		
			//sum is odd or even
			if(sum%2==1){//sum is odd
			
				if(n1==n2&&n2==n3){//3 same point
					status=lose;
				}else{
					status=win;
				}
				
			}else{//sum is even
				status=lose;
			}
			
			break;
	}//determine }
	
	if(status==win){
		count_win++;
	}
	
	}//for loop } 
	
	Pwin=(double)count_win/1000;
	printf("wining percentage is %lf\n",Pwin);

	return 0;
}
