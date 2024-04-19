/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exercice2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:22:03 by adelat            #+#    #+#             */
/*   Updated: 2024/04/17 15:43:08 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
! Creer une fonction reverse_tab_int qui inverse les element d'un tableau de int
! Exemple : 1 2 3 4 5 --> 5 4 3 2 1
! Ici les cas d'erreurs courant sont a gerer avec un print error : [NOM_DE_L'ERREUR]
! <3
*/

#include <stdio.h>

void ft_affichage(int *tab, int size)
{
    int i = 0;

    while (i < size)
    {
        printf("%d  ", tab[i]);
        i++;
    }
}

void ft_reverse_tab_int(int *tableau, int size)
{
    int i = 0;
    int a = 0;
    int ir = size - 1;

    if (tableau && size >= 2)
    {
        ft_affichage(tableau, size);
        printf("  ------> ");
        while (i < ir)
        {
            a = tableau[i];
            tableau[i] = tableau[ir];
            tableau[ir] = a;
            i++;
            ir--;
        }
        ft_affichage(tableau, size);
    }
    else if (tableau && size < 2)
        printf("error [NOT A TAB]");
    else
        printf("error [NO TAB]");
}

int main(void)
{
   // int tab1[] = {1};

    ft_reverse_tab_int(NULL, 1);
    printf("\n");
}