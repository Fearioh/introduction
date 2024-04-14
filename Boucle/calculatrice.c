/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculatrice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelat <adelat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:16:00 by adelat            #+#    #+#             */
/*   Updated: 2024/04/14 14:29:50 by adelat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
! Creer un programme qui contient 2 variables,
! min qui vaudra a partir de combien on multiplie
! max qui vaudra jusqu'a quel nombre on multiplie
! multiplicateur_min qui vaudra a partir de quel nombre on multiplie
! multiplicateur_max qui vaudra jusqu'a quel nombre on multiplie


Exemple :

! min = 3
! max = 12
! mul_min = 0
! mul_max = 10
! OUI


! 0 X 3 = result
! ---
!
! ================================================
! ================================================

! 1 X 3


*/

#include <stdio.h>

int main(void)
{
    int min = 0;
    int max = 10;
    int multiplicateur_min = 0;
    int multiplicateur_max = 10;
    
    while (min <= max)
    {
        while (multiplicateur_min <= multiplicateur_max)
        {
            printf("%d X %d = %d\n", min, multiplicateur_min, min*multiplicateur_min);
            multiplicateur_min += 1;
        }
        if (min != multiplicateur_max)
        {
            printf("================================================\n================================================\n");
        }
        multiplicateur_min = 0;
        min += 1;
    }
    return 0;
}