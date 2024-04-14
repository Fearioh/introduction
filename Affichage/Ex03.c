/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:45:13 by adelat            #+#    #+#             */
/*   Updated: 2024/04/14 13:25:17 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    double a;
    double b;
    double c;
    int d;
    int e;
    
    printf("Veuillez choisir un premier nombre A\n");
    if (scanf("%lf", &a) == 1)
        {
            printf("Veuillez choisir un deuxième nombre B\n");
            if ((scanf("%lf", &b) == 1) && (b != 0))
                {
                    c = a + b;
                    printf("La somme de A + B vaut %.9lf\n", c);
                    c = a * b;
                    printf("Le résultat de A x B vaut %.9lf\n", c);
                    c = a - b;
                    printf("Le résultat de A - B vaut %.9lf\n", c);
                    c = a / b;
                    printf("La division de A par B vaut %.9lf\n", c);
                    d = (int)a;
                    e = (int)b;
                    c = d % e;
                    printf("Le résultat de la partie entière de A modulo la partie entière de B vaut %.9lf\n", c);
                    return 0;
                } 
            else
                {
                    printf("Merci de bien vouloir rentrer un nombre B correct et différent de 0\n");
                                   
                }
        }
        else 
        {
            printf("Merci de bien vouloir rentrer un nombre A correct\n");
        }
    return 0;
}