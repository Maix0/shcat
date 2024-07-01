/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_462.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2310(t_small_parse_table_array *v)
{
	v->a[46200] = anon_sym_PIPE;
	v->a[46201] = anon_sym_SEMI_SEMI;
	v->a[46202] = anon_sym_AMP_AMP;
	v->a[46203] = anon_sym_PIPE_PIPE;
	v->a[46204] = anon_sym_LT;
	v->a[46205] = anon_sym_GT;
	v->a[46206] = anon_sym_GT_GT;
	v->a[46207] = anon_sym_LT_AMP;
	v->a[46208] = anon_sym_GT_AMP;
	v->a[46209] = anon_sym_GT_PIPE;
	v->a[46210] = anon_sym_LT_AMP_DASH;
	v->a[46211] = anon_sym_GT_AMP_DASH;
	v->a[46212] = anon_sym_LT_LT;
	v->a[46213] = anon_sym_LT_LT_DASH;
	v->a[46214] = aux_sym_heredoc_redirect_token1;
	v->a[46215] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46216] = anon_sym_AMP;
	v->a[46217] = anon_sym_DOLLAR;
	v->a[46218] = anon_sym_DQUOTE;
	v->a[46219] = sym_raw_string;
	small_parse_table_2311(v);
}

void	small_parse_table_2311(t_small_parse_table_array *v)
{
	v->a[46220] = sym_number;
	v->a[46221] = anon_sym_DOLLAR_LBRACE;
	v->a[46222] = anon_sym_DOLLAR_LPAREN;
	v->a[46223] = anon_sym_BQUOTE;
	v->a[46224] = sym_word;
	v->a[46225] = anon_sym_SEMI;
	v->a[46226] = 17;
	v->a[46227] = actions(3);
	v->a[46228] = 1;
	v->a[46229] = sym_comment;
	v->a[46230] = actions(59);
	v->a[46231] = 1;
	v->a[46232] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46233] = actions(61);
	v->a[46234] = 1;
	v->a[46235] = anon_sym_DOLLAR;
	v->a[46236] = actions(63);
	v->a[46237] = 1;
	v->a[46238] = anon_sym_DQUOTE;
	v->a[46239] = actions(67);
	small_parse_table_2312(v);
}

void	small_parse_table_2312(t_small_parse_table_array *v)
{
	v->a[46240] = 1;
	v->a[46241] = anon_sym_DOLLAR_LBRACE;
	v->a[46242] = actions(69);
	v->a[46243] = 1;
	v->a[46244] = anon_sym_DOLLAR_LPAREN;
	v->a[46245] = actions(71);
	v->a[46246] = 1;
	v->a[46247] = anon_sym_BQUOTE;
	v->a[46248] = actions(377);
	v->a[46249] = 1;
	v->a[46250] = sym_variable_name;
	v->a[46251] = actions(1256);
	v->a[46252] = 1;
	v->a[46253] = sym_file_descriptor;
	v->a[46254] = state(182);
	v->a[46255] = 1;
	v->a[46256] = sym_command_name;
	v->a[46257] = state(650);
	v->a[46258] = 1;
	v->a[46259] = sym_concatenation;
	small_parse_table_2313(v);
}

void	small_parse_table_2313(t_small_parse_table_array *v)
{
	v->a[46260] = state(1385);
	v->a[46261] = 1;
	v->a[46262] = sym_file_redirect;
	v->a[46263] = actions(1254);
	v->a[46264] = 2;
	v->a[46265] = anon_sym_LT_AMP_DASH;
	v->a[46266] = anon_sym_GT_AMP_DASH;
	v->a[46267] = state(1132);
	v->a[46268] = 2;
	v->a[46269] = sym_variable_assignment;
	v->a[46270] = aux_sym_command_repeat1;
	v->a[46271] = actions(228);
	v->a[46272] = 3;
	v->a[46273] = sym_raw_string;
	v->a[46274] = sym_number;
	v->a[46275] = sym_word;
	v->a[46276] = state(382);
	v->a[46277] = 5;
	v->a[46278] = sym_arithmetic_expansion;
	v->a[46279] = sym_string;
	small_parse_table_2314(v);
}

void	small_parse_table_2314(t_small_parse_table_array *v)
{
	v->a[46280] = sym_simple_expansion;
	v->a[46281] = sym_expansion;
	v->a[46282] = sym_command_substitution;
	v->a[46283] = actions(1252);
	v->a[46284] = 6;
	v->a[46285] = anon_sym_LT;
	v->a[46286] = anon_sym_GT;
	v->a[46287] = anon_sym_GT_GT;
	v->a[46288] = anon_sym_LT_AMP;
	v->a[46289] = anon_sym_GT_AMP;
	v->a[46290] = anon_sym_GT_PIPE;
	v->a[46291] = 6;
	v->a[46292] = actions(3);
	v->a[46293] = 1;
	v->a[46294] = sym_comment;
	v->a[46295] = actions(1083);
	v->a[46296] = 1;
	v->a[46297] = aux_sym_concatenation_token1;
	v->a[46298] = actions(1185);
	v->a[46299] = 1;
	small_parse_table_2315(v);
}

/* EOF small_parse_table_462.c */
