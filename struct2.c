#include <stdio.h>
typedef struct
{
  char nom[30];
  char prenom[30];
  float note;

} etudiant;

int
main ()
{
  etudiant p[30];
  int n, i;
  printf ("veuillez entrer le nbr d etudiant que tu as ");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)

	{
	  printf ("veuillez entrer les informations du   %dere personne   \n ", i);
	  printf ("le nom:");
	  scanf ("%s", p[i].nom);
	  printf ("le prenom :");
	  scanf ("%s", p[i].prenom);
	  printf ("la note :");
	  scanf ("%f", &p[i].note);

	}
  printf ("les personne qui ont la moyeennes plus que 20 sont \n");
  for (i = 1; i <= n; i++)
	{
	  if (p[i].note <= 10)
	  p[i].note =p[i].note+1;
	  else if ((p[i].note >= 10) && (p[i].note <= 15))
	   p[i].note =p[i].note+0.5;
	  

	
	}
	 for (i = 1; i <= n; i++){
	printf ("Nom:%s et prenom:%s  et sa note:%f \n", p[i].nom,
				p[i].prenom, p[i].note);
	 }
  return 0;
}

#include <stdio.h>
typedef struct
{
  char nom[30];
  char prenom[30];
  float note;

} etudiant;

int
main ()
{
  etudiant p[30];
  int n, i;
  printf ("veuillez entrer le nbr d etudiant que tu as ");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)

	{
	  printf ("veuillez entrer les informations du   %dere personne   \n ", i);
	  printf ("le nom:");
	  scanf ("%s", p[i].nom);
	  printf ("le prenom :");
	  scanf ("%s", p[i].prenom);
	  printf ("la note :");
	  scanf ("%f", &p[i].note);

	}
  printf ("les personne qui ont la moyeennes plus que 20 sont \n");
  for (i = 1; i <= n; i++)
	{
	  if (p[i].note <= 10)
	  p[i].note =p[i].note+1;
	  else if ((p[i].note >= 10) && (p[i].note <= 15))
	   p[i].note =p[i].note+0.5;
	  

	
	}
	 for (i = 1; i <= n; i++){
	printf ("Nom:%s et prenom:%s  et sa note:%f \n", p[i].nom,
				p[i].prenom, p[i].note);
	 }
  return 0;
}