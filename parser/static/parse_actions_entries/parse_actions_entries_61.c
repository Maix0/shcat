/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_61.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_305(t_parse_actions_entries_array *v)
{
	v->a[6100] = shift(577);
	v->a[6101] = entry(1, false);
	v->a[6102] = reduce(sym_command, 3, 0, 16);
	v->a[6103] = entry(1, true);
	v->a[6104] = reduce(sym_command, 3, 0, 16);
	v->a[6105] = entry(1, false);
	v->a[6106] = reduce(sym_for_statement, 4, 0, 32);
	v->a[6107] = entry(1, true);
	v->a[6108] = reduce(sym_for_statement, 4, 0, 32);
	v->a[6109] = entry(1, false);
	v->a[6110] = reduce(sym_do_group, 2, 0, 0);
	v->a[6111] = entry(1, true);
	v->a[6112] = reduce(sym_do_group, 2, 0, 0);
	v->a[6113] = entry(1, false);
	v->a[6114] = reduce(sym_if_statement, 4, 0, 33);
	v->a[6115] = entry(1, true);
	v->a[6116] = reduce(sym_if_statement, 4, 0, 33);
	v->a[6117] = entry(1, false);
	v->a[6118] = reduce(sym_case_statement, 4, 0, 34);
	v->a[6119] = entry(1, true);
	parse_actions_entries_306(v);
}

void	parse_actions_entries_306(t_parse_actions_entries_array *v)
{
	v->a[6120] = reduce(sym_case_statement, 4, 0, 34);
	v->a[6121] = entry(1, false);
	v->a[6122] = reduce(sym_case_statement, 4, 0, 35);
	v->a[6123] = entry(1, true);
	v->a[6124] = reduce(sym_case_statement, 4, 0, 35);
	v->a[6125] = entry(1, false);
	v->a[6126] = reduce(sym_function_definition, 4, 0, 36);
	v->a[6127] = entry(1, true);
	v->a[6128] = reduce(sym_function_definition, 4, 0, 36);
	v->a[6129] = entry(1, false);
	v->a[6130] = reduce(sym_do_group, 3, 0, 0);
	v->a[6131] = entry(1, true);
	v->a[6132] = reduce(sym_do_group, 3, 0, 0);
	v->a[6133] = entry(1, false);
	v->a[6134] = reduce(sym_if_statement, 5, 0, 33);
	v->a[6135] = entry(1, true);
	v->a[6136] = reduce(sym_if_statement, 5, 0, 33);
	v->a[6137] = entry(1, true);
	v->a[6138] = reduce(sym_heredoc_redirect, 6, 0, 75);
	v->a[6139] = entry(1, false);
	parse_actions_entries_307(v);
}

void	parse_actions_entries_307(t_parse_actions_entries_array *v)
{
	v->a[6140] = reduce(sym_heredoc_redirect, 6, 0, 75);
	v->a[6141] = entry(1, false);
	v->a[6142] = reduce(sym_case_statement, 5, 0, 34);
	v->a[6143] = entry(1, true);
	v->a[6144] = reduce(sym_case_statement, 5, 0, 34);
	v->a[6145] = entry(1, false);
	v->a[6146] = reduce(sym_case_statement, 5, 0, 35);
	v->a[6147] = entry(1, true);
	v->a[6148] = reduce(sym_case_statement, 5, 0, 35);
	v->a[6149] = entry(1, false);
	v->a[6150] = reduce(sym_function_definition, 5, 0, 43);
	v->a[6151] = entry(1, true);
	v->a[6152] = reduce(sym_function_definition, 5, 0, 43);
	v->a[6153] = entry(1, false);
	v->a[6154] = reduce(sym_for_statement, 6, 0, 45);
	v->a[6155] = entry(1, true);
	v->a[6156] = reduce(sym_for_statement, 6, 0, 45);
	v->a[6157] = entry(1, true);
	v->a[6158] = reduce(sym_heredoc_redirect, 6, 0, 74);
	v->a[6159] = entry(1, false);
	parse_actions_entries_308(v);
}

void	parse_actions_entries_308(t_parse_actions_entries_array *v)
{
	v->a[6160] = reduce(sym_heredoc_redirect, 6, 0, 74);
	v->a[6161] = entry(1, false);
	v->a[6162] = reduce(sym_if_statement, 6, 0, 33);
	v->a[6163] = entry(1, true);
	v->a[6164] = reduce(sym_if_statement, 6, 0, 33);
	v->a[6165] = entry(1, false);
	v->a[6166] = reduce(sym_case_statement, 6, 0, 34);
	v->a[6167] = entry(1, true);
	v->a[6168] = reduce(sym_case_statement, 6, 0, 34);
	v->a[6169] = entry(1, true);
	v->a[6170] = shift(1820);
	v->a[6171] = entry(1, true);
	v->a[6172] = shift(677);
	v->a[6173] = entry(1, true);
	v->a[6174] = shift(3091);
	v->a[6175] = entry(1, true);
	v->a[6176] = shift(3082);
	v->a[6177] = entry(1, true);
	v->a[6178] = shift(65);
	v->a[6179] = entry(1, true);
	parse_actions_entries_309(v);
}

void	parse_actions_entries_309(t_parse_actions_entries_array *v)
{
	v->a[6180] = shift(66);
	v->a[6181] = entry(1, true);
	v->a[6182] = reduce(sym_heredoc_redirect, 6, 0, 73);
	v->a[6183] = entry(1, false);
	v->a[6184] = reduce(sym_heredoc_redirect, 6, 0, 73);
	v->a[6185] = entry(1, true);
	v->a[6186] = reduce(sym_heredoc_redirect, 6, 0, 72);
	v->a[6187] = entry(1, false);
	v->a[6188] = reduce(sym_heredoc_redirect, 6, 0, 72);
	v->a[6189] = entry(1, false);
	v->a[6190] = reduce(sym_case_statement, 6, 0, 35);
	v->a[6191] = entry(1, true);
	v->a[6192] = reduce(sym_case_statement, 6, 0, 35);
	v->a[6193] = entry(1, false);
	v->a[6194] = reduce(sym_function_definition, 6, 0, 53);
	v->a[6195] = entry(1, true);
	v->a[6196] = reduce(sym_function_definition, 6, 0, 53);
	v->a[6197] = entry(1, true);
	v->a[6198] = reduce(sym_heredoc_redirect, 6, 0, 4);
	v->a[6199] = entry(1, false);
	parse_actions_entries_310(v);
}

/* EOF parse_actions_entries_61.c */
