/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cours.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:35:14 by adelat            #+#    #+#             */
/*   Updated: 2024/04/14 15:40:20 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


/*
*

- Creer un menu pour mcdonald, il contiendra 4 choix de menus suivi du prix.
- Le programme doit demander a l'utilisateur combien il souhaite de menu
- Une fois que le nombre de menu a ete comptabilise, le programme doit ecrire un recap de commande
qui contiendra toutes ces infos:

. Ce que le client a choisis comme menu ?
. En quelle quantitee ?
. Le prix de chaque lot de menu par nom de menu
. le prix total

Exemple:

Vous avez choisis: 3 menu mcfirst (16 euros), 2 menu bigmac (11) pour un total de : (27 euros)

- A la fin du recap, le programme doit demander si on souhaite recommander autre chose

*/

#include <stdio.h>

int ft_prix(int menu, int nombre)
{
    int prix = 0;

    if (menu == 1)
    {
        prix = 5 * nombre;
    }
    else if (prix == 2)
    {
        prix = 8 * nombre;
    }
    else if (prix == 3)
    {
        prix = 12 * nombre;
    }
    else
    {
        prix = 9 * nombre;
    }
    return prix;
}

int ft_nombre(void)
{
    int nombre = 0;

    printf("Combien de menu souhaitez-vous ?\n");
    scanf("%d", &nombre);
    return nombre;
}

int ft_menu(void)
{
    int menu = 0;
    
    printf("Quel menu souhaitez vous ?\n1. Tacos (5 euros)\n2. Poke (8 euros)\n3. Pizza (12 euros)\n4. Tah le 280 en maxi best of (9 euros)\n");
    scanf("%d", &menu);
    return menu;
}

int ft_oui_non(void)
{
    int reponse = 0;
    
    printf("1. Oui\n2. Non\n");
    scanf("%d", &reponse);
    return reponse;
}

void ft_bonjour_continue(void)
{
    int y = 1;
    int x = 0;
    int menu = 0;
    int nombre = 0;
    int prix = 0;
    
    while (y == 1)
    {
        if (x == 1)
        {
            printf("Il vous faudra autre chose ?\n");
            y = ft_oui_non();
            if (y == 1)
            {
                menu = ft_menu();
                nombre = ft_nombre();
                prix = prix + ft_prix(menu, nombre);
            }
            //printf("Y --> %d\n", y);
        }
        else
        {
            printf("Bienvenue chez McDonald. ");
            menu = ft_menu();
            nombre = ft_nombre();
            prix = prix + ft_prix(menu, nombre);
            x += 1;
        }
        printf("Cela vous fera un total de %d euros\n", prix);
    }
}

int main(void)
{
    ft_bonjour_continue();
}