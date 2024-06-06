/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_62.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_310(t_parse_actions_entries_array *v)
{
	v->a[6200] = reduce(sym_heredoc_redirect, 6, 0, 4);
	v->a[6201] = entry(1, false);
	v->a[6202] = reduce(sym_heredoc_redirect, 5, 0, 4);
	v->a[6203] = entry(1, true);
	v->a[6204] = reduce(sym_heredoc_redirect, 5, 0, 4);
	v->a[6205] = entry(1, true);
	v->a[6206] = reduce(sym_case_statement, 7, 0, 35);
	v->a[6207] = entry(1, false);
	v->a[6208] = reduce(sym_case_statement, 7, 0, 35);
	v->a[6209] = entry(1, false);
	v->a[6210] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[6211] = entry(1, true);
	v->a[6212] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[6213] = entry(1, false);
	v->a[6214] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[6215] = entry(1, true);
	v->a[6216] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[6217] = entry(1, false);
	v->a[6218] = reduce(sym_heredoc_redirect, 5, 0, 0);
	v->a[6219] = entry(1, true);
	parse_actions_entries_311(v);
}

void	parse_actions_entries_311(t_parse_actions_entries_array *v)
{
	v->a[6220] = reduce(sym_heredoc_redirect, 5, 0, 0);
	v->a[6221] = entry(1, false);
	v->a[6222] = reduce(sym_heredoc_redirect, 5, 0, 55);
	v->a[6223] = entry(1, true);
	v->a[6224] = reduce(sym_heredoc_redirect, 5, 0, 55);
	v->a[6225] = entry(1, false);
	v->a[6226] = reduce(sym_heredoc_redirect, 5, 0, 56);
	v->a[6227] = entry(1, true);
	v->a[6228] = reduce(sym_heredoc_redirect, 5, 0, 56);
	v->a[6229] = entry(1, false);
	v->a[6230] = reduce(sym_heredoc_redirect, 5, 0, 57);
	v->a[6231] = entry(1, true);
	v->a[6232] = reduce(sym_heredoc_redirect, 5, 0, 57);
	v->a[6233] = entry(1, false);
	v->a[6234] = shift(637);
	v->a[6235] = entry(1, true);
	v->a[6236] = shift(637);
	v->a[6237] = entry(1, false);
	v->a[6238] = reduce(sym_case_statement, 7, 0, 34);
	v->a[6239] = entry(1, true);
	parse_actions_entries_312(v);
}

void	parse_actions_entries_312(t_parse_actions_entries_array *v)
{
	v->a[6240] = reduce(sym_case_statement, 7, 0, 34);
	v->a[6241] = entry(2, false);
	v->a[6242] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[6243] = shift_repeat(252);
	v->a[6244] = entry(1, false);
	v->a[6245] = shift(252);
	v->a[6246] = entry(1, true);
	v->a[6247] = shift(1758);
	v->a[6248] = entry(1, true);
	v->a[6249] = shift(939);
	v->a[6250] = entry(1, true);
	v->a[6251] = shift(3024);
	v->a[6252] = entry(1, true);
	v->a[6253] = shift(3019);
	v->a[6254] = entry(1, true);
	v->a[6255] = shift(144);
	v->a[6256] = entry(1, true);
	v->a[6257] = shift(146);
	v->a[6258] = entry(2, false);
	v->a[6259] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	parse_actions_entries_313(v);
}

void	parse_actions_entries_313(t_parse_actions_entries_array *v)
{
	v->a[6260] = shift_repeat(2177);
	v->a[6261] = entry(2, false);
	v->a[6262] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[6263] = shift_repeat(442);
	v->a[6264] = entry(2, true);
	v->a[6265] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[6266] = shift_repeat(3173);
	v->a[6267] = entry(1, false);
	v->a[6268] = shift(1107);
	v->a[6269] = entry(1, true);
	v->a[6270] = shift(1107);
	v->a[6271] = entry(2, false);
	v->a[6272] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[6273] = shift_repeat(2175);
	v->a[6274] = entry(2, false);
	v->a[6275] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[6276] = shift_repeat(433);
	v->a[6277] = entry(2, true);
	v->a[6278] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[6279] = shift_repeat(3209);
	parse_actions_entries_314(v);
}

void	parse_actions_entries_314(t_parse_actions_entries_array *v)
{
	v->a[6280] = entry(1, true);
	v->a[6281] = shift(3209);
	v->a[6282] = entry(1, false);
	v->a[6283] = shift(1502);
	v->a[6284] = entry(1, true);
	v->a[6285] = shift(1496);
	v->a[6286] = entry(1, true);
	v->a[6287] = shift(1502);
	v->a[6288] = entry(1, false);
	v->a[6289] = shift(1496);
	v->a[6290] = entry(1, false);
	v->a[6291] = shift(2690);
	v->a[6292] = entry(1, false);
	v->a[6293] = shift(1741);
	v->a[6294] = entry(1, true);
	v->a[6295] = shift(2669);
	v->a[6296] = entry(1, true);
	v->a[6297] = shift(2690);
	v->a[6298] = entry(1, false);
	v->a[6299] = shift(2669);
	parse_actions_entries_315(v);
}

/* EOF parse_actions_entries_62.c */
