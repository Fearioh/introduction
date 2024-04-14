/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cours.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:10:19 by adelat            #+#    #+#             */
/*   Updated: 2024/04/14 14:14:47 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int main(void)
{
    int fois = 0;
    
    while (fois <= 50)
    {
        printf("Je ne pisserais pas sur la maîtresse à l'école, numéro %d\n", fois);
        fois += 1;
    }
    return 0;
}