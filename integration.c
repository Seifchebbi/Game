#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
//#include "personne.c"
#include "background.c"
#include "update_score.c"
#include "enigme.c"
#include "vie.c"
/*#include "obstacle.c"
#include "ennemi.c"
*/
/*************************************************************INTEGRATION*************************************************************/

void pause();

int main(int argc, char *argv[])
{

/*declarations des variables */

//menu m;
background bg;
score s; vie v;
//personnage p;
// les Enigmes 
enigme e1,e2,e3,e4,e5,e6;

/*
// Menu
int i=0;// Quand  le menu est dans son etat initiale : pas de clic sur aucun des boutons. 
//JEU 
int i=1; // lorsqu'on commence le jeu

int touche; // lorsqu'on clique
// Ennemis 
enemie en1,en2,en3;en4,en5,en6;
int ennemi1=0;
int ennemi2=0;
int ennemi3=0;
int ennemi4=0;
int ennemi5=0;
int ennemi6=0;

// Les Obstacles 
obstacle o1,o2,o3,o4,o5,o6;

	*/

	/* Declaration des SDLs */

SDL_Surface *ecran=NULL;
SDL_Rect *position_ecran;

SDL_Event event; 


/************************************************************************************* INITIALISATION *************************************************************************************/ 

// fenetre et ecran

 SDL_Init(SDL_INIT_VIDEO);
TTF_Init();
 SDL_EnableKeyRepeat(100, 100); //Fonctions de la SDL permettant d'initialiser la fenêtre

    ecran = SDL_SetVideoMode(1600,600,32,SDL_HWSURFACE|SDL_DOUBLEBUF); //1920 , 1080
    SDL_WM_SetCaption("Land Of Gargoyls", NULL);


// les fonctions 

//initialiser_menu(&m);
initialiser_background(&bg);
//initialiser_personnage(&p);
initialiser_vie(&v);
initialiser_score(&s);
initialiser_enigme(&e1);
//initialiser_enigme(&e2);
//initialiser_enigme(&e3);
//initialiser_enigme(&e4);
//initialiser_enigme(&e5);
//initialiser_enigme(&e6);

// gestion de temps dans tout le jeu
//initialiser_tJeu(&tJeu);
/*

 

// init ennemi 
initialiser_ennemi(&en1);  // l'ennemi 3andha nafess el .h au faite mais l'initialisation bich tetbadel khater el image..
initialiser_ennemi(&en2);
initialiser_ennemi(&en3);
initialiser_ennemi(&en4);
initialiser_ennemi(&en5);
initialiser_ennemi(&en6);

// int obstacle

initialiser_obstacle(&o1);
initialiser_obstacle(&o2);
initialiser_obstacle(&o3);
initialiser_obstacle(&o4);
initialiser_obstacle(&o5);
initialiser_obstacle(&o6);



 // gestion de temps dans l'enigme 
initialiser_tEnigme(&tEnigme);
*/

/************************************************************************************* DISPLAY *************************************************************************************/

/* while (done)

{//debut while 

if (i==0) // lorsqu'on est dans le menu
{
afficher_menu(m,ecran);
}

if (i==1) // lorsq'on est dans le jeu
{
*/
afficher_background(&bg,ecran); 
//affichage_tJeu(&tJeu);
//afficher_personnage(&p,ecran);
afficher_score(&s,ecran);
afficher_vie(&v,ecran);
afficher_enigme(&e1,ecran);
/*
afficher_obstacle(&o1,ecran);
afficher_obstacle(&o2,ecran);
afficher_obstacle(&o3,ecran);
afficher_obstacle(&o4,ecran);
afficher_obstacle(&o5,ecran);
afficher_obstacle(&o6,ecran);
 
if (ennemi1==0)
{affiche_ennemi(&e1,ecran);}
 if (ennemi2==0)
{affiche_ennemi(&e2,ecran);}
 if (ennemi3==0)
{affiche_ennemi(&e3,ecran);}
 if (ennemi4==0)
{affiche_ennemi(&e4,ecran);}
 if (ennemi5==0)
{affiche_ennemi(&e5,ecran);}
 if (ennemi6==0)
{affiche_ennemi(&e6,ecran);}

// enigmeeeeeeeeeeeeeeeeeeeeeeeeee
// ici y a une condition 3al enigme bich yaffichi ou yaffichi el temps d'enigme pas encore resolu 


}
}// fin while 

*/

/************************************************************************************* INPUT *************************************************************************************/


// les evenements mezelna matfehemnech fihom 

/************************************************************************************* UPDATE *************************************************************************************/

// kifkif 







// derniere chose 
SDL_Flip (ecran);
pause();
// liberation SDL
TTF_Quit();
 SDL_Quit();
   
 return EXIT_SUCCESS;
}



void pause()
{
    int continuer = 1;
    SDL_Event event;
 
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}
