/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exercice0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:41:05 by adelat            #+#    #+#             */
/*   Updated: 2024/04/17 13:47:21 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
! Ecrire une fonction qui prend en parametre deux string
! Et copie la premiere dans la deuxieme
! Si la taille de la string qui va acceuillir la copie est plus petite que la premiere retourner NULL
! Si la taille de la string qui va acceuillir la copie est nulle alors retourner NULL
! Si la taille de la premiere string est nulle retourner NULL
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_cleanstr(char *str1, int check)
{
    str1[check] = '\0';
    return str1;
}

char *ft_str1tostr2(char *str1, char *str2, int check)
{
    int n = 0;
    
    str2 = ft_cleanstr(str1, check);
    while (str1[n])
    {
        str2[n] = str1[n];
        n++;
    }
    return str2;
}

char *ft_checksize(char *str1, char *str2)
{
    int check1 = 0;
    int check2 = 0;

    while (str1[check1])
            check1++;
    while (str2[check2])
        check2++;
    if (check1 <= check2)
        str2 = ft_str1tostr2(str1, str2, check1);
    else
        str2 = "NULL";
    return str2;
        
}

char *ft_strcpy(char *str1, char *str2)
{   
    if ((str1[0] != '\0') && (str2[0] != '\0'))
        str2 = ft_checksize(str1, str2);
    else
        str2 = "NULL";
    return str2;
}

int main(void)
{
    
    char *str1 = strdup("Ceci est un test");
    char *str2 = strdup("Bonjour");

    char *str3 = ft_strcpy(str1, str2);
    printf("LA PHRASE COPIE --> %s\n", str3);

    free(str1);
    free(str2);
}



