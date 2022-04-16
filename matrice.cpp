#include<stdio.h>

main(){
   int i=1,j=2,n,m,Jmax,Jmin,v;
   int M[n][m];
   int S[m];
  
  //la taille de la matrice -------------------
  printf("entrer le nombre de lignes");
   scanf("%d",&n); 
  printf("entrer le nombre de colonnes");
   scanf("%d",&m);
   
   //Saisir les elements de la matrice  ------------------
   for(i=0;i<n;i++){
   	for(j=0;j<m;j++){
   		printf("entrer les éléments de ");
        scanf("%d",&M[i][j]);
	   }
   }
   
   // Affichage des elements de la matrice  ---------------------
   for(i=0;i<n;i++){
   	for(j=0;j<m;j++){
   		printf(" l'element ",M[i][j]);
   	}
   	}
   	
   	//calcul des sommes des colonnes  ------------------
   for(j=0;j<m;j++){
   	S[j]=0;
   	for(i=0;i<n;i++){
   		S[j]=S[j]+M[i][j];
	   }
   }
   
   	//Affichage des sommes des colonnes  ------------------
   for(j=0;j<m;j++){
   	printf("la somme de la",j,"eme colonne est",S[j]);
   }
   
   
   Jmin=S[0];
   Jmax=S[0];
    
    // trouver la colonne dont la somme est max
   for(j=0;j<m;j++){
   	if(S[Jmax]<S[j]){
   		Jmax=j;
	   }
	   //trouver la colonne dont la somme est min 
	 if(S[Jmin]>S[j]){
   		Jmin=j;
	   }  
   }
   printf("la colonne dont la somme est min est la colonne ",Jmin);
   printf("la colonne dont la somme est max est la colonne ",Jmax);


   // permuter les deux colonnes ----------------
   if(Jmin>Jmax){
   	for(j=0;j<m;j++){
   		v=M[i][Jmin];
   		M[i][Jmin]=M[i][Jmax];
   		M[i][Jmax]=v;
   }
   
   //affichage de la matrice apr permutation
   for(j=0;j<m;j++){
   	for(j=0;j<m;j++){
   	printf("",M[i][j]);
   }
   }
   }
}
