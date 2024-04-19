/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exercice3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:43:56 by adelat            #+#    #+#             */
/*   Updated: 2024/04/17 16:12:12 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
! Creer une fonction ft_put_maj_1_2 qui met en majuscule 1 lettre sur 2
! et doit gerer avec un print les erreurs classiques :)
! <3

*/
#include <stdio.h>
#include <string.h>

void ft_affichage(char *str)
{
    int i = 0;

    while (str[i])
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

void ft_put_maj_1_2(char *homies)
{
    int i = 0;

    while(homies[i])
    {
        if((i%2 != 1) && (homies[i]) >= 'a' && (homies[i]) <= 'z')
            homies[i] = homies[i] - 32;
        if ((i%2 != 0) && (homies[i]) >= 'A' && (homies[i]) <= 'Z')
            homies[i] += 32;
        i++;
    }
    ft_affichage(homies);
}

int main(void)
{
    ft_put_maj_1_2(strdup("salut les homies !"));
}