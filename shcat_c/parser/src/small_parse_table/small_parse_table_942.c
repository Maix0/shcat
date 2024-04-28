/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_942.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4710(t_small_parse_table_array *v)
{
	v->a[94200] = aux_sym_heredoc_redirect_token1;
	v->a[94201] = actions(5828);
	v->a[94202] = 1;
	v->a[94203] = sym_file_descriptor;
	v->a[94204] = actions(6117);
	v->a[94205] = 1;
	v->a[94206] = anon_sym_RPAREN;
	v->a[94207] = actions(5831);
	v->a[94208] = 3;
	v->a[94209] = sym_variable_name;
	v->a[94210] = sym_test_operator;
	v->a[94211] = sym__brace_start;
	v->a[94212] = actions(5821);
	v->a[94213] = 9;
	v->a[94214] = anon_sym_SEMI;
	v->a[94215] = anon_sym_PIPE_PIPE;
	v->a[94216] = anon_sym_AMP_AMP;
	v->a[94217] = anon_sym_PIPE;
	v->a[94218] = anon_sym_AMP;
	v->a[94219] = anon_sym_LT_LT;
	small_parse_table_4711(v);
}

void	small_parse_table_4711(t_small_parse_table_array *v)
{
	v->a[94220] = anon_sym_SEMI_SEMI;
	v->a[94221] = anon_sym_PIPE_AMP;
	v->a[94222] = anon_sym_LT_LT_DASH;
	v->a[94223] = actions(5823);
	v->a[94224] = 11;
	v->a[94225] = anon_sym_LT;
	v->a[94226] = anon_sym_GT;
	v->a[94227] = anon_sym_GT_GT;
	v->a[94228] = anon_sym_AMP_GT;
	v->a[94229] = anon_sym_AMP_GT_GT;
	v->a[94230] = anon_sym_LT_AMP;
	v->a[94231] = anon_sym_GT_AMP;
	v->a[94232] = anon_sym_GT_PIPE;
	v->a[94233] = anon_sym_LT_AMP_DASH;
	v->a[94234] = anon_sym_GT_AMP_DASH;
	v->a[94235] = anon_sym_LT_LT_LT;
	v->a[94236] = actions(5819);
	v->a[94237] = 17;
	v->a[94238] = anon_sym_LPAREN_LPAREN;
	v->a[94239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4712(v);
}

void	small_parse_table_4712(t_small_parse_table_array *v)
{
	v->a[94240] = anon_sym_DOLLAR_LBRACK;
	v->a[94241] = anon_sym_DOLLAR;
	v->a[94242] = sym__special_character;
	v->a[94243] = anon_sym_DQUOTE;
	v->a[94244] = sym_raw_string;
	v->a[94245] = sym_ansi_c_string;
	v->a[94246] = aux_sym_number_token1;
	v->a[94247] = aux_sym_number_token2;
	v->a[94248] = anon_sym_DOLLAR_LBRACE;
	v->a[94249] = anon_sym_DOLLAR_LPAREN;
	v->a[94250] = anon_sym_BQUOTE;
	v->a[94251] = anon_sym_DOLLAR_BQUOTE;
	v->a[94252] = anon_sym_LT_LPAREN;
	v->a[94253] = anon_sym_GT_LPAREN;
	v->a[94254] = sym_word;
	v->a[94255] = 26;
	v->a[94256] = actions(71);
	v->a[94257] = 1;
	v->a[94258] = sym_comment;
	v->a[94259] = actions(1127);
	small_parse_table_4713(v);
}

void	small_parse_table_4713(t_small_parse_table_array *v)
{
	v->a[94260] = 1;
	v->a[94261] = sym_word;
	v->a[94262] = actions(1131);
	v->a[94263] = 1;
	v->a[94264] = anon_sym_LPAREN;
	v->a[94265] = actions(1133);
	v->a[94266] = 1;
	v->a[94267] = anon_sym_BANG;
	v->a[94268] = actions(1139);
	v->a[94269] = 1;
	v->a[94270] = anon_sym_TILDE;
	v->a[94271] = actions(1141);
	v->a[94272] = 1;
	v->a[94273] = anon_sym_DOLLAR_LBRACK;
	v->a[94274] = actions(1145);
	v->a[94275] = 1;
	v->a[94276] = anon_sym_DOLLAR;
	v->a[94277] = actions(1147);
	v->a[94278] = 1;
	v->a[94279] = sym__special_character;
	small_parse_table_4714(v);
}

void	small_parse_table_4714(t_small_parse_table_array *v)
{
	v->a[94280] = actions(1149);
	v->a[94281] = 1;
	v->a[94282] = anon_sym_DQUOTE;
	v->a[94283] = actions(1153);
	v->a[94284] = 1;
	v->a[94285] = aux_sym_number_token1;
	v->a[94286] = actions(1155);
	v->a[94287] = 1;
	v->a[94288] = aux_sym_number_token2;
	v->a[94289] = actions(1157);
	v->a[94290] = 1;
	v->a[94291] = anon_sym_DOLLAR_LBRACE;
	v->a[94292] = actions(1159);
	v->a[94293] = 1;
	v->a[94294] = anon_sym_DOLLAR_LPAREN;
	v->a[94295] = actions(1163);
	v->a[94296] = 1;
	v->a[94297] = anon_sym_DOLLAR_BQUOTE;
	v->a[94298] = actions(1167);
	v->a[94299] = 1;
	small_parse_table_4715(v);
}

/* EOF small_parse_table_942.c */
