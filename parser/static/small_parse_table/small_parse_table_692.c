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
	v->a[69200] = actions(754);
	v->a[69201] = 2;
	v->a[69202] = anon_sym_LT_LT;
	v->a[69203] = anon_sym_LT_LT_DASH;
	v->a[69204] = actions(924);
	v->a[69205] = 2;
	v->a[69206] = anon_sym_AMP_AMP;
	v->a[69207] = anon_sym_PIPE_PIPE;
	v->a[69208] = actions(2063);
	v->a[69209] = 2;
	v->a[69210] = anon_sym_LT_AMP_DASH;
	v->a[69211] = anon_sym_GT_AMP_DASH;
	v->a[69212] = state(1268);
	v->a[69213] = 3;
	v->a[69214] = sym_file_redirect;
	v->a[69215] = sym_heredoc_redirect;
	v->a[69216] = aux_sym_redirected_statement_repeat1;
	v->a[69217] = actions(2061);
	v->a[69218] = 6;
	v->a[69219] = anon_sym_LT;
	small_parse_table_3461(v);
}

void	small_parse_table_3461(t_small_parse_table_array *v)
{
	v->a[69220] = anon_sym_GT;
	v->a[69221] = anon_sym_GT_GT;
	v->a[69222] = anon_sym_LT_AMP;
	v->a[69223] = anon_sym_GT_AMP;
	v->a[69224] = anon_sym_GT_PIPE;
	v->a[69225] = 12;
	v->a[69226] = actions(3);
	v->a[69227] = 1;
	v->a[69228] = sym_comment;
	v->a[69229] = actions(894);
	v->a[69230] = 1;
	v->a[69231] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69232] = actions(896);
	v->a[69233] = 1;
	v->a[69234] = anon_sym_DOLLAR;
	v->a[69235] = actions(898);
	v->a[69236] = 1;
	v->a[69237] = anon_sym_DQUOTE;
	v->a[69238] = actions(900);
	v->a[69239] = 1;
	small_parse_table_3462(v);
}

void	small_parse_table_3462(t_small_parse_table_array *v)
{
	v->a[69240] = anon_sym_DOLLAR_LBRACE;
	v->a[69241] = actions(902);
	v->a[69242] = 1;
	v->a[69243] = anon_sym_DOLLAR_LPAREN;
	v->a[69244] = actions(904);
	v->a[69245] = 1;
	v->a[69246] = anon_sym_BQUOTE;
	v->a[69247] = state(2100);
	v->a[69248] = 1;
	v->a[69249] = sym_terminator;
	v->a[69250] = state(1327);
	v->a[69251] = 2;
	v->a[69252] = sym_concatenation;
	v->a[69253] = aux_sym_for_statement_repeat1;
	v->a[69254] = actions(2260);
	v->a[69255] = 3;
	v->a[69256] = sym_raw_string;
	v->a[69257] = sym_number;
	v->a[69258] = sym_word;
	v->a[69259] = actions(2262);
	small_parse_table_3463(v);
}

void	small_parse_table_3463(t_small_parse_table_array *v)
{
	v->a[69260] = 4;
	v->a[69261] = anon_sym_SEMI_SEMI;
	v->a[69262] = aux_sym_heredoc_redirect_token1;
	v->a[69263] = anon_sym_AMP;
	v->a[69264] = anon_sym_SEMI;
	v->a[69265] = state(1543);
	v->a[69266] = 5;
	v->a[69267] = sym_arithmetic_expansion;
	v->a[69268] = sym_string;
	v->a[69269] = sym_simple_expansion;
	v->a[69270] = sym_expansion;
	v->a[69271] = sym_command_substitution;
	v->a[69272] = 3;
	v->a[69273] = actions(3);
	v->a[69274] = 1;
	v->a[69275] = sym_comment;
	v->a[69276] = actions(2313);
	v->a[69277] = 3;
	v->a[69278] = sym_file_descriptor;
	v->a[69279] = ts_builtin_sym_end;
	small_parse_table_3464(v);
}

void	small_parse_table_3464(t_small_parse_table_array *v)
{
	v->a[69280] = aux_sym_heredoc_redirect_token1;
	v->a[69281] = actions(2315);
	v->a[69282] = 18;
	v->a[69283] = anon_sym_PIPE;
	v->a[69284] = anon_sym_RPAREN;
	v->a[69285] = anon_sym_SEMI_SEMI;
	v->a[69286] = anon_sym_AMP_AMP;
	v->a[69287] = anon_sym_PIPE_PIPE;
	v->a[69288] = anon_sym_LT;
	v->a[69289] = anon_sym_GT;
	v->a[69290] = anon_sym_GT_GT;
	v->a[69291] = anon_sym_LT_AMP;
	v->a[69292] = anon_sym_GT_AMP;
	v->a[69293] = anon_sym_GT_PIPE;
	v->a[69294] = anon_sym_LT_AMP_DASH;
	v->a[69295] = anon_sym_GT_AMP_DASH;
	v->a[69296] = anon_sym_LT_LT;
	v->a[69297] = anon_sym_LT_LT_DASH;
	v->a[69298] = anon_sym_AMP;
	v->a[69299] = anon_sym_BQUOTE;
	small_parse_table_3465(v);
}

/* EOF small_parse_table_692.c */
