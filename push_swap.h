#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include <stdio.h>

void    sa(t_list **a);
void	sb(t_list **b);
t_list  *ft_mid(t_list **a);
int check(t_list *a);
void    ss(t_list **a, t_list **b);
void    pa(t_list **a, t_list **b);
void    pb(t_list  **a, t_list **b);
void    ra(t_list **a);
void    rb(t_list **b);
void    rr(t_list **a, t_list **b);
void    pa(t_list **a, t_list **b);
void    rra(t_list **a);
void    rrb(t_list **b);
void    rrr(t_list **a, t_list **b);
t_list    *merge_sort(t_list **a);
void    ft_returnlst(t_list **l);
int checkWithout(t_list *a, int d);
void    ft_sort(t_list **a);
void  ft_sort4(t_list **a);
void  ft_sort5(t_list **a);
int ft_totalsort(t_list **a);
int CheckError(t_list **a);
void    ft_sort3(t_list **a);
void ft_sort6(t_list **a);
void ft_sort18(t_list **a);
int     ft_tst_sort(t_list **a);
int ft_Fmid(t_list *a);
int checkPosition(t_list **a, int l);
t_list	*ft_lstnew(int	content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
#endif
