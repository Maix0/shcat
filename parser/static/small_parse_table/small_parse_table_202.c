/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_202.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1010(t_small_parse_table_array *v)
{
	v->a[20200] = state(567);
	v->a[20201] = 1;
	v->a[20202] = aux_sym_command_repeat1;
	v->a[20203] = state(582);
	v->a[20204] = 1;
	v->a[20205] = sym_concatenation;
	v->a[20206] = state(718);
	v->a[20207] = 1;
	v->a[20208] = sym_file_redirect;
	v->a[20209] = state(1028);
	v->a[20210] = 1;
	v->a[20211] = sym_variable_assignment;
	v->a[20212] = state(1166);
	v->a[20213] = 1;
	v->a[20214] = aux_sym_redirected_statement_repeat2;
	v->a[20215] = actions(11);
	v->a[20216] = 2;
	v->a[20217] = anon_sym_while;
	v->a[20218] = anon_sym_until;
	v->a[20219] = actions(254);
	small_parse_table_1011(v);
}

void	small_parse_table_1011(t_small_parse_table_array *v)
{
	v->a[20220] = 2;
	v->a[20221] = anon_sym_LT_AMP_DASH;
	v->a[20222] = anon_sym_GT_AMP_DASH;
	v->a[20223] = actions(256);
	v->a[20224] = 2;
	v->a[20225] = sym_raw_string;
	v->a[20226] = sym_word;
	v->a[20227] = state(295);
	v->a[20228] = 6;
	v->a[20229] = sym_arithmetic_expansion;
	v->a[20230] = sym_string;
	v->a[20231] = sym_number;
	v->a[20232] = sym_simple_expansion;
	v->a[20233] = sym_expansion;
	v->a[20234] = sym_command_substitution;
	v->a[20235] = state(1141);
	v->a[20236] = 7;
	v->a[20237] = sym_for_statement;
	v->a[20238] = sym_while_statement;
	v->a[20239] = sym_if_statement;
	small_parse_table_1012(v);
}

void	small_parse_table_1012(t_small_parse_table_array *v)
{
	v->a[20240] = sym_compound_statement;
	v->a[20241] = sym_subshell;
	v->a[20242] = sym_command;
	v->a[20243] = sym_variable_assignments;
	v->a[20244] = actions(252);
	v->a[20245] = 8;
	v->a[20246] = anon_sym_LT;
	v->a[20247] = anon_sym_GT;
	v->a[20248] = anon_sym_GT_GT;
	v->a[20249] = anon_sym_AMP_GT;
	v->a[20250] = anon_sym_AMP_GT_GT;
	v->a[20251] = anon_sym_LT_AMP;
	v->a[20252] = anon_sym_GT_AMP;
	v->a[20253] = anon_sym_GT_PIPE;
	v->a[20254] = 27;
	v->a[20255] = actions(3);
	v->a[20256] = 1;
	v->a[20257] = sym_comment;
	v->a[20258] = actions(9);
	v->a[20259] = 1;
	small_parse_table_1013(v);
}

void	small_parse_table_1013(t_small_parse_table_array *v)
{
	v->a[20260] = anon_sym_for;
	v->a[20261] = actions(13);
	v->a[20262] = 1;
	v->a[20263] = anon_sym_if;
	v->a[20264] = actions(17);
	v->a[20265] = 1;
	v->a[20266] = anon_sym_LPAREN;
	v->a[20267] = actions(19);
	v->a[20268] = 1;
	v->a[20269] = anon_sym_LBRACE;
	v->a[20270] = actions(63);
	v->a[20271] = 1;
	v->a[20272] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20273] = actions(65);
	v->a[20274] = 1;
	v->a[20275] = anon_sym_DOLLAR;
	v->a[20276] = actions(67);
	v->a[20277] = 1;
	v->a[20278] = anon_sym_DQUOTE;
	v->a[20279] = actions(71);
	small_parse_table_1014(v);
}

void	small_parse_table_1014(t_small_parse_table_array *v)
{
	v->a[20280] = 1;
	v->a[20281] = aux_sym_number_token1;
	v->a[20282] = actions(73);
	v->a[20283] = 1;
	v->a[20284] = aux_sym_number_token2;
	v->a[20285] = actions(75);
	v->a[20286] = 1;
	v->a[20287] = anon_sym_DOLLAR_LBRACE;
	v->a[20288] = actions(77);
	v->a[20289] = 1;
	v->a[20290] = anon_sym_DOLLAR_LPAREN;
	v->a[20291] = actions(79);
	v->a[20292] = 1;
	v->a[20293] = anon_sym_BQUOTE;
	v->a[20294] = actions(359);
	v->a[20295] = 1;
	v->a[20296] = sym_file_descriptor;
	v->a[20297] = actions(405);
	v->a[20298] = 1;
	v->a[20299] = sym_variable_name;
	small_parse_table_1015(v);
}

/* EOF small_parse_table_202.c */
