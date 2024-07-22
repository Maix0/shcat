/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_692.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3460(t_small_parse_table_array *v)
{
	v->a[69200] = 1;
	v->a[69201] = sym_comment;
	v->a[69202] = actions(2611);
	v->a[69203] = 1;
	v->a[69204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69205] = actions(2613);
	v->a[69206] = 1;
	v->a[69207] = anon_sym_DOLLAR;
	v->a[69208] = actions(2615);
	v->a[69209] = 1;
	v->a[69210] = anon_sym_DQUOTE;
	v->a[69211] = actions(2617);
	v->a[69212] = 1;
	v->a[69213] = anon_sym_DOLLAR_LBRACE;
	v->a[69214] = actions(2619);
	v->a[69215] = 1;
	v->a[69216] = anon_sym_DOLLAR_LPAREN;
	v->a[69217] = actions(2621);
	v->a[69218] = 1;
	v->a[69219] = anon_sym_BQUOTE;
	small_parse_table_3461(v);
}

void	small_parse_table_3461(t_small_parse_table_array *v)
{
	v->a[69220] = state(193);
	v->a[69221] = 2;
	v->a[69222] = sym_concatenation;
	v->a[69223] = aux_sym_for_statement_repeat1;
	v->a[69224] = actions(2753);
	v->a[69225] = 3;
	v->a[69226] = sym_raw_string;
	v->a[69227] = sym_number;
	v->a[69228] = sym_word;
	v->a[69229] = state(387);
	v->a[69230] = 5;
	v->a[69231] = sym_arithmetic_expansion;
	v->a[69232] = sym_string;
	v->a[69233] = sym_simple_expansion;
	v->a[69234] = sym_expansion;
	v->a[69235] = sym_command_substitution;
	v->a[69236] = 3;
	v->a[69237] = actions(501);
	v->a[69238] = 1;
	v->a[69239] = sym_comment;
	small_parse_table_3462(v);
}

void	small_parse_table_3462(t_small_parse_table_array *v)
{
	v->a[69240] = actions(692);
	v->a[69241] = 4;
	v->a[69242] = anon_sym_PIPE;
	v->a[69243] = anon_sym_LT;
	v->a[69244] = anon_sym_GT;
	v->a[69245] = anon_sym_LT_LT;
	v->a[69246] = actions(694);
	v->a[69247] = 12;
	v->a[69248] = sym_file_descriptor;
	v->a[69249] = sym__concat;
	v->a[69250] = sym_variable_name;
	v->a[69251] = anon_sym_AMP_AMP;
	v->a[69252] = anon_sym_PIPE_PIPE;
	v->a[69253] = anon_sym_GT_GT;
	v->a[69254] = anon_sym_LT_AMP;
	v->a[69255] = anon_sym_GT_AMP;
	v->a[69256] = anon_sym_GT_PIPE;
	v->a[69257] = anon_sym_LT_GT;
	v->a[69258] = anon_sym_LT_LT_DASH;
	v->a[69259] = aux_sym_concatenation_token1;
	small_parse_table_3463(v);
}

void	small_parse_table_3463(t_small_parse_table_array *v)
{
	v->a[69260] = 10;
	v->a[69261] = actions(3);
	v->a[69262] = 1;
	v->a[69263] = sym_comment;
	v->a[69264] = actions(962);
	v->a[69265] = 1;
	v->a[69266] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69267] = actions(964);
	v->a[69268] = 1;
	v->a[69269] = anon_sym_DOLLAR;
	v->a[69270] = actions(966);
	v->a[69271] = 1;
	v->a[69272] = anon_sym_DQUOTE;
	v->a[69273] = actions(968);
	v->a[69274] = 1;
	v->a[69275] = anon_sym_DOLLAR_LBRACE;
	v->a[69276] = actions(970);
	v->a[69277] = 1;
	v->a[69278] = anon_sym_DOLLAR_LPAREN;
	v->a[69279] = actions(972);
	small_parse_table_3464(v);
}

void	small_parse_table_3464(t_small_parse_table_array *v)
{
	v->a[69280] = 1;
	v->a[69281] = anon_sym_BQUOTE;
	v->a[69282] = state(348);
	v->a[69283] = 2;
	v->a[69284] = sym_concatenation;
	v->a[69285] = aux_sym_for_statement_repeat1;
	v->a[69286] = actions(1033);
	v->a[69287] = 3;
	v->a[69288] = sym_raw_string;
	v->a[69289] = sym_number;
	v->a[69290] = sym_word;
	v->a[69291] = state(623);
	v->a[69292] = 5;
	v->a[69293] = sym_arithmetic_expansion;
	v->a[69294] = sym_string;
	v->a[69295] = sym_simple_expansion;
	v->a[69296] = sym_expansion;
	v->a[69297] = sym_command_substitution;
	v->a[69298] = 3;
	v->a[69299] = actions(501);
	small_parse_table_3465(v);
}

/* EOF small_parse_table_692.c */
