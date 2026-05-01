#include<stdio.h>
#include<stdlib.h>
void operation(int agrc,char* agrv[]);
int main(int agrc,char* agrv[])
{
	operation(agrc,agrv);
	return 0;
}
void operation(int agrc,char* agrv[])
{
	float a,b,x,resultat;
	if(agrc!=4)
	{
		printf("Votre syntaxe doive etre : ./fonction ax+b pour x=n \n avec n un nombre dont vous vouller calculer a la fonction premier degre\n si a ou b sont egale 1 ou 0 alors ecrit le comme 1x+0 pour x=n  \n");
	}
	else
	{
		a=atof(agrv[1]);
		b=atof((agrv[1]+3));
		x=atof((agrv[3]+2));
		resultat=a*x+b;
		printf ("Le reultat de l'equation est:%f",resultat);
	}

}
