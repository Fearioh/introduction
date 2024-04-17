/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cours.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:29:14 by adelat            #+#    #+#             */
/*   Updated: 2024/04/17 10:17:13 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_affichage(int tacos, int poke, int pizza, int burger)
{
    int finish = 0;

    printf("Vous avez pris ");
    if (tacos > 0)
    {
        printf("%d Tacos (%d euros), ", tacos, tacos*5);
    }
    if (poke > 0)
    {
        printf("%d poke (%d euros), ", poke, poke*8);
    }
    if (pizza > 0)
    {
        printf("%d Pizza (%d euros), ", pizza, pizza*12);
    }
    if (burger > 0)
    {
        printf("%d Burger (%d euros), ", burger, burger*9);
    }
    printf("pour un total de %d euros.\n", (tacos*5)+(poke*8)+(pizza*12)+(burger*9));
    printf("Souhaitez-vous prendre autre chose ?\n1. Oui\n2. Non\n");
    scanf("%d", &finish);
    return finish;
}

int ft_nombre(int menu)
{
    int nombre = 0;

    if (menu == 1)
    {
        printf("Combien de Tacos souhaitez-vous ?\n");
    }
    else if(menu == 2)
    {
        printf("Combien de Poke souhaitez-vous ?\n");
    }
    else if(menu == 3)
    {
        printf("Combien de Pizza souhaitez-vous ?\n");
    }
    else if(menu == 4)
    {
    printf("Combien de Burger souhaitez-vous ?\n");
    }
    scanf("%d", &nombre);
    return nombre;
}

int ft_menu(void)
{
    int menu = 0;
    
    printf("Quel menu souhaitez vous ?\n1. Tacos (5 euros)\n2. Poke (8 euros)\n3. Pizza (12 euros)\n4. Burger (9 euros)\n");
    scanf("%d", &menu);
    return menu;
}

int ft_continue(int first, int tacos, int poke, int pizza, int burger)
{
    int reponse = 0;

    if (first == 0)
    {
        printf("Bienvenue chez McDonald, que souhaitez-vous commander ?\n");
        return 1;
    }
    else if (first == 1)
    {
        reponse = ft_affichage(tacos, poke, pizza,burger);
        if (reponse == 1)
        {
            return reponse;
        }
        else
        {
            return reponse;
        }
    }
    return reponse;
}

void ft_total(void)
{
    int tacos = 0;
    int poke = 0;
    int pizza = 0;
    int burger = 0;
    int first = 0;
    int boucle = 1;
    int menu = 0;
    int nombre = 0;
    int finish = 0;
    
    while (boucle == 1)
    {
        boucle = ft_continue(first, tacos, poke, pizza, burger);
        if (boucle == 1)
        {
            menu = ft_menu();
            nombre = ft_nombre(menu);
            if (menu == 1)
            {
                tacos = tacos + nombre;
            }
            if (menu == 2)
            {
                poke = poke + nombre;
            }
            if (menu == 3)
            {
                pizza = pizza + nombre;
            }
            if (menu == 4)
            {
                burger = burger + nombre;
            }
            first = 1;
        }
    }
}

int main(void)
{
    ft_total();
    return 0;
}