#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new->indx = -1;
	new->flag = -1;
	new -> next = NULL;
	return (new);
}
