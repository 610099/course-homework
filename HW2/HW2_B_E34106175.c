/* HW2 */
/* f(x) = 0.0021 *X^5 + 0.00067*(X-13)^4 + 46.7*X − 100  */
#include <stdio.h> 
#include <math.h>

int main(){

	double a,b,c;
	double Fa,Fb,Fc;
	
	a=-15;
	b=15;
	Fa=0.0021*pow(a,5) + 0.00067*pow(a-13,4) + 46.7*a -100;
	Fb=0.0021*pow(b,5) + 0.00067*pow(b-13,4) + 46.7*b -100;
	
	c=(a+b)/2;
	Fc=0.0021*pow(c,5) + 0.00067*pow(c-13,4) + 46.7*c -100;
	
	while( fabs(Fc-0) >= pow(10,-5) ){
		
		if( Fa*Fc>0 ){
		a=c;
		Fa=0.0021*pow(a,5) + 0.00067*pow(a-13,4) + 46.7*a -100;
		
		}else if( Fb*Fc>0  ){
		b=c;
		Fb=0.0021*pow(b,5) + 0.00067*pow(b-13,4) + 46.7*b -100;
		
		}
		
		c=(a+b)/2;
		Fc=0.0021*pow(c,5) + 0.00067*pow(c-13,4) + 46.7*c -100;

	}
	

	printf("the root is %lf\n",c);
	
	return 0;
}
