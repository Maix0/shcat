/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:12:38 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/30 19:25:57 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILTINS_H
# define BUILTINS_H

# include "exec/_builtins.h"
# include "exec/_builtins_func.h"

struct s_assign_export_state
{
	t_state					*state;
	t_builtin_spawn_info	*info;
	t_error					err;
};

#endif /* BUILTINS_H */
