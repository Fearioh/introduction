/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pendu.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:29:05 by adelat            #+#    #+#             */
/*   Updated: 2024/04/23 22:12:01 by adelat           ###   ########.fr       */
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

int ft_checklife(char guess, char *word, int life, char strguess)
{
    int i = 0;
    int check = 0;

    while (word[i])
    {
        if(word[i] == guess)
            check = 1;
        i++;
    }
    if (check == 0 && strguess != ' ')
    {
        life--;
    }
    if (life > 0)
        printf("Il vous reste %d vies\n", life);
    else
        printf("Vous avez perdu !\n");
    return life;
}

char ft_updateguess(char guess, char *check)
{
    int index = 0;
    int same = 0;
    
    printf("Lettres utilisées : ");
    while(check[index] != '\0' && check[index] != ' ')
    {
        if (check[index] == guess)
            same++;
        printf("%c ", check[index]);
        index++;
    }
    if (same == 0)
    {
        check[index] = guess;
        printf("%c\n\n", check[index]);
        return guess;
    }
    printf("\n\n");
    return ' ';
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

int ft_param(int life, int win, char *str, char *word, int size)
{
    char guess;
    int i = 0;
    char strguess[1000000];
    
    while (strguess[i])
    {
        strguess[i] = ' ';
        i++;
    }
    i = 0;
    while (life > 0 && win != 1)
    {
        printf("\n");
        guess = ft_guess();
        strguess[i] = ft_updateguess(guess, strguess);
        life = ft_checklife(guess, word, life, strguess[i]);
        win = ft_update(word, str, size, guess);
        i++;
    }
    return win;
}

int ft_game(char *word, int size, int life)
{
    char str[size+1];
    int i = 0;
    int win = 0;
    
    while (i < size)
    {
        str[i] = ft_printfirst(str[i]);
        i++;
    }
    i = 0;
    win = ft_param(life, win, str, word, size);
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

char    ft_maj(char *word, int i)
{
    if(word[i] >= 'a' && word[i] <= 'z')
        return word[i] - 32;
    else
        return word[i];
}

int ft_pendu(char *word)
{
    int size = 0;
    int life = 10;
    char strguess[10000];
    int i = 0;

    if(word)
    {
        while (word[i] != '\0')
        {
            strguess[i] = ft_maj(word, i);
            i++;
        }
        strguess[i] = ft_maj(word, i);
    }
    else
    {
        printf("Pas de mot à deviner !\n");
        return 0;
    }
    printf("Bienvenu dans cette partie de Pendu !\n");
    size = ft_size(strguess);
    life = ft_game(strguess, size, life);
    return 1;
}

int main()
{
    ft_pendu("pendu");
}