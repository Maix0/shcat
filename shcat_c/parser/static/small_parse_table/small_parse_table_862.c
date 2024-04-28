/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_862.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4310(t_small_parse_table_array *v)
{
	v->a[86200] = anon_sym_GT_AMP_DASH;
	v->a[86201] = anon_sym_LT_LT_DASH;
	v->a[86202] = anon_sym_LT_LT_LT;
	v->a[86203] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86204] = anon_sym_DOLLAR_LBRACK;
	v->a[86205] = sym__special_character;
	v->a[86206] = anon_sym_DQUOTE;
	v->a[86207] = sym_raw_string;
	v->a[86208] = sym_ansi_c_string;
	v->a[86209] = anon_sym_DOLLAR_LBRACE;
	v->a[86210] = anon_sym_DOLLAR_BQUOTE;
	v->a[86211] = anon_sym_LT_LPAREN;
	v->a[86212] = anon_sym_GT_LPAREN;
	v->a[86213] = 3;
	v->a[86214] = actions(3);
	v->a[86215] = 1;
	v->a[86216] = sym_comment;
	v->a[86217] = actions(1354);
	v->a[86218] = 5;
	v->a[86219] = sym_file_descriptor;
	small_parse_table_4311(v);
}

void	small_parse_table_4311(t_small_parse_table_array *v)
{
	v->a[86220] = sym__concat;
	v->a[86221] = sym_test_operator;
	v->a[86222] = sym__brace_start;
	v->a[86223] = aux_sym_heredoc_redirect_token1;
	v->a[86224] = actions(1352);
	v->a[86225] = 39;
	v->a[86226] = anon_sym_LPAREN_LPAREN;
	v->a[86227] = anon_sym_SEMI;
	v->a[86228] = anon_sym_PIPE_PIPE;
	v->a[86229] = anon_sym_AMP_AMP;
	v->a[86230] = anon_sym_PIPE;
	v->a[86231] = anon_sym_AMP;
	v->a[86232] = anon_sym_LT;
	v->a[86233] = anon_sym_GT;
	v->a[86234] = anon_sym_LT_LT;
	v->a[86235] = anon_sym_GT_GT;
	v->a[86236] = anon_sym_RPAREN;
	v->a[86237] = anon_sym_SEMI_SEMI;
	v->a[86238] = anon_sym_PIPE_AMP;
	v->a[86239] = anon_sym_AMP_GT;
	small_parse_table_4312(v);
}

void	small_parse_table_4312(t_small_parse_table_array *v)
{
	v->a[86240] = anon_sym_AMP_GT_GT;
	v->a[86241] = anon_sym_LT_AMP;
	v->a[86242] = anon_sym_GT_AMP;
	v->a[86243] = anon_sym_GT_PIPE;
	v->a[86244] = anon_sym_LT_AMP_DASH;
	v->a[86245] = anon_sym_GT_AMP_DASH;
	v->a[86246] = anon_sym_LT_LT_DASH;
	v->a[86247] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86248] = anon_sym_DOLLAR_LBRACK;
	v->a[86249] = aux_sym_concatenation_token1;
	v->a[86250] = anon_sym_DOLLAR;
	v->a[86251] = sym__special_character;
	v->a[86252] = anon_sym_DQUOTE;
	v->a[86253] = sym_raw_string;
	v->a[86254] = sym_ansi_c_string;
	v->a[86255] = aux_sym_number_token1;
	v->a[86256] = aux_sym_number_token2;
	v->a[86257] = anon_sym_DOLLAR_LBRACE;
	v->a[86258] = anon_sym_DOLLAR_LPAREN;
	v->a[86259] = anon_sym_BQUOTE;
	small_parse_table_4313(v);
}

void	small_parse_table_4313(t_small_parse_table_array *v)
{
	v->a[86260] = anon_sym_DOLLAR_BQUOTE;
	v->a[86261] = anon_sym_LT_LPAREN;
	v->a[86262] = anon_sym_GT_LPAREN;
	v->a[86263] = aux_sym__simple_variable_name_token1;
	v->a[86264] = sym_word;
	v->a[86265] = 5;
	v->a[86266] = actions(71);
	v->a[86267] = 1;
	v->a[86268] = sym_comment;
	v->a[86269] = state(1901);
	v->a[86270] = 1;
	v->a[86271] = aux_sym_concatenation_repeat1;
	v->a[86272] = actions(5986);
	v->a[86273] = 2;
	v->a[86274] = sym__concat;
	v->a[86275] = aux_sym_concatenation_token1;
	v->a[86276] = actions(1271);
	v->a[86277] = 16;
	v->a[86278] = anon_sym_PIPE;
	v->a[86279] = anon_sym_EQ_EQ;
	small_parse_table_4314(v);
}

void	small_parse_table_4314(t_small_parse_table_array *v)
{
	v->a[86280] = anon_sym_LT;
	v->a[86281] = anon_sym_GT;
	v->a[86282] = anon_sym_LT_LT;
	v->a[86283] = anon_sym_LPAREN;
	v->a[86284] = anon_sym_EQ_TILDE;
	v->a[86285] = anon_sym_AMP_GT;
	v->a[86286] = anon_sym_LT_AMP;
	v->a[86287] = anon_sym_GT_AMP;
	v->a[86288] = anon_sym_DOLLAR;
	v->a[86289] = aux_sym_number_token1;
	v->a[86290] = aux_sym_number_token2;
	v->a[86291] = anon_sym_DOLLAR_LPAREN;
	v->a[86292] = anon_sym_BQUOTE;
	v->a[86293] = sym_word;
	v->a[86294] = actions(1281);
	v->a[86295] = 25;
	v->a[86296] = sym_file_descriptor;
	v->a[86297] = sym_test_operator;
	v->a[86298] = sym__bare_dollar;
	v->a[86299] = sym__brace_start;
	small_parse_table_4315(v);
}

/* EOF small_parse_table_862.c */
