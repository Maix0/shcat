/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_102.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_510(t_small_parse_table_array *v)
{
	v->a[10200] = 1;
	v->a[10201] = sym_comment;
	v->a[10202] = actions(9);
	v->a[10203] = 1;
	v->a[10204] = anon_sym_for;
	v->a[10205] = actions(13);
	v->a[10206] = 1;
	v->a[10207] = anon_sym_if;
	v->a[10208] = actions(15);
	v->a[10209] = 1;
	v->a[10210] = anon_sym_case;
	v->a[10211] = actions(17);
	v->a[10212] = 1;
	v->a[10213] = anon_sym_LPAREN;
	v->a[10214] = actions(19);
	v->a[10215] = 1;
	v->a[10216] = anon_sym_LBRACE;
	v->a[10217] = actions(59);
	v->a[10218] = 1;
	v->a[10219] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_511(v);
}

void	small_parse_table_511(t_small_parse_table_array *v)
{
	v->a[10220] = actions(61);
	v->a[10221] = 1;
	v->a[10222] = anon_sym_DOLLAR;
	v->a[10223] = actions(63);
	v->a[10224] = 1;
	v->a[10225] = anon_sym_DQUOTE;
	v->a[10226] = actions(67);
	v->a[10227] = 1;
	v->a[10228] = anon_sym_DOLLAR_LBRACE;
	v->a[10229] = actions(69);
	v->a[10230] = 1;
	v->a[10231] = anon_sym_DOLLAR_LPAREN;
	v->a[10232] = actions(71);
	v->a[10233] = 1;
	v->a[10234] = anon_sym_BQUOTE;
	v->a[10235] = actions(220);
	v->a[10236] = 1;
	v->a[10237] = sym_word;
	v->a[10238] = actions(222);
	v->a[10239] = 1;
	small_parse_table_512(v);
}

void	small_parse_table_512(t_small_parse_table_array *v)
{
	v->a[10240] = anon_sym_BANG;
	v->a[10241] = actions(230);
	v->a[10242] = 1;
	v->a[10243] = sym_file_descriptor;
	v->a[10244] = actions(232);
	v->a[10245] = 1;
	v->a[10246] = sym_variable_name;
	v->a[10247] = state(133);
	v->a[10248] = 1;
	v->a[10249] = aux_sym__statements_repeat1;
	v->a[10250] = state(180);
	v->a[10251] = 1;
	v->a[10252] = sym_command_name;
	v->a[10253] = state(231);
	v->a[10254] = 1;
	v->a[10255] = sym_variable_assignment;
	v->a[10256] = state(650);
	v->a[10257] = 1;
	v->a[10258] = sym_concatenation;
	v->a[10259] = state(710);
	small_parse_table_513(v);
}

void	small_parse_table_513(t_small_parse_table_array *v)
{
	v->a[10260] = 1;
	v->a[10261] = aux_sym_command_repeat1;
	v->a[10262] = state(747);
	v->a[10263] = 1;
	v->a[10264] = sym_file_redirect;
	v->a[10265] = state(1095);
	v->a[10266] = 1;
	v->a[10267] = sym_pipeline;
	v->a[10268] = state(1282);
	v->a[10269] = 1;
	v->a[10270] = aux_sym_redirected_statement_repeat2;
	v->a[10271] = state(2127);
	v->a[10272] = 1;
	v->a[10273] = sym__statement_not_pipeline;
	v->a[10274] = state(2248);
	v->a[10275] = 1;
	v->a[10276] = sym__statements;
	v->a[10277] = actions(11);
	v->a[10278] = 2;
	v->a[10279] = anon_sym_while;
	small_parse_table_514(v);
}

void	small_parse_table_514(t_small_parse_table_array *v)
{
	v->a[10280] = anon_sym_until;
	v->a[10281] = actions(226);
	v->a[10282] = 2;
	v->a[10283] = anon_sym_LT_AMP_DASH;
	v->a[10284] = anon_sym_GT_AMP_DASH;
	v->a[10285] = actions(228);
	v->a[10286] = 2;
	v->a[10287] = sym_raw_string;
	v->a[10288] = sym_number;
	v->a[10289] = state(382);
	v->a[10290] = 5;
	v->a[10291] = sym_arithmetic_expansion;
	v->a[10292] = sym_string;
	v->a[10293] = sym_simple_expansion;
	v->a[10294] = sym_expansion;
	v->a[10295] = sym_command_substitution;
	v->a[10296] = actions(224);
	v->a[10297] = 6;
	v->a[10298] = anon_sym_LT;
	v->a[10299] = anon_sym_GT;
	small_parse_table_515(v);
}

/* EOF small_parse_table_102.c */
