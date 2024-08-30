/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _builtins_func.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:05:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/30 19:13:17 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUILTINS_FUNC_H
# define _BUILTINS_FUNC_H

# include "me/types.h"

typedef t_error	((*t_builtin_func)(t_state *state, \
				t_builtin_spawn_info info, t_i32 *exit_code));

#endif /* _BUILTIN_FUNC_H */
