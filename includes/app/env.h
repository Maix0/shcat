/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:41:01 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/02 22:11:14 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H

# include "me/hashmap/hashmap_env.h"
# include "me/string/string.h"
# include "me/types.h"
# include "me/vec/vec_str.h"


t_hashmap_env	*create_env_map(void);

t_error			build_envp(t_hashmap_env *envs, t_hashmap_env *tmp_vars, \
							t_vec_str *out);

struct			s_build_envp_state
{
	t_hashmap_env	*tmp_vars;
	t_vec_str		out;
	t_string		buf;
};

#endif /* ENV_H */
