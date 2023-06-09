#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <ctype.h>

typedef struct	s_list
{
	struct s_list *prev;
	struct s_list *place;
	int indx;
	int content;
	int flag;
	int movs;
	int min_move;
	struct s_list *next;
} t_list;

int	ft_atoi(const char *str);


int	mymax(int a, int b);

t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_beforelast(t_list *lst);


int		ft_isdigit(char *c);
char	*ft_substr(char *s, int start, int len);
int		ft_strlen(char *s);
char	**ft_split(char *str, char c);
char	*ft_strdup(char *s1);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);

void	sa(t_list **stack, int index);
void	sb(t_list **stack, int index);
void	ss(t_list **stack_a, t_list **stack_b, int index);

void	rb(t_list **stack_b, int index);
void	ra(t_list **stack_a, int index);
void	rr(t_list **stack_a, t_list **stack_b, int index);

void	rra(t_list **stack_a, int index);
void	rrb(t_list **stack_b, int index);
void	rrr(t_list **stack_a, t_list **stack_b, int index);

void	pa(t_list **stack_a, t_list **stack_b, int indx_b);
void	pb(t_list **stack_b, t_list **stack_a, int indx_a);



void	sort_III(t_list **stack_a);
void	sort_V(t_list **stack_a, t_list **stack_b);
int		max_min_element(t_list *stack, int *ret_min);


void aff(t_list *stack_a, t_list *stack_b, int size);

void	indx_stack(t_list **stack);
void	fun1(t_list **stack_a, t_list **stack_b, t_list *test, int a);
int		fun(t_list *stack, t_list *elem);
void	full_push(t_list **stack_a, t_list **stack_b);
void	mn_te7t_lfo9(t_list **stack_a, t_list *test, int a);
int		be_to_the_top(t_list *stack,t_list *elem);
void	moves_indx(t_list **stack_a, t_list **stack_b);
void	push_b_to_a(t_list **stack_b, t_list **stack_a, t_list *bst_contnt);
t_list	*max_element(t_list *stack);
t_list	*min_element(t_list *a);
void	push_mid(t_list **b, t_list **a, int mid);

#endif
