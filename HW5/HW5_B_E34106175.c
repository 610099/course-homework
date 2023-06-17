/* HW5 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(){
	int Data[SIZE];
	int i;
	int round,comp;
	int temp;
	int count=0;
	srand(time(NULL));
	
	//creat random number array
	for(i=0;i<SIZE;i++){
		Data[i]=1+rand()%100;
		printf("%d ",Data[i]);
	} 
	printf("\n");
	
	//bubble sort
	printf("Bubble soring array\n");
	for(round=1;round<=SIZE-1;round++){// SIZE-1 round
		for(comp=0;comp<SIZE-round;comp++){// SIZE-1 comp 
			// compare Data[comp] & Data[comp+1]
			if(Data[comp] > Data[comp+1]){
				temp = Data[comp];
				Data[comp]=Data[comp+1];
				Data[comp+1]=temp;
			}else{//no swap
				count++;
			}
		}
		if(count==SIZE-round){
			break;
		}
	}
	
	for(i=0;i<SIZE;i++){
		printf("%d ",Data[i]);
	} 
	
	return 0;
}
