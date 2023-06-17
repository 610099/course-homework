/* HW6 : The Tortoise and The Hare */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int MoveT(void);
int MoveH(void);
void printPosition(int positionT,int positionH);
void printResult(int positionT,int positionH);

int main(){
	int positionT,positionH,t,h;
	FILE *out;
	
	positionT=1;
	positionH=1;
	
	out = fopen("result.dat","w");
	
	srand(time(NULL));
	
	fprintf(out,"BANG !!!!!\n");
	fprintf(out,"AND THEY'RE OFF !!!!!\n");
	//printf("BANG !!!!!\n");
	//printf("AND THEY'RE OFF !!!!!\n");
	
	while(positionT!=70&&positionH!=70){
		positionT+=MoveT();
		positionH+=MoveH();
		
		
		if(positionT<=0){
			positionT=1;
		}
		if(positionH<=0){
			positionH=1;
		}
		
		printPosition(positionT,positionH);
		
	}
	
	printResult(positionT,positionH);
	
	fclose(out);
	
	return 0;
}

int MoveT(void){
	int P;
	P=1+rand()%10;
	
	if(P<=5){
		return 3;
	}else if(P>=8){
		return 1;
	}else{
		return -6;
	}
}

int MoveH(void){
	int P;
	P=1+rand()%10;
	
	switch(P){
		case 1:
		case 2:
			return 0;
			break;
		case 3:
		case 4:
			return 9;
			break;
		case 5:
			return -12;
			break;
		case 6:
		case 7:
		case 8:
			return 1;
			break;
		case 9:
		case 10:
			return -2;
			break;
	}
}

void printPosition(int positionT,int positionH){
	int i;
	FILE *out;
	
	out = fopen("result.dat","a");
	
	if(positionT==positionH){
		for(i=1;i<=positionT-1;i++){
			fprintf(out," ");
			//printf(" ");
		}
		fprintf(out,"OUCH!!!\n");
		//printf("OUCH!!!\n");
		
	}else{
		if(positionT<positionH){
			for(i=1;i<=positionT-1;i++){
				fprintf(out," ");
				//printf(" ");
			}
			fprintf(out,"T");
			//printf("T");
			
			for(i=1;i<=abs(positionT-positionH)-1;i++){
				fprintf(out," ");
				//printf(" ");
			}
			
			fprintf(out,"H\n");
			//printf("H\n");
			
		}else{
			for(i=1;i<=positionH-1;i++){
				fprintf(out," ");
				//printf(" ");
			}
			fprintf(out,"H");
			//printf("H");
			
			for(i=1;i<=abs(positionT-positionH)-1;i++){
				fprintf(out," ");
				//printf(" ");
			}
			
			fprintf(out,"T\n");
			//printf("T\n");
			
		}
	}
}

void printResult(int positionT,int positionH){
	FILE *out;
	
	out = fopen("result.dat","a");
	
	if(positionT==70&&positionH==70){
		fprintf(out,"IT'S A TIE!!!\n");
		//printf("IT'S A TIE!!!\n");
	}else{
		if(positionT==70){
			fprintf(out,"TORTOISE WINS!!! YAY!!!\n");
			//printf("TORTOISE WINS!!! YAY!!!\n");	
		}
		if(positionH==70){
			fprintf(out,"HARE WINS!!! YUCH!!!\n");
			//printf("HARE WINS!!! YUCH!!!\n");
		}
	}
	
}
