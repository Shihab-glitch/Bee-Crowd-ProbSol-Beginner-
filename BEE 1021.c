#include <stdio.h>
int main()
{
	double N;
	int n100, n50, n20, n10, n05, n02, m01, m50, m25, m10, m05, m001;
	scanf("%lf", &N);
	int notas = N;
	int moedas = (N-notas)*100;
	if((moedas*1000) % 10 == 9){moedas++;}
	
	n100 = N/100;
	n50 = (notas%100)/50;
	n20 = ((notas%100)%50)/20;
	n10 = (((notas%100)%50)%20)/10;
	n05 = ((((notas%100)%50)%20)%10)/5;
	n02 = (((((notas%100)%50)%20)%10)%5)/2;
	
	m01 = (((((notas%100)%50)%20)%10)%5)%2;
	m50 = moedas/50;
	m25 = (moedas%50)/25;
	m10 = ((moedas%50)%25)/10;
	m05 = (((moedas%50)%25)%10)/5;
	m001 = (((moedas%50)%25)%10)%5;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n05);
    printf("%d nota(s) de R$ 2.00\n", n02);

    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", m01);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m05);
    printf("%d moeda(s) de R$ 0.01\n", m001);
	return 0;	
}
