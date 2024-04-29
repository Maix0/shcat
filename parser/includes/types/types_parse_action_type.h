/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_parse_action_type.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:57:22 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/29 14:57:32 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_PARSE_ACTION_TYPE_H
# define TYPES_PARSE_ACTION_TYPE_H

typedef enum e_parse_action_type
{
	ActionTypeShift,
	ActionTypeReduce,
	ActionTypeAccept,
	ActionTypeRecover,
}	t_parse_action_type;

#endif /* TYPES_PARSE_ACTION_TYPE_H */
