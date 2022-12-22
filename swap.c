#include "./libft/libft.h"
#include "push_swap.h"
#include <stdio.h>

void    sa(t_list **a)
{
    t_list *ll;
    int tmp;
    t_list *tmp1;

    if (ft_lstsize(*a) > 1)
    {
    tmp = (*a) -> content;
    (*a) -> content = (*a) -> next -> content;
    (*a) -> next -> content = tmp;
    }
    printf("\nsa");

}
void swap (int i,int j)
{
    int tmp;

    tmp = i;
    i = j;
    j = tmp;
}
void    ss(t_list **a, t_list **b)
{
    sa(a);
    sa(b);
     
}
void	sb(t_list **b)
{
	sa(b);
    
}
// int main()
// {
//     t_list *a;
//     t_list *l;
//     a = ft_lstnew(9);
//     int tmp;
 
//     ft_lstadd_back(&a,ft_lstnew(6));
//     ft_lstadd_back(&a,ft_lstnew(0));
//     ft_lstadd_back(&a,ft_lstnew(1));
//     ft_lstadd_back(&a,ft_lstnew(5));
//     ft_lstadd_back(&a,ft_lstnew(3));
//    l = ft_mid(&a);
//     printf("%d",l->content);
// }