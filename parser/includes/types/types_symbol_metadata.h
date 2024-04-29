/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_symbol_metadata.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:55:57 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 14:56:04 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_SYMBOL_METADATA_H
# define TYPES_SYMBOL_METADATA_H

# include "me/types.h"

typedef struct s_symbol_metadata
{
	bool	visible;
	bool	named;
	bool	supertype;
}			t_symbol_metadata;

#endif /* TYPES_SYMBOL_METADATA_H */
