#include "push_swap.h"

// ************************  < 1 >  *****************************
int ft_length(char **str, char *sep, int size)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (i < size)
	{
		l += ft_strlen(str[i]);
		i++;
	}
	l += ft_strlen(sep) * (size - 1);
	return (l);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
		count++;
	while (src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *str;
	int i;

	str = NULL;
	i = 0;
	if (size <= 0)
	{
		str = malloc(sizeof(char) * 1);
		*str = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * ft_length(strs, sep, size) + 1);
	if (!str)
		return (str);
	str[i] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

int max_min_element(t_list *stack, int *ret_min)
{
	int max;
	int min;
	int ret_max;

	ret_max = 1;
	*ret_min = 1;
	max = stack->content;
	min = stack->content;
	int pos = 1;
	while (stack->next)
	{
		pos++;
		if (max < stack->next->content)
		{
			max = stack->next->content;
			ret_max = pos;
		}
		if (min > stack->next->content)
		{
			min = stack->next->content;
			*ret_min = pos;
		}
		stack = stack->next;
	}
	return (ret_max);
}

void aff(t_list *stack_a, t_list *stack_b, int size)
{
	printf("------Start-----\n");
	while (size)
	{
		if (stack_a)
		{
			printf(" %d| %d\t", stack_a->content, stack_a->flag);
			stack_a = stack_a->next;
		}
		else
		{
			printf("  |   \t");
		}
		if (stack_b)
		{
			printf("%d| %d", stack_b->content, stack_b->movs);
			stack_b = stack_b->next;
		}
		size--;
		printf("\n");
	}
	printf("-\t-\na  \tb\n");
	printf("------End-----\n");
}

// ************************  < 5 >  *****************************
//
//
// ************************  < 1 >  *****************************
void is_sorted(t_list *stack_a)
{
	t_list *tmp;
	// int cont[MAX_INT] = {0};

	tmp = stack_a->next;
	while (stack_a->next)
	{
		tmp = stack_a->next;

		while (tmp)
		{
			if (stack_a->content > tmp->content)
				return;
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
	exit(write(1, "Already Sorted :)\n", 19) & 0);
}

void indx_stack(t_list **stack)
{
	t_list *tompo;
	tompo = *stack;
	int i = 0;
	while (tompo)
	{
		tompo->indx = i;
		i++;
		tompo = tompo->next;
	}
}

t_list *get_best_move(t_list *stack_b)
{
	stack_b->min_move = INT_MAX;
	t_list *tmp = stack_b;
	int i = ft_lstsize(stack_b);
	while (i--)
	{
		if (tmp->movs < stack_b->min_move)
			stack_b->min_move = tmp->movs;
		tmp = tmp->next;
	}
	tmp = stack_b;
	while (tmp)
	{
		if (tmp->movs == stack_b->min_move)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

t_list *min_element(t_list *a)
{
	int min = a->content;
	t_list *tmp = a;
	while (tmp)
	{
		if (min > tmp->content)
		{
			min = tmp->content;
		}
		tmp = tmp->next;
	}
	while (a)
	{
		if (a->content == min)
			return (a);
		a = a->next;
	}
	return (NULL);
}

t_list *max_element(t_list *stack)
{
	int max = stack->content;
	t_list *tmp = stack;
	while (tmp->next)
	{
		if (max < tmp->next->content)
		{
			max = tmp->next->content;
		}
		tmp = tmp->next;
	}
	while (stack)
	{
		if (stack->content == max)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

// ************************  < 5 >  *****************************
//
//
// ************************  < 1 >  *****************************
int	mymax(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

void	full_push(t_list **stack_a, t_list **stack_b)
{
	t_list *tmp = *stack_a;
	while(tmp)
	{
		int a = fun((*stack_a), tmp);
		fun1(stack_a, stack_b, tmp, a);
		tmp = *stack_a;
	}
}

void	mn_te7t_lfo9(t_list **stack_a, t_list *test, int a)
{
	while(1)
	{
		if((*stack_a)->content == test -> content)
			break;
		if(a == 0)
			rra(stack_a, ft_lstsize(*stack_a));
		if(a == 1)
			ra(stack_a, ft_lstsize(*stack_a));
	}
}

void fun1(t_list **stack_a, t_list **stack_b, t_list *test, int a)
{
	mn_te7t_lfo9(stack_a, test, a);
	pb(stack_b, stack_a, ft_lstsize(*stack_a));
}

int fun(t_list *stack, t_list *elem)
{
	int kk = 0;
	t_list *test = stack;
	int size = ft_lstsize(stack);
	while (1)
	{
		if(elem -> content == test -> content)
				break ;
		test = test -> next;
		kk++;
	}

	if(kk >= size/2)
		return 0;
	return 1;
}

// ************************  < 5 >  *****************************
//
//
// ************************  < 1 >  *****************************
void copyLinkedListToArray(t_list *head, int *arr, int size) 
{
	t_list *temp = head;
	for (int i = 0; i < size && temp != NULL; i++) {
		arr[i] = temp->content;
		temp = temp->next;
	}
}

int	sort_and_get_mid(int *tab, int size)
{
	int	i;
	int	j;
	int	swp;

	i = 0;
	j = size-1;
	while (i < j)
	{
		if (tab[i] > tab[i + 1])
		{
			swp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swp;
			i = 0;
		}
		else
			i++;
	}
	int mid = tab[j / 2];
	return (mid);
}

// ************************  < 5 >  *****************************

int main(int ac, char **av)
{
	int i = 0;
	int j;
	char **c;

	if (ac > 1)
	{
		if (av[1][0] == '\0')
			return (write(2, "Error ! Empty String\n", 22));
		c = ft_split(ft_strjoin(ac - 1, av + 1, " "), ' ');
		while (c[i])
		{
			if (ft_isdigit(c[i]))
				return (write(2, "Error !", 8));
			i++;
		}
		i = 0;
		while (c[i])
		{
			j = i + 1;
			while (c[j])
			{
				if (!strcmp(c[i], c[j]))
					return (write(2, "Error !!", 9));
				j++;
			}
			i++;
		}
	}
	else
		return (write(2, "Error Args !", 13));

	t_list *stack_a = NULL;
	t_list *stack_b = NULL;

	for (i = 0; c[i]; i++)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(atoi(c[i])));
	}
	int size = i;
	is_sorted(stack_a);
	if (size <= 3)
	{
		sort_III(&stack_a);
	}
	else if (size <= 5)
	{
		sort_V(&stack_a, &stack_b);
	}
	else if (size > 5)
	{
		int sz = size;
		indx_stack(&stack_a);
		aff(stack_a, stack_b, ft_lstsize(stack_a));
		full_push(&stack_a, &stack_b);
		aff(stack_a, stack_b, mymax(ft_lstsize(stack_a), ft_lstsize(stack_b)));


		int *arr = (int*)malloc(ft_lstsize(stack_b) * sizeof(int));
		copyLinkedListToArray(stack_b, arr, sz);

		int mid = sort_and_get_mid(arr, size);
		printf("MID elm -------> [[%d]]\n", mid);
	}
}