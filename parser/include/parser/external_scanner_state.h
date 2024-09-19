/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_state.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:56:34 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 16:54:04 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTERNAL_SCANNER_STATE_H
#define EXTERNAL_SCANNER_STATE_H

#include "me/types.h"

struct s_external_scanner_state
{
	char *long_data;
	t_u32 length;
};

typedef struct s_external_scanner_state t_external_scanner_state;
typedef struct s_subtree_data		t_subtree_data;
typedef t_subtree_data	   *t_subtree;

bool						ts_external_scanner_state_eq(const t_external_scanner_state *self, const t_u8 *buffer, t_u32 length);
bool						ts_subtree_external_scanner_state_eq(t_subtree self, t_subtree other);
const t_external_scanner_state *ts_subtree_external_scanner_state(t_subtree self);
const t_u8				   *ts_external_scanner_state_data(const t_external_scanner_state *self);
t_external_scanner_state	ts_external_scanner_state_copy(const t_external_scanner_state *self);
void						ts_external_scanner_state_delete(t_external_scanner_state *self);
void						ts_external_scanner_state_init(t_external_scanner_state *self, const t_u8 *data, t_u32 length);

#endif /* EXTERNAL_SCANNER_STATE_H */
