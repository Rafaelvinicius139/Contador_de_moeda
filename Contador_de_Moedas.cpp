#include<stdio.h>




struct moeda{
	
	
float cinco;

float dez; 

float vintecinco;

float cinquenta;

float umreal;
	
	
};


int main(void){

	
	struct moeda b;
	
	float x, a, v, c, d, rx, ra, rb, rc, rd, resultado;
	
	b.cinco = 0.05;
	
	b.dez = 0.10;
	
	b.cinquenta = 0.50;
	
	b.vintecinco = 0.25;
	
	b.umreal = 1.00;
	
	printf("--------- programa contador de moedas---------\n\n\n");
	
	printf(" digite as quantidades da moeda\n\n\n");
	
	
	printf("digite s moedas de 0,05 \n");
	
	scanf("%f", &x);
	
	 rx = x * b.cinco;
	
	
	printf("digite s moedas de 0,10 \n");
	
	scanf("%f", &a);
	
	ra = a * b.dez;
	
	
	
	printf("digite s moedas de 0,25 \n");
	
	scanf("%f", &v);
	
	rb = v * b.vintecinco;
	
	
	
	printf("digite s moedas de 0,50 \n");
	
	scanf("%f", &c);
	
   rc = c * b.cinquenta;
	
	
	
	printf("digite s moedas de 1,00 \n");
	
	scanf("%f", &d);
	
	rd =  d * b.umreal;
	
	
	printf(" ----------os dados das moedas são --------------\n");
	
	
	printf("moedas de  0,5 X %.0f =.......... %.2f \n \n" , x, rx );
	
	printf("moedas de 0,10 X %.0f =......... %.2f \n \n", a, ra);
	
	printf("moedas de 0,25 X %.0f =......... %.2f \n \n",v ,rb );
	
	printf("moedas de 0,50 X %.0f =......... %.2f \n  \n",c, rc);
	
	printf("moedas de 1.00 X %.0f =......... %.2f \n\n",d , rd );
	
	
	resultado = (rx + ra )+ (rb + rc) + rd;
	
	printf("os valores somados são %.2f \n",resultado);
	
	
	
	
	
	
	
	

	

	
	
}