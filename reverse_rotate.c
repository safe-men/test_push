#include "push_swap.h"

// void    swap(int a,int b)
// {
//     int i;

//     i = a;
//     a= b;
//     b = i;
// }
void    rra(t_list **a)
{
    int tmp;
    t_list *b;
    int i;
    int l;

    b = *a;
    i = ft_lstlast(*a) -> content;
    tmp = b -> content;
    while (b -> next != NULL)
    {
        l = tmp;
       tmp = b -> next -> content;
       b -> next -> content = l;
       b = b -> next;
       
        
    }
    (*a) -> content = i;
    printf("\nrra");
}
void    rrb(t_list **b)
{
    rra(b);
   
}

void    rrr(t_list **a, t_list **b)
{
    rra (a);
    rra(b);
    
}
// int main()
// {
//     t_list *a;
//     t_list *l;
//     a = ft_lstnew(1);
 
//     ft_lstadd_back(&a,ft_lstnew(2));
//     ft_lstadd_back(&a,ft_lstnew(3));
//    ft_lstadd_back(&a,ft_lstnew(4));
    
//     l = a;

//     while (l != NULL)
//     {
//         printf("\n%d",l -> content);
//         l = l-> next;
//     }
//     rra(&a);
//     printf("\n\n");
//     while (a!= NULL)
//     {
//         printf("\n%d",a->content);
//         a = a-> next;
//     }
	
// }