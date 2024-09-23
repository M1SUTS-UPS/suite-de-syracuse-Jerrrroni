//Jeroni Massip 
//Alexandre Lacaze

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void syrac(int u0);

int main(){

	
	//Variables
	int u0;
	
	printf("Entrez u0: \n");
	scanf("%d",&u0);
	syrac(u0);

	return 0;
}
void syrac(int u0){
	FILE *file;
	file = fopen("data.txt","w");
	int max = 0;
	int n = 0;
	fprintf(file,"#n:  #u_n:\n");
	while (u0 > 1)
	{
		if (u0%2==0){
			u0/=2;			//u1 devient le nouveau u0
		}
		else{
			u0=3*u0 + 1;
		}
		if (u0 > max)
		{
			max = u0;
		}
		n++;
		fprintf(file,"%d %d\n",n,u0);
	}

	printf("le max est : %d\n",max);
	printf("Le temps de vol est : %d\n",n);

	fclose(file);
}