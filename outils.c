#include "push_swap.h"


// void	moves_indx(t_list **stack_a, t_list **stack_b)
// {
// 	t_list *first_tmp;
// 	t_list *second_tmp;
// 	t_list *b_tmp = *stack_b;
// 	t_list *max;
// 	t_list *min;
	
// 	max = max_element(*stack_a);
// 	min = min_element(*stack_a);
// 	while(b_tmp)
// 	{
// 		first_tmp = *stack_a;
// 		second_tmp = (*stack_a)->next;
// 		b_tmp->place = min;
// 		if (b_tmp->content > max->content)
// 			b_tmp->movs = 1 + up_or_down_moves(min->indx, b_tmp->indx, *stack_a, *stack_b);
// 		else if (b_tmp->content < min->content)
// 			b_tmp->movs = 1 + up_or_down_moves(min->indx, b_tmp->indx, *stack_a, *stack_b);
// 		else 
// 		{
// 				while(second_tmp)
// 				{
					
// 					if (b_tmp->content > first_tmp->content && b_tmp->content < second_tmp->content)
// 					{
// 						b_tmp->movs = 1 + up_or_down_moves(second_tmp->indx, b_tmp->indx, *stack_a, *stack_b);
// 						b_tmp->place = second_tmp;
// 						break;
// 					}
// 					if (b_tmp->content < first_tmp->content && b_tmp->content > ft_lstlast(first_tmp)->content)
// 					{
// 						b_tmp->movs = 1;
// 						b_tmp->place = first_tmp;
// 						break;
// 					}
// 					second_tmp = second_tmp->next;
// 					first_tmp = first_tmp->next;
// 				}
// 		}
// 		b_tmp = b_tmp->next;
// 	}
// }