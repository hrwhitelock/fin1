#include<stdio.h>
#include<math.h>

#define N 28

int main(void){
	double p, s;
	long n;
	int i=0; 
	
	//initial values
	n = 4;
	s= sqrt(2.);
	p =  n/s;

 	printf("%3d	%10ld	%.14f	% .14f	% .14f\n", i, n, s, p, M_PI-p);
    
    	for(i = 0; i < N; i++){
        	s = sqrt(2*s*s+2*sqrt((s*s*s*s)-s*s));
        	n *= 2;
        	p = n/s;
        	printf("%3d	%10ld	%.14f	% .14f	% .14f\n", i, n, s, p, M_PI-p);
    	}


	return(0);
}
