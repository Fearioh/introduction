/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exercice1_hook.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:59:38 by hook              #+#    #+#             */
/*   Updated: 2024/04/17 15:18:00 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

//! Creer une fonction qui prend en parametre un tableau de int et sa taille
//! Trie ce tableau dans l'ordre croissant
//! Si le tableau est deja trie alors afficher "Tab already sorted" suivie d'un saut a la ligne
//! Tu devras creer un main de test qui test un tableau non trie et un tableau trie
//! Pour les autres cas d'erreur libre a toi de choisir comment tu les geres.

static inline bool ft_check_if_sorted(int *tab, int size)
{
    int i = 0;
    
    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
            return false;
        i++;
    }
    return true;
}

static inline bool ft_check(int *tab, int size)
{
    if (tab == NULL)
        return false;
    if (size < 2)
        return false;
    return true;

}

static inline void ft_sort_int_tab(int *tab, int size)
{
    if (!ft_check(tab, size))
    {
        printf("❌ Error: Invalid tab\n");
        return ;
    }
        
    if (ft_check_if_sorted(tab, size))
    {
        printf("❌ Error: Tab already sorted\n");
        return;
    }

    int i = 0;
    int j = 0;
    int tmp = 0;

    while (i < size)
    {
        j = 0;
        while (j < size - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}


int main(void)
{
    int *tab0 = NULL;
    int tab1[] = {1, 2, 3, 4, 5};
    int tab2[] = {4, 2, 5, 9};
    int tab3[] = {1};

    ft_sort_int_tab(tab0, 0);
    printf("\n\n----------------\n\n");
    ft_sort_int_tab(tab1, 5);
    ft_sort_int_tab(tab2, 4);
    ft_sort_int_tab(tab3, 1);
    printf("\n\n----------------\n\n");

    int i = 0;
    while (i < 5)
    {
        printf("%d\n", tab1[i]);
        i++;
    }

    printf("\n\n----------------\n\n");
    
    i = 0;
    while (i < 4)
    {
        printf("%d\n", tab2[i]);
        i++;
    }
}