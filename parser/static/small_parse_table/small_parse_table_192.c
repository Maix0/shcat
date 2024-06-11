/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_192.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_960(t_small_parse_table_array *v)
{
	v->a[19200] = anon_sym_GT;
	v->a[19201] = anon_sym_GT_GT;
	v->a[19202] = anon_sym_AMP_GT;
	v->a[19203] = anon_sym_AMP_GT_GT;
	v->a[19204] = anon_sym_LT_AMP;
	v->a[19205] = anon_sym_GT_AMP;
	v->a[19206] = anon_sym_GT_PIPE;
	v->a[19207] = state(1239);
	v->a[19208] = 13;
	v->a[19209] = sym__statement_not_pipeline;
	v->a[19210] = sym_redirected_statement;
	v->a[19211] = sym_for_statement;
	v->a[19212] = sym_while_statement;
	v->a[19213] = sym_if_statement;
	v->a[19214] = sym_case_statement;
	v->a[19215] = sym_function_definition;
	v->a[19216] = sym_compound_statement;
	v->a[19217] = sym_subshell;
	v->a[19218] = sym_list;
	v->a[19219] = sym_negated_command;
	small_parse_table_961(v);
}

void	small_parse_table_961(t_small_parse_table_array *v)
{
	v->a[19220] = sym_command;
	v->a[19221] = sym_variable_assignments;
	v->a[19222] = 25;
	v->a[19223] = actions(3);
	v->a[19224] = 1;
	v->a[19225] = sym_comment;
	v->a[19226] = actions(327);
	v->a[19227] = 1;
	v->a[19228] = anon_sym_for;
	v->a[19229] = actions(331);
	v->a[19230] = 1;
	v->a[19231] = anon_sym_if;
	v->a[19232] = actions(335);
	v->a[19233] = 1;
	v->a[19234] = anon_sym_LPAREN;
	v->a[19235] = actions(337);
	v->a[19236] = 1;
	v->a[19237] = anon_sym_LBRACE;
	v->a[19238] = actions(345);
	v->a[19239] = 1;
	small_parse_table_962(v);
}

void	small_parse_table_962(t_small_parse_table_array *v)
{
	v->a[19240] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19241] = actions(347);
	v->a[19242] = 1;
	v->a[19243] = anon_sym_DOLLAR;
	v->a[19244] = actions(349);
	v->a[19245] = 1;
	v->a[19246] = anon_sym_DQUOTE;
	v->a[19247] = actions(353);
	v->a[19248] = 1;
	v->a[19249] = anon_sym_DOLLAR_LBRACE;
	v->a[19250] = actions(355);
	v->a[19251] = 1;
	v->a[19252] = anon_sym_DOLLAR_LPAREN;
	v->a[19253] = actions(357);
	v->a[19254] = 1;
	v->a[19255] = anon_sym_BQUOTE;
	v->a[19256] = actions(359);
	v->a[19257] = 1;
	v->a[19258] = sym_file_descriptor;
	v->a[19259] = actions(377);
	small_parse_table_963(v);
}

void	small_parse_table_963(t_small_parse_table_array *v)
{
	v->a[19260] = 1;
	v->a[19261] = sym_variable_name;
	v->a[19262] = state(298);
	v->a[19263] = 1;
	v->a[19264] = sym_command_name;
	v->a[19265] = state(665);
	v->a[19266] = 1;
	v->a[19267] = aux_sym_command_repeat1;
	v->a[19268] = state(1070);
	v->a[19269] = 1;
	v->a[19270] = sym_concatenation;
	v->a[19271] = state(1093);
	v->a[19272] = 1;
	v->a[19273] = sym_file_redirect;
	v->a[19274] = state(1349);
	v->a[19275] = 1;
	v->a[19276] = sym_variable_assignment;
	v->a[19277] = state(1594);
	v->a[19278] = 1;
	v->a[19279] = aux_sym_redirected_statement_repeat2;
	small_parse_table_964(v);
}

void	small_parse_table_964(t_small_parse_table_array *v)
{
	v->a[19280] = actions(329);
	v->a[19281] = 2;
	v->a[19282] = anon_sym_while;
	v->a[19283] = anon_sym_until;
	v->a[19284] = actions(343);
	v->a[19285] = 2;
	v->a[19286] = anon_sym_LT_AMP_DASH;
	v->a[19287] = anon_sym_GT_AMP_DASH;
	v->a[19288] = actions(351);
	v->a[19289] = 3;
	v->a[19290] = sym_raw_string;
	v->a[19291] = sym_number;
	v->a[19292] = sym_word;
	v->a[19293] = state(903);
	v->a[19294] = 5;
	v->a[19295] = sym_arithmetic_expansion;
	v->a[19296] = sym_string;
	v->a[19297] = sym_simple_expansion;
	v->a[19298] = sym_expansion;
	v->a[19299] = sym_command_substitution;
	small_parse_table_965(v);
}

/* EOF small_parse_table_192.c */
