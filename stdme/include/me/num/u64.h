/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u64.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:10:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:09 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef U64_H
# define U64_H

# include "me/types.h"

t_u64	u64_rotate_left(t_u64 n, t_usize by);
t_u64	u64_rotate_right(t_u64 n, t_usize by);

t_u64	u64_from_7bytes(t_u8 *bytes, t_usize start, t_usize len);
t_u64	u64_from_bytes(t_u8 *bytes, t_usize len);

#endif
