/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_82.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_410(t_parse_actions_entries_array *v)
{
	v->a[8200] = shift(2161);
	v->a[8201] = entry(1, true);
	v->a[8202] = shift(424);
	v->a[8203] = entry(1, false);
	v->a[8204] = shift(3922);
	v->a[8205] = entry(1, true);
	v->a[8206] = shift(3922);
	v->a[8207] = entry(1, false);
	v->a[8208] = shift(3477);
	v->a[8209] = entry(1, false);
	v->a[8210] = shift(3492);
	v->a[8211] = entry(1, true);
	v->a[8212] = shift(3492);
	v->a[8213] = entry(1, false);
	v->a[8214] = shift(2202);
	v->a[8215] = entry(1, true);
	v->a[8216] = shift(2202);
	v->a[8217] = entry(1, true);
	v->a[8218] = shift(764);
	v->a[8219] = entry(1, false);
	parse_actions_entries_411(v);
}

void	parse_actions_entries_411(t_parse_actions_entries_array *v)
{
	v->a[8220] = shift(2251);
	v->a[8221] = entry(1, true);
	v->a[8222] = shift(2251);
	v->a[8223] = entry(1, true);
	v->a[8224] = shift(346);
	v->a[8225] = entry(1, false);
	v->a[8226] = shift(3906);
	v->a[8227] = entry(1, true);
	v->a[8228] = shift(3906);
	v->a[8229] = entry(1, false);
	v->a[8230] = shift(2184);
	v->a[8231] = entry(1, true);
	v->a[8232] = shift(2184);
	v->a[8233] = entry(1, true);
	v->a[8234] = shift(450);
	v->a[8235] = entry(1, false);
	v->a[8236] = shift(2180);
	v->a[8237] = entry(1, true);
	v->a[8238] = shift(2180);
	v->a[8239] = entry(1, true);
	parse_actions_entries_412(v);
}

void	parse_actions_entries_412(t_parse_actions_entries_array *v)
{
	v->a[8240] = shift(451);
	v->a[8241] = entry(1, false);
	v->a[8242] = shift(1639);
	v->a[8243] = entry(1, false);
	v->a[8244] = shift(1636);
	v->a[8245] = entry(1, true);
	v->a[8246] = shift(1636);
	v->a[8247] = entry(1, false);
	v->a[8248] = shift(2179);
	v->a[8249] = entry(1, true);
	v->a[8250] = shift(2179);
	v->a[8251] = entry(1, true);
	v->a[8252] = shift(432);
	v->a[8253] = entry(1, false);
	v->a[8254] = shift(1499);
	v->a[8255] = entry(1, false);
	v->a[8256] = shift(1500);
	v->a[8257] = entry(1, true);
	v->a[8258] = shift(1500);
	v->a[8259] = entry(1, false);
	parse_actions_entries_413(v);
}

void	parse_actions_entries_413(t_parse_actions_entries_array *v)
{
	v->a[8260] = shift(3242);
	v->a[8261] = entry(1, false);
	v->a[8262] = shift(3265);
	v->a[8263] = entry(1, true);
	v->a[8264] = shift(3265);
	v->a[8265] = entry(1, false);
	v->a[8266] = shift(2294);
	v->a[8267] = entry(1, true);
	v->a[8268] = shift(2294);
	v->a[8269] = entry(1, true);
	v->a[8270] = shift(399);
	v->a[8271] = entry(1, false);
	v->a[8272] = shift(3965);
	v->a[8273] = entry(1, true);
	v->a[8274] = shift(3965);
	v->a[8275] = entry(1, false);
	v->a[8276] = shift(3186);
	v->a[8277] = entry(1, true);
	v->a[8278] = shift(3127);
	v->a[8279] = entry(1, true);
	parse_actions_entries_414(v);
}

void	parse_actions_entries_414(t_parse_actions_entries_array *v)
{
	v->a[8280] = shift(105);
	v->a[8281] = entry(1, true);
	v->a[8282] = shift(102);
	v->a[8283] = entry(1, true);
	v->a[8284] = shift(212);
	v->a[8285] = entry(1, true);
	v->a[8286] = shift(3194);
	v->a[8287] = entry(1, true);
	v->a[8288] = reduce(sym_heredoc_body, 2, 0, 0);
	v->a[8289] = entry(2, false);
	v->a[8290] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[8291] = shift_repeat(3186);
	v->a[8292] = entry(2, true);
	v->a[8293] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[8294] = shift_repeat(3127);
	v->a[8295] = entry(2, true);
	v->a[8296] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[8297] = shift_repeat(105);
	v->a[8298] = entry(2, true);
	v->a[8299] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	parse_actions_entries_415(v);
}

/* EOF parse_actions_entries_82.c */
