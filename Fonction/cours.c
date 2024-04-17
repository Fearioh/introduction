/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cours.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:19:49 by adelat            #+#    #+#             */
/*   Updated: 2024/04/17 10:38:45 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//! Ecrire une fonction ft_big_4 qui renvoie le plus grand nombre des 4 en
//! utilisant ft_big_2 qui renvoie le plus grand de 2 nombres 
//! ecrire deux test dans le main :) 

#include <stdio.h>

int ft_big_4(int nombre1, int nombre2, int nombre3, int nombre4);

int ft_big_2(int nombre1, int nombre2)
{
    if (nombre1 > nombre2)
        return nombre1;
    else
        return nombre2;
}

int main(void)
{
    int nombre = ft_big_4(1, 5, 9, 12);
    
    printf("Le plus petit nombre de la premiere serie est :%d\n", nombre);
    nombre = ft_big_4(12, 27, 5, 14);
    printf("Le plus petit nombre est :%d\n", nombre);
}

int ft_big_4(int nombre1, int nombre2, int nombre3, int nombre4)
{
    int nombre = ft_big_2(nombre1, nombre2);

    nombre = ft_big_2(nombre, nombre3);
    nombre = ft_big_2(nombre, nombre4);

    return nombre;
}