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
	v->a[19200] = 1;
	v->a[19201] = anon_sym_for;
	v->a[19202] = actions(13);
	v->a[19203] = 1;
	v->a[19204] = anon_sym_if;
	v->a[19205] = actions(17);
	v->a[19206] = 1;
	v->a[19207] = anon_sym_LPAREN;
	v->a[19208] = actions(19);
	v->a[19209] = 1;
	v->a[19210] = anon_sym_LBRACE;
	v->a[19211] = actions(27);
	v->a[19212] = 1;
	v->a[19213] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19214] = actions(29);
	v->a[19215] = 1;
	v->a[19216] = anon_sym_DOLLAR;
	v->a[19217] = actions(31);
	v->a[19218] = 1;
	v->a[19219] = anon_sym_DQUOTE;
	small_parse_table_961(v);
}

void	small_parse_table_961(t_small_parse_table_array *v)
{
	v->a[19220] = actions(35);
	v->a[19221] = 1;
	v->a[19222] = anon_sym_DOLLAR_LBRACE;
	v->a[19223] = actions(37);
	v->a[19224] = 1;
	v->a[19225] = anon_sym_DOLLAR_LPAREN;
	v->a[19226] = actions(39);
	v->a[19227] = 1;
	v->a[19228] = anon_sym_BQUOTE;
	v->a[19229] = actions(41);
	v->a[19230] = 1;
	v->a[19231] = sym_file_descriptor;
	v->a[19232] = actions(377);
	v->a[19233] = 1;
	v->a[19234] = sym_variable_name;
	v->a[19235] = state(181);
	v->a[19236] = 1;
	v->a[19237] = sym_command_name;
	v->a[19238] = state(618);
	v->a[19239] = 1;
	small_parse_table_962(v);
}

void	small_parse_table_962(t_small_parse_table_array *v)
{
	v->a[19240] = sym_concatenation;
	v->a[19241] = state(684);
	v->a[19242] = 1;
	v->a[19243] = sym_file_redirect;
	v->a[19244] = state(688);
	v->a[19245] = 1;
	v->a[19246] = aux_sym_command_repeat1;
	v->a[19247] = state(1192);
	v->a[19248] = 1;
	v->a[19249] = sym_variable_assignment;
	v->a[19250] = state(1193);
	v->a[19251] = 1;
	v->a[19252] = aux_sym_redirected_statement_repeat2;
	v->a[19253] = actions(11);
	v->a[19254] = 2;
	v->a[19255] = anon_sym_while;
	v->a[19256] = anon_sym_until;
	v->a[19257] = actions(25);
	v->a[19258] = 2;
	v->a[19259] = anon_sym_LT_AMP_DASH;
	small_parse_table_963(v);
}

void	small_parse_table_963(t_small_parse_table_array *v)
{
	v->a[19260] = anon_sym_GT_AMP_DASH;
	v->a[19261] = actions(33);
	v->a[19262] = 3;
	v->a[19263] = sym_raw_string;
	v->a[19264] = sym_number;
	v->a[19265] = sym_word;
	v->a[19266] = state(323);
	v->a[19267] = 5;
	v->a[19268] = sym_arithmetic_expansion;
	v->a[19269] = sym_string;
	v->a[19270] = sym_simple_expansion;
	v->a[19271] = sym_expansion;
	v->a[19272] = sym_command_substitution;
	v->a[19273] = actions(23);
	v->a[19274] = 6;
	v->a[19275] = anon_sym_LT;
	v->a[19276] = anon_sym_GT;
	v->a[19277] = anon_sym_GT_GT;
	v->a[19278] = anon_sym_LT_AMP;
	v->a[19279] = anon_sym_GT_AMP;
	small_parse_table_964(v);
}

void	small_parse_table_964(t_small_parse_table_array *v)
{
	v->a[19280] = anon_sym_GT_PIPE;
	v->a[19281] = state(1191);
	v->a[19282] = 7;
	v->a[19283] = sym_for_statement;
	v->a[19284] = sym_while_statement;
	v->a[19285] = sym_if_statement;
	v->a[19286] = sym_compound_statement;
	v->a[19287] = sym_subshell;
	v->a[19288] = sym_command;
	v->a[19289] = sym__variable_assignments;
	v->a[19290] = 25;
	v->a[19291] = actions(3);
	v->a[19292] = 1;
	v->a[19293] = sym_comment;
	v->a[19294] = actions(9);
	v->a[19295] = 1;
	v->a[19296] = anon_sym_for;
	v->a[19297] = actions(13);
	v->a[19298] = 1;
	v->a[19299] = anon_sym_if;
	small_parse_table_965(v);
}

/* EOF small_parse_table_192.c */
