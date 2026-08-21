#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *)) {
  t_list *cur;

  if (!lst || !*lst)
    return;
  cur = *lst;
  while (cur) {
    t_list *tmp = cur;
    cur = cur->next;
    if (del)
      del(tmp->content);
    free(tmp);
  }
  *lst = NULL;
}
