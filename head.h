/*                                                                                                          
** head.h for head.h in /home/pechay_a/Desk/octocat/head.h                           
**                                                                                                          
** Made by PECHAYRE Arthur                                                                                  
** Login   <pechay_a@etna-alternance.net>                                                                   
**                                                                                                          
** Started on  Mon Jan  18 09:00:00 2015 PECHAYRE Arthur                                                     
** Last update Fri Jan  22 16:59:59 2015 PECHAYRE Arthur                                                     
*/

#ifndef HEAD_H
#define HEAD_H

/*---- macros ----*/

#define MUR_BG "\033[103m \033[0m"
#define SORTIE_BG "\033[102m \033[0m"

/*---- includes ----*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

/*---- structures ----*/

typedef struct 	s_octocat
{
	char* 		pseudo;
	int 		pos_x;
	int			pos_y;
} 				t_octocat;

typedef struct 	s_fonctions_menu_game
{
	char		key;
	int			(*function)(int, int, char**);
}				t_fonctions_menu_game;

typedef struct 	s_menu
{
	char		key;
	int			(*function)(int l, int c);
}				t_menu;

typedef struct 	s_element_pile t_item_pile;
struct 			s_element_pile
{
    int 		x;
    int 		y;
    t_item_pile *next;
};

typedef struct 	s_pile
{
	t_item_pile* first;
}				t_pile;

/*---- functions ----*/

int				game_casu(int l, int c);
int 			game_hard(int l, int c);
int				game_blind(int l, int c);
int				game_octoview(int l, int c);
int				menu_check(char in, t_octocat infos, char** maze);
int				quit();

int*     		nb_rand(int seed);
int* 			choose_size(int* taille);

void			print_maze(char** maze);
void			maze_menu();
void			print_maze_blind(char** maze);
void    		print_raw_maze(char** maze, int l, int c);
void    		print_blind_maze(char** maze, int l, int c);
void    		print_octo_maze(char** maze, int l, int c, t_octocat infos);
void			maze_menu_hard();
void			maze_menu_blind();
void			menu_main();
void			print_help();
void			hello();
void 			clear_getchar();
void   			stack(t_pile* pile, int neo_x, int neo_y);
void    		move_algo(int* x, int* y, char** maze, t_pile* pile);

char*			readLine();
char* 			get_sequence();

char**			give_maze_tab();
char**  		rand_maze(char** maze, int l, int c);
char**  		create_filled_maze(int l, int c);

t_octocat		init_octocat(char** maze);
t_item_pile     destack(t_pile* pile);
t_pile*     	init_stack();

#endif
