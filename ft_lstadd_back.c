#include "push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = NULL;
	if (!*lst)
		return (ft_lstadd_front(lst, new));
	ft_lstlast(*lst)->next = new;
}

int ft_lstsize(t_list *lst)
{
	int size;
	int num;

	if (!lst)
		return (0);
	size = 0;
	num = lst->content;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}