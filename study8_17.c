#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4lf\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
    double a;
    double b;
    a = -20;   
    b = 20;
    while (func(p,q,(a+b)/2) > EPSILON || func(p,q,(a+b)/2) < -EPSILON) {
	printf("a,c,b:%lf,%lf,%lf\n",a,(a+b)/2,b);
	printf("f(a),f(c),f(b):%lf,%lf,%lf\n",func(p,q,a),func(p,q,(a+b)/2),func(p,q,b));   
     if(func(p,q,(a+b)/2)*func(p,q,a) < 0){
            a = a;
            b = (a+b)/2;
        }else if (func(p,q,(a+b)/2)*func(p,q,b) < 0){
            a = (a+b)/2;
            b = b;
        
	}else{
	break;
   	 }
	}
    return (a+b)/2;
}

double f(int p, int q, double x) {
    return p * x + q;
}
