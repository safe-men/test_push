#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	if (!lst || !new)
		return ;
	l = *lst;
	if ((*lst) == NULL)
	{
		*lst = new;
		return ;
	}
	while (l -> next != NULL)
		l = l -> next;
	l -> next = new;
	new ->prev = l;
}
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = (*lst);
	//(*lst) -> prev = new;
	(*lst) = new;
}
t_list	*ft_lstlast(t_list *lst)
{
	if (!(lst))
		return (NULL);
	while ((lst) -> next != NULL)
		lst = (lst) -> next;
	return (lst);
}

t_list	*ft_lstnew(int content)
{
	t_list	*l;

	l = (t_list *)malloc(sizeof(t_list));
	if (!l)
		return (NULL);
	l -> content = content;
	l -> next = NULL;
	l -> prev = NULL;
	return (l);
}
int	ft_lstsize(t_list *lst)
{
	int	i;

if (!lst)
return (0);
	i = 0;
	while (lst != NULL)
	{
		lst =lst -> next;
		i++;
	}
	return (i);
}
void    pa(t_list **a, t_list **b)
{
    t_list *tmp;

    if (ft_lstsize(*b) != 0)
    {
        ft_lstadd_front(a, ft_lstnew((*b) -> content));
        tmp = (*b) -> next;
        (*b) -> next = *b;
        *b = tmp;
    }
    printf("\npa");

}

void    pb(t_list  **a, t_list **b)
{
    pa (b,a);
   
}