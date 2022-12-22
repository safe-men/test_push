#include "push_swap.h"
#include <stdio.h>

int ft_Fmid(t_list *a)
{
    int T[ft_lstsize(a)];
    int i;
    int j;
    int k;
    int tr;

    i = 0;
    j = 0;
    while(a!= NULL)
    {
        T[i] = a->content;
        a = a->next;
        i++;
    }
    
   
	while (j < i)
	{
		k = j + 1;
		while (k < i)
		{
			if (T[j] > T[k])
			{
				tr = T[j];
				T[j] = T[k];
				T[k] = tr;
			}
			k++;
		}
		j++;
	}
    return (T[i/5]);
   
}


int checkPosition(t_list **a, int l)
{
    t_list *tmp;
    int i;

    i = 0;
    tmp = *a;
    while (i < 2 * ft_lstsize(tmp)/3)
    {
        if (tmp ->content <l)
            return (1);
        i++;
        tmp = tmp->next;
    }
    // while (i < 2*ft_lstsize(tmp)/3)
    // {
    //     if (tmp ->content <l)
    //         return (2);
    //     i++;
    //     tmp = tmp->next;
    // }
    return (0);
}
int CheckError(t_list **a)
{
    t_list  *tmp;

    tmp = *a;

    while (tmp != NULL &&tmp -> next != NULL)
    {
        if (tmp->content <= tmp -> next -> content)
            return (0);
        tmp = tmp ->next;
    }
    return (1);
}
int check(t_list *a)
{
    int i;

    i = a -> content;
    while (a!= NULL)
    {
        if (i < a -> content)
            i = a -> content;
        a = a -> next;
    }
    return (i);
}
int checkPm(t_list **a)
{
    int i;
    t_list *tmp;

    tmp = *a;
    i = tmp->content;
    while (tmp!= NULL)
    {
        if(i > tmp -> content)
            i = tmp->content;
        tmp = tmp->next;
    }
    return (i);
}
int checkWithout(t_list *a, int d)
{
    int i;
    i= 0;
    while (a != NULL)
    {
        if (i==d)
            return (a -> content);
        i++;
    a = a-> next;
    }
    return (0);
}


void    ft_sort3(t_list **a)
{


    if ((*a) ->content == check(*a))
    {
        ra(a);
     
      
    }
    if ((*a) -> next -> content == check(*a)){
        rra(a);
      
    }
    if ((*a)-> content > (*a) -> next ->content)
     {
        sa(a);
       
     }
  
 
}   
int CheckErrorforsmall(t_list **a, int i)
{
    t_list *tmp;
    int c;

    c = 0;
    tmp = *a;

    while (c < 2*ft_lstsize(tmp) /3)
    {
        if (tmp -> content == i)
            return (1);
        tmp = tmp-> next;

    }
    return (0);
}
int CheckErrorforsmall2(t_list **a, int i)
{
    t_list *tmp;
    int c;

    c = 0;
    tmp = *a;

    while (c < 2*ft_lstsize(tmp) /3)
    {
        if (tmp -> content < i)
            return (1);
        tmp = tmp-> next;

    }
    return (0);
}
void  ft_sort4(t_list **a)
{
    t_list  *b;
    int i;
    

   
    b= NULL;
i = checkPm(a);
    while ((*a) -> content != i)
    {
        if (CheckErrorforsmall(a,i) == 1)
        {ra(a);
      
        }
        else 
    {
        rra(a);
      
    }
    }
    pb(a,&b);

    ft_sort3(a);
    pa(a,&b);
  
 
  
}
void   ft_sort5(t_list **a)
{
    t_list  *b;
    
    int c;

   
   b = NULL;
   c = checkPm(a);

while ((*a) -> content != c)
{
    if (CheckErrorforsmall(a,c) == 1)
    {
    ra(a);
 
    }else
    {rra(a);
  
    }
}
pb(a,&b);

ft_sort4(a); 
pa(a,&b);



       
}
void ft_sort9(t_list **a)
{
    t_list *b;
    t_list *tmp;
 
    int i;

    

    b = NULL;
    tmp = *a;
    while (ft_lstsize(tmp) > 5)
    {
        i = checkPm(&tmp);
        if (tmp -> content == i)
            {
            pb(&tmp,&b);
   
            }

        else 
        {
            if (CheckErrorforsmall(&tmp,i) == 1)
            {ra(&tmp);
        
            }
            else
            {
                rra(&tmp);
             
            }
        }
    }
    
    ft_sort5(&tmp);
    while (b!= NULL)
    {
        pa(&tmp,&b);
    
    }

    *a = tmp;
   

}


int ft_midele(t_list **a)
{
    int i;
    t_list *tmp;

    tmp = *a;
    i = 0;
    while (i < (ft_lstsize(tmp)/2))
    {
        tmp =tmp-> next;
        i++;
    }
    return (tmp -> content);
}
void     ft_sort(t_list **a)
{
    int i;
    int j;
    int d;
    int jj = 0;

    t_list *b;
    t_list *tmp;
    t_list *l,*r;
    j = 0;
    b = NULL;
  

  
    tmp = *a;
        while (ft_lstsize (tmp) > 5)
        {
        i = ft_Fmid(tmp);
        j =0;
        while (j < (ft_lstsize(tmp) /5))
         {
             if(tmp ->content < i)
             {
              
                    pb(&tmp,&b);
               
               
                  if (ft_lstsize(b) > 1 && b->content < ft_Fmid(b) && CheckErrorforsmall2(&tmp,i) == 1)
                    rr(&b,&tmp);
                if (ft_lstsize(b) > 1 && b-> content < ft_Fmid(b))
                    ra(&b);
        
                l = b;
                while ( l != NULL && l-> next!= NULL && CheckError(&l) == 0)
                {
                    d = 0;
               
                
            if (l -> next->next != NULL && l-> content > l-> next ->content && l-> next->content < l->next-> next->content)
            {
                rb(&l);
             
                d = 1;
            }
            if (l->content < l->next->content)
            {
                sb(&l);
          
            }
            if(d == 1)
            {
                rrb(&l);
             
            }
            
            
            l = l->next;
            }
             }
            
            else
            {
                if (checkPosition(&tmp,i) == 1)
                {
                    ra(&tmp);
                }

                else{
                    rra(&tmp);
                   
                }
           }
           j++;
        }
        
        }
        if (ft_lstsize(tmp) == 5)
        ft_sort5(&tmp);
        if (ft_lstsize(tmp) == 4)
        ft_sort4(&tmp);
        if (ft_lstsize(tmp) == 3)
        ft_sort3(&tmp);
        if (ft_lstsize(tmp) == 2)
        sa(&tmp);
        while (b!= NULL)
        {
            pa(&tmp,&b);
           
        }
        
    *a = tmp;
    
}

// void     ft_sort(t_list **a)
// {
//     int i;
//     int j;
//     int d;
//     int jj = 0;

//     t_list *b;
//     t_list *tmp;
//     t_list *l,*r;
//     j = 0;
//     b = NULL;
  
//     tmp = *a;
//     while (ft_lstsize(tmp) > 5)
//     {
//         j = 0;
//         i = ft_Fmid(tmp);
//         while (j < ft_lstsize(tmp)/5)
//         {
//             if (tmp -> content < i)
//             {
//                 pb(&tmp,&b);
//                 if (b->content < ft_Fmid(b) && CheckErrorforsmall2(&tmp,i) == 1)
//                     rr(&b,&tmp);
//                 if (b -> content < ft_Fmid(b))
//                 rb(&b);
//                 l = b;
//                 while (l != NULL &&  l -> next != NULL && CheckError(&l) == 0)
//                 {
//                     d = 0;
  
//             if (l -> next->next != NULL && l-> content > l-> next ->content && l-> next->content < l->next-> next->content)
//             {
//                 rb(&l);
             
//                 d = 1;
//             }
//             if (l->content < l->next->content)
//             {
//                 sb(&l);
          
//             }
//             if(d == 1)
//             {
//                 rrb(&l);
//             }

//             l = l->next;
//                 }
//             }
//             else
//             {
//                  if (checkPosition(&tmp,i) == 0)
//                     rra(&tmp);
//                     else 
//                     ra(&tmp);
                   
                
//             }
//         }
//     }
//     ft_sort5(&tmp);
//     while (b!= NULL)
//         {
//             pa(&tmp,&b);
           
//         }
        
//     *a = tmp;
  
    
// }


// int ft_totalsort(t_list **a)
// {
//     int i;

//     if (ft_lstsize(*a) == 3)
//         i = ft_sort3(a);
//     else if(ft_lstsize(*a) == 4)
//         i = ft_sort4(a);
//     else if(ft_lstsize(*a) == 5)
//         i = ft_sort5(a);
//     else 
//         i = ft_sort(a);
//     return (i);
// }
int main(int argc, char **argv)
{
    t_list  *l;
    int i;
    l = ft_lstnew(atoi(argv[argc - 1]));
    argc--;
    while (--argc > 0)
    {
        //argc--;
        ft_lstadd_back(&l,ft_lstnew(atoi(argv[argc])));   
    }
  ft_sort(&l);
    //  printf("\n the list === %d",CheckError(&l));
    // while (l!= NULL)
    // {
    //     printf("\n||%d||",l ->content);
    //     l = l->next;
    // }
    // printf("\n\n%d",i);
   
}
   

// int main()
// {
//     t_list *a;
//     t_list *l;
//     int i;
//     a = ft_lstnew(1);
//     int tmp;


//       ft_lstadd_back(&a,ft_lstnew(-3));
//      ft_lstadd_back(&a,ft_lstnew(-9));
    
//     ft_lstadd_back(&a,ft_lstnew(77)); 
//    ft_lstadd_back(&a,ft_lstnew(2)); 

//    ft_lstadd_back(&a,ft_lstnew(912)); 
//     ft_lstadd_back(&a,ft_lstnew(692)); 
//     ft_lstadd_back(&a,ft_lstnew(-192)); 
//     ft_lstadd_back(&a,ft_lstnew(78)); 
//     ft_lstadd_back(&a,ft_lstnew(-123456)); 


//        ft_lstadd_back(&a,ft_lstnew(50));
//        ft_lstadd_back(&a,ft_lstnew(-500));
//        ft_lstadd_back(&a,ft_lstnew(96));
//        ft_lstadd_back(&a,ft_lstnew(123));
//        ft_lstadd_back(&a,ft_lstnew(147));
//        ft_lstadd_back(&a,ft_lstnew(69));
//        ft_lstadd_back(&a,ft_lstnew(59));
//        ft_lstadd_back(&a,ft_lstnew(-5000));
//        ft_lstadd_back(&a,ft_lstnew(500));
//  ft_lstadd_back(&a,ft_lstnew(630));

//    ft_lstadd_back(&a,ft_lstnew(-4));
//     ft_lstadd_back(&a,ft_lstnew(80));
//      ft_lstadd_back(&a,ft_lstnew(9));
//     ft_lstadd_back(&a,ft_lstnew(-8));
//        ft_lstadd_back(&a,ft_lstnew(14));
//     ft_lstadd_back(&a,ft_lstnew(-66));
//      ft_lstadd_back(&a,ft_lstnew(70));
//      ft_lstadd_back(&a,ft_lstnew(8));
//       ft_lstadd_back(&a,ft_lstnew(-31));
//         ft_lstadd_back(&a,ft_lstnew(2002));
//          ft_lstadd_back(&a,ft_lstnew(18));
//             ft_lstadd_back(&a,ft_lstnew(-700));
//            ft_lstadd_back(&a,ft_lstnew(-227));
//             ft_lstadd_back(&a,ft_lstnew(990));
//              ft_lstadd_back(&a,ft_lstnew(712));
    
    
    

//    i = ft_totalsort(&a);
//  //printf("\n\n\n CheckError === %d",CheckError(&a));

//    while (a!= NULL)
//    {
//         printf("\n%d",a->content);
//         a = a->next;
//    }
//    printf("\n\n%d",i);
  

   
// }
    