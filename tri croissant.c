#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	
int main()
{	
   
	int i,n,j,tmp;
	printf("donner le nombre des produit :");
	scanf("%d",&n);
	 int T[n];
    for(i=1;i<=n;i++){
	printf("donner le prix de produit num %d:",i);
	scanf("%d",&T[i]);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<n;j++){
			if(T[i]<T[j]){
				tmp=T[i];
				T[i]=T[j];
				T[j]=tmp;
				}
		}
		
	}
	 printf(" les prix par ordre croissant sont :");
	  for(i=1;i<=n;i++)
	 printf("\n|T[%d]| %d |",n+1,T[i]); 
	 return 0;
}
	 
	 

