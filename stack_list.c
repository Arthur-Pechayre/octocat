/*                                                                                                          
** stack_list.c for stack_list.c in /home/pechay_a/Desk/octocat/stack_list.c                      
**                                                                                                          
** Made by PECHAYRE Arthur                                                                                  
** Login   <pechay_a@etna-alternance.net>                                                                   
**                                                                                                          
** Started on  Mon Jan  18 09:00:00 2015 PECHAYRE Arthur                                                     
** Last update Fri Jan  22 16:59:59 2015 PECHAYRE Arthur                                                     
*/

#include "libmy/libmy.h"
#include "head.h"

t_pile*     init_stack()
{
    t_pile*         pile;
    t_item_pile*    neo_elem;

    pile = malloc(sizeof(*pile));
    neo_elem = malloc(sizeof(*neo_elem));
    neo_elem->x = -1;
    neo_elem->y = -1;
    neo_elem->next = NULL;
    pile->first = neo_elem;
    return(pile);
}

void    stack(t_pile* pile, int neo_x, int neo_y)
{
    t_item_pile*    neo_elem;

    neo_elem = malloc(sizeof(*neo_elem));
    neo_elem->x = neo_x;
    neo_elem->y = neo_y;
    neo_elem->next = pile->first;
    pile->first = neo_elem;
}

t_item_pile     destack(t_pile* pile)
{
    t_item_pile     elem_out;
    t_item_pile*    elem_destack;

    elem_destack = pile->first;
    elem_out.x = -1;
    if (pile != NULL && pile->first != NULL)
    {
        elem_out.x = elem_destack->x;
        elem_out.y = elem_destack->y;
        pile->first = elem_destack->next;
        free(elem_destack);
    }
    return(elem_out);
}
