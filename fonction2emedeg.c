#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void operation(int agrc,char* agrv[]);

int main(int agrc,char* agrv[])
{
	operation(agrc,agrv);
	return 0;
}

void operation(int agrc,char* agrv[])
{
	float a,b,c,x,resultat;
	float delta,x1,x2;

	if(agrc!=4)
	{
		printf("Votre syntaxe doive etre : ./fonction ax2+bx+c pour x=n \n");
		printf(" avec n un nombre dont vous vouler calculer la fonction second degre\n");
		printf(" exemple : ./fonction 2x2+3x+1 pour x=5\n");
		printf(" si a, b ou c sont egale a 0 alors ecrit le comme 1x2+0x+0 pour x=n\n");
	}
	else
	{
		sscanf(agrv[1],"%fx2%fx%f",&a,&b,&c);
		x=atof((agrv[3]+2));
		resultat=a*x*x+b*x+c;
		printf("Le resultat de la fonction est : %f\n",resultat);

		delta=b*b-4*a*c;
		printf("Discriminant delta = %f\n",delta);

		if(delta>0)
		{
			x1=(-b-sqrt(delta))/(2*a);
			x2=(-b+sqrt(delta))/(2*a);
			printf("Deux racines : x1=%f  et  x2=%f\n",x1,x2);
		}
		else if(delta==0)
		{
			x1=-b/(2*a);
			printf("Une racine double : x=%f\n",x1);
		}
		else
		{
			printf("Pas de racine reelle (delta<0)\n");
		}
	}
}
