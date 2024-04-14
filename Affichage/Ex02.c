/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:43:34 by adelat            #+#    #+#             */
/*   Updated: 2024/04/14 13:17:48 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int age;
    int soeur;
    int frere;
    char first_letter;
    float six_pi;
    unsigned int way_too_long;
    int test;

    printf("Quel âge as-tu ?\n");
    if (scanf("%d", &age) == 1)
        {
        printf("Combien de soeur(s) as-tu ?\n");
        if (scanf(" %d", &soeur) == 1)
            {
            printf("Combien de frère(s) as-tu ?\n");
            if (scanf(" %d", &frere) == 1)
                {
                printf("Quel est ton prénom ?\n");
                if ((scanf(" %c", &first_letter) == 1) && ((first_letter >= 'a' && first_letter <= 'z') || (first_letter >= 'A' && first_letter <= 'Z')))
                    {
                        test = 0;
                    }
                else
                    {
                    printf("Merci de rentrer un prénom !\n");
                    test = 1;
                    }
                }
            else
                {
                printf("Merci de rentrer un nombre correct !\n");
                test = 1; 
                }
            }
        else
            {
            printf("Merci de rentrer un nombre correct !\n");
            test = 1;
            }
        }
        else
            {
            printf("La valeure rentrée n'est pas un nombre !\n");
            test = 1;
            }
        six_pi = 3.141592;
        way_too_long = 	INT_MAX ;
        way_too_long *= 2;
    if (test == 0)
        {
        printf("\n\n\nL'utilisateur a %d ans, il a %d soeur(s) et %d frère(s), et son prénom commence par un %c.\nSi jamais tu te demandais, voici pi et ses 6 premières décimales: %f, et le nombre correspondant a deux fois la valeur MAX d'un int: %u !\n", age, soeur, frere, first_letter, six_pi, way_too_long);
        }
    return 0;
}