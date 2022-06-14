#include <stdio.h>
int main ()
{
	char name[20],g[10];
	int age;
	float p,m;
	printf ("Enter your name : ");
	scanf ("%s", name);
	printf ("Enter your age : ");
	scanf ("%d",&age);
	printf ("Enter Physics and math's grade : ");
	scanf ("%.2f %.2f",&p,&m);
	printf ("Enter compro's grade(letter) : ");
	scanf ("%s", g);
	printf ("\n************Proflie************\n");
	printf ("%s is %d years old \n",name,age);
	printf ("%s got %.2f in Physics and got %.2f in math \n",name,p,m);
	printf ("%s got %s in Compro ",name,g);

	return 0;
}
