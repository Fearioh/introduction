/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pendu.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:29:05 by adelat            #+#    #+#             */
/*   Updated: 2024/04/20 00:01:22 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_compare(char *word, char *str)
{
    int i = 0;
    int check = 1;

    while (word[i])
    {
        if (word[i] != str[i])
            check = 0;
        i++;
    }
    return check;
}

int ft_update(char *word, char *str, int size, char guess)
{
    int i = 0;
    int win = 0;
    int lose = 0;

    printf("\n");
    while (i < size)
    {
        if(word[i] == guess)
        {
            str[i] = word[i];
            lose = 1;
        }
        printf("%c ", str[i]);
        i++;
    }
    win = ft_compare(word, str);
    printf("\n");
    lose++;
    return win;
}

int ft_checklife(char guess, char *word, int life)
{
    int i = 0;
    int check = 0;

    while (word[i])
    {
        if(word[i] == guess)
            check = 1;
        i++;
    }
    if (check == 0)
    {
        life--;
    }
    if (life > 0)
        printf("Il vous reste %d vies\n", life);
    else
        printf("Vous avez perdu !\n");
    return life;
}

char ft_guess()
{
    char guess;
        
    printf("Enter your guess :\n\n");
    if (scanf(" %c", &guess) == 1 && ((guess >= 'a' && guess <= 'z') || (guess >= 'A' && guess <= 'Z')))
    {
        if (guess >= 'a' && guess <= 'z')
            guess -= 32;
        printf("\n");
        return guess;
    }
    else
    {
        printf("\nVeuillez entrer une lettre\n\n");
        ft_guess();
    }
    return 0;
}

char ft_printfirst(char c)
{
    c = '_';
    printf("%c ", c);
    return c;
}

int ft_game(char *word, int size, int life)
{
    char str[size+1];
    int i = 0;
    char guess;
    int win = 0;
    
    while (i < size)
    {
        str[i] = ft_printfirst(str[i]);
        i++;
    }
    i = 0;
    while (life > 0 && win != 1)
    {
        printf("\n");
        guess = ft_guess();
        life = ft_checklife(guess, word, life);
        win = ft_update(word, str, size, guess);
    }
    if (win == 1)
        printf("\nBravo ! Vous avez trouvé !\n\n");
    return life;
}

int ft_size(char *word)
{
    int i = 0;

    while (word[i])
        i++;
    return i;
}

void ft_pendu(char *word)
{
    int size = 0;
    int life = 10;

    printf("Bienvenu dans cette partie de Pendu !\n");
    size = ft_size(word);
    life = ft_game(word, size, life);
}

int main(void)
{
    ft_pendu("DEVINER");
}