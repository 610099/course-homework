#include <stdio.h>

 int main(){
 	//varables
 	int count,sum_grade,sum_credit,average,grade,credit,number_subject;
 	count = 1;
 	sum_grade = 0;
 	sum_credit = 0;
 	average = 0;
 	grade = 0;
 	credit = 0;
 	number_subject = 0;
 	FILE *out;
 	
 	printf("enter  the number of sbject\n");
	scanf("%d",&number_subject);
	out = fopen("E34106175_HW.dat","w");
	
	while(count <= number_subject){
		printf("enter grade\n");
		scanf("%d",&grade);
		while(grade<0 || grade>100){//check grade between 0 and 100
			printf("enter the correct grade\n");
			scanf("%d",&grade);
		}
		printf("enter credit\n");
		scanf("%d",&credit);
		count = count + 1;
		fprintf(out,"%d %d\n",grade,credit);
		sum_grade = sum_grade + grade*credit;
		sum_credit = sum_credit + credit;
	}
	average = sum_grade / sum_credit;
	fprintf(out,"%d ",average);
	if(average>=90){ 
		fprintf(out,"A\n");
	}else if(average>=80){
		fprintf(out,"B\n");
	}else if(average>=70){
		fprintf(out,"C\n");
	}else if(average>=60){
		fprintf(out,"D\n");
	}else{
		fprintf(out,"F\n");
	}
 	
 	fclose(out);
 	
 	return 0;
 }
