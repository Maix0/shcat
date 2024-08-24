/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   external_scanner_state.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:56:34 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/24 14:00:11 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTERNAL_SCANNER_STATE_H
#define EXTERNAL_SCANNER_STATE_H

#include "me/types.h"

struct ExternalScannerState
{
	char *long_data;
	t_u32 length;
};
typedef struct ExternalScannerState ExternalScannerState;
typedef struct SubtreeHeapData		SubtreeHeapData;
typedef const SubtreeHeapData	   *Subtree;

void						ts_external_scanner_state_init(ExternalScannerState *self, const t_u8 *data, t_u32 length);
ExternalScannerState		ts_external_scanner_state_copy(const ExternalScannerState *self);
void						ts_external_scanner_state_delete(ExternalScannerState *self);
const t_u8				   *ts_external_scanner_state_data(const ExternalScannerState *self);
bool						ts_external_scanner_state_eq(const ExternalScannerState *self, const t_u8 *buffer, t_u32 length);
const ExternalScannerState *ts_subtree_external_scanner_state(Subtree self);
bool						ts_subtree_external_scanner_state_eq(Subtree self, Subtree other);

#endif /* EXTERNAL_SCANNER_STATE_H */
