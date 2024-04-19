/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exercice1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:13:27 by adelat            #+#    #+#             */
/*   Updated: 2024/04/17 15:12:38 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//! Creer une fonction qui prend en parametre un tableau de int et sa taille
//! Trie ce tableau dans l'ordre croissant
//! Si le tableau est deja trie alors afficher "Tab already sorted" suivie d'un saut a la ligne
//! Tu devras creer un main de test qui test un tableau non trie et un tableau trie
//! Pour les autres cas d'erreur libre a toi de choisir comment tu les geres.


#include <stdio.h>

void ft_affichage(int *tab, int size, int sort)
{
    int i = 0;

    if (sort == 0)
        printf("Tab already sorted\n");
    else
    {
        while (i < size)
        {
            printf("%d\t", tab[i]);
            i++;
        }
        printf("\n");
    }
}

void ft_sort(int *tableau, int size)
{
    int i = 0;
    int a = 0;
    int sort = 0;

    if (tableau[0])
    {
        while (i < size)
        {
            if (tableau[i] > tableau[i+1])
            {
                a = tableau[i];
                tableau[i] = tableau[i+1];
                tableau[i+1] = a;
                i = -1;
                sort++;
            }
            i++;
        }
        ft_affichage(tableau, size, sort);
    }
    else
        printf("Le tableau est vide !\n");
}

int main(void)
{
    int tab1[] = {1, 2, 3, 4};
    int tab2[] = {8, 6 , 7, 5};
    int tab3[] = {1};

    ft_sort(tab1, 4);
    ft_sort(tab2, 4);
    //ft_sort(NULL, 834);
    ft_sort(tab3, 1);
}