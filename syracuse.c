//Jeroni Massip 
//Alexandre Lacaze

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	FILE *file;
	file = fopen("data.txt","w");
	
	//Variables
	int u0,u1;

	int max = 0;

	printf("Entrez u0: \n");
	scanf("%d",&u0);
	int n = 0;
	fprintf(file,"#n:  #u_n:\n");
	while (u0 > 1)
	{
		if (u0%2==0){
			u1=u0/2;		//On crée u1 comme désignation du terme Un+1
			u0=u1;			//u1 devient le nouveau u0
		}
		else{
			u1=3*u0+1;
			u0=u1;
		}
		if (u0 > max)
		{
			max = u0;
		}
		n++;
		//printf("Je print\n");
		fprintf(file,"%d %d\n",n,u0);
		
	}

	printf("le max est : %d\n",max);
	printf("Le temps de vol est : %d\n",n);
	fclose(file);
	return 0;
}
