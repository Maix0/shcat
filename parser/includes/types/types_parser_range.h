/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_parser_range.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:11:26 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 14:25:11 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_PARSER_RANGE_H
# define TYPES_PARSER_RANGE_H

# include "me/types.h"
# include "parser/types/types_point.h"

typedef struct s_parser_range
{
	t_point	start_point;
	t_point	end_point;
	t_u32	start_byte;
	t_u32	end_byte;

}			t_parser_range;

#endif /* TYPES_PARSER_RANGE_H */
