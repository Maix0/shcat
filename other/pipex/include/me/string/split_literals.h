/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_literals.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:31:04 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/04 14:32:40 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPLIT_LITERALS_H
# define SPLIT_LITERALS_H

# include "me/types.h"
# include "me/vec/vec_str.h"

t_error	split_literals(t_const_str s, t_vec_str *out);

#endif /* SPLIT_LITERALS_H */
