#include "push_swap.h"

void    ra(t_list **a)
{
    int tmp;
    int tmp1;
    t_list *ll;

    ll = *a;
    tmp = ft_lstlast(*a) -> content;
    
    while (ll -> next  != NULL)
    {
        tmp1 = ll -> content;
        ll -> content = ll -> next -> content;
        ll -> next -> content = tmp1;
        ll = ll -> next;
    }
     printf("\nra");

}
void    rb(t_list **b)
{
    ra(b);
     
}
void    rr(t_list **a,t_list **b)
{
        int tmp;
    int tmp1;
    t_list *ll;

    ll = *a;
    tmp = ft_lstlast(*a) -> content;
    
    while (ll -> next  != NULL)
    {
        tmp1 = ll -> content;
        ll -> content = ll -> next -> content;
        ll -> next -> content = tmp1;
        ll = ll -> next;
    }

    ll = *b;
    tmp = ft_lstlast(*b) -> content;
    while (ll -> next  != NULL)
    {
        tmp1 = ll -> content;
        ll -> content = ll -> next -> content;
        ll -> next -> content = tmp1;
        ll = ll -> next;
    }
    printf("\nrr");
    // ra(a);
    // ra(b);
    
}