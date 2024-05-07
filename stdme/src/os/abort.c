/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:08:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/07 13:09:59 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/alloc/alloc_internal.h"
#include "me/types.h"
#include <stdlib.h>

void me_abort(void)
{
	me_exit(1);
}
