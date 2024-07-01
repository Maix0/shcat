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
	v->a[69200] = sym__concat;
	v->a[69201] = aux_sym_concatenation_token1;
	v->a[69202] = actions(1207);
	v->a[69203] = 4;
	v->a[69204] = anon_sym_PIPE;
	v->a[69205] = anon_sym_LT;
	v->a[69206] = anon_sym_GT;
	v->a[69207] = anon_sym_LT_LT;
	v->a[69208] = actions(1209);
	v->a[69209] = 10;
	v->a[69210] = sym_file_descriptor;
	v->a[69211] = sym_variable_name;
	v->a[69212] = anon_sym_AMP_AMP;
	v->a[69213] = anon_sym_PIPE_PIPE;
	v->a[69214] = anon_sym_GT_GT;
	v->a[69215] = anon_sym_LT_AMP;
	v->a[69216] = anon_sym_GT_AMP;
	v->a[69217] = anon_sym_GT_PIPE;
	v->a[69218] = anon_sym_LT_GT;
	v->a[69219] = anon_sym_LT_LT_DASH;
	small_parse_table_3461(v);
}

void	small_parse_table_3461(t_small_parse_table_array *v)
{
	v->a[69220] = 10;
	v->a[69221] = actions(3);
	v->a[69222] = 1;
	v->a[69223] = sym_comment;
	v->a[69224] = actions(1638);
	v->a[69225] = 1;
	v->a[69226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69227] = actions(1640);
	v->a[69228] = 1;
	v->a[69229] = anon_sym_DOLLAR;
	v->a[69230] = actions(1642);
	v->a[69231] = 1;
	v->a[69232] = anon_sym_DQUOTE;
	v->a[69233] = actions(1644);
	v->a[69234] = 1;
	v->a[69235] = anon_sym_DOLLAR_LBRACE;
	v->a[69236] = actions(1646);
	v->a[69237] = 1;
	v->a[69238] = anon_sym_DOLLAR_LPAREN;
	v->a[69239] = actions(1648);
	small_parse_table_3462(v);
}

void	small_parse_table_3462(t_small_parse_table_array *v)
{
	v->a[69240] = 1;
	v->a[69241] = anon_sym_BQUOTE;
	v->a[69242] = actions(2510);
	v->a[69243] = 1;
	v->a[69244] = sym__bare_dollar;
	v->a[69245] = actions(2506);
	v->a[69246] = 5;
	v->a[69247] = aux_sym_concatenation_token1;
	v->a[69248] = sym_raw_string;
	v->a[69249] = sym_number;
	v->a[69250] = sym__comment_word;
	v->a[69251] = sym_word;
	v->a[69252] = state(1863);
	v->a[69253] = 5;
	v->a[69254] = sym_arithmetic_expansion;
	v->a[69255] = sym_string;
	v->a[69256] = sym_simple_expansion;
	v->a[69257] = sym_expansion;
	v->a[69258] = sym_command_substitution;
	v->a[69259] = 12;
	small_parse_table_3463(v);
}

void	small_parse_table_3463(t_small_parse_table_array *v)
{
	v->a[69260] = actions(3);
	v->a[69261] = 1;
	v->a[69262] = sym_comment;
	v->a[69263] = actions(1074);
	v->a[69264] = 1;
	v->a[69265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69266] = actions(1076);
	v->a[69267] = 1;
	v->a[69268] = anon_sym_DOLLAR;
	v->a[69269] = actions(1078);
	v->a[69270] = 1;
	v->a[69271] = anon_sym_DQUOTE;
	v->a[69272] = actions(1080);
	v->a[69273] = 1;
	v->a[69274] = anon_sym_DOLLAR_LBRACE;
	v->a[69275] = actions(1082);
	v->a[69276] = 1;
	v->a[69277] = anon_sym_DOLLAR_LPAREN;
	v->a[69278] = actions(1084);
	v->a[69279] = 1;
	small_parse_table_3464(v);
}

void	small_parse_table_3464(t_small_parse_table_array *v)
{
	v->a[69280] = anon_sym_BQUOTE;
	v->a[69281] = actions(2712);
	v->a[69282] = 1;
	v->a[69283] = aux_sym_heredoc_redirect_token1;
	v->a[69284] = state(1338);
	v->a[69285] = 1;
	v->a[69286] = aux_sym__heredoc_command;
	v->a[69287] = state(1721);
	v->a[69288] = 1;
	v->a[69289] = sym_concatenation;
	v->a[69290] = actions(1064);
	v->a[69291] = 3;
	v->a[69292] = sym_raw_string;
	v->a[69293] = sym_number;
	v->a[69294] = sym_word;
	v->a[69295] = state(1573);
	v->a[69296] = 5;
	v->a[69297] = sym_arithmetic_expansion;
	v->a[69298] = sym_string;
	v->a[69299] = sym_simple_expansion;
	small_parse_table_3465(v);
}

/* EOF small_parse_table_692.c */
