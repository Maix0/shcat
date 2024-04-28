/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1206.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6030(t_small_parse_table_array *v)
{
	v->a[120600] = anon_sym_EQ_EQ;
	v->a[120601] = anon_sym_BANG_EQ;
	v->a[120602] = anon_sym_LT_EQ;
	v->a[120603] = anon_sym_GT_EQ;
	v->a[120604] = anon_sym_RBRACK_RBRACK;
	v->a[120605] = anon_sym_EQ_TILDE;
	v->a[120606] = anon_sym_QMARK;
	v->a[120607] = anon_sym_COLON;
	v->a[120608] = aux_sym_concatenation_token1;
	v->a[120609] = 3;
	v->a[120610] = actions(3);
	v->a[120611] = 1;
	v->a[120612] = sym_comment;
	v->a[120613] = actions(1263);
	v->a[120614] = 4;
	v->a[120615] = sym_file_descriptor;
	v->a[120616] = sym_test_operator;
	v->a[120617] = sym__brace_start;
	v->a[120618] = aux_sym_heredoc_redirect_token1;
	v->a[120619] = actions(1261);
	small_parse_table_6031(v);
}

void	small_parse_table_6031(t_small_parse_table_array *v)
{
	v->a[120620] = 38;
	v->a[120621] = anon_sym_LPAREN_LPAREN;
	v->a[120622] = anon_sym_SEMI;
	v->a[120623] = anon_sym_PIPE_PIPE;
	v->a[120624] = anon_sym_AMP_AMP;
	v->a[120625] = anon_sym_PIPE;
	v->a[120626] = anon_sym_AMP;
	v->a[120627] = anon_sym_LT;
	v->a[120628] = anon_sym_GT;
	v->a[120629] = anon_sym_LT_LT;
	v->a[120630] = anon_sym_GT_GT;
	v->a[120631] = anon_sym_SEMI_SEMI;
	v->a[120632] = anon_sym_SEMI_AMP;
	v->a[120633] = anon_sym_SEMI_SEMI_AMP;
	v->a[120634] = anon_sym_PIPE_AMP;
	v->a[120635] = anon_sym_AMP_GT;
	v->a[120636] = anon_sym_AMP_GT_GT;
	v->a[120637] = anon_sym_LT_AMP;
	v->a[120638] = anon_sym_GT_AMP;
	v->a[120639] = anon_sym_GT_PIPE;
	small_parse_table_6032(v);
}

void	small_parse_table_6032(t_small_parse_table_array *v)
{
	v->a[120640] = anon_sym_LT_AMP_DASH;
	v->a[120641] = anon_sym_GT_AMP_DASH;
	v->a[120642] = anon_sym_LT_LT_DASH;
	v->a[120643] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120644] = anon_sym_DOLLAR_LBRACK;
	v->a[120645] = anon_sym_DOLLAR;
	v->a[120646] = sym__special_character;
	v->a[120647] = anon_sym_DQUOTE;
	v->a[120648] = sym_raw_string;
	v->a[120649] = sym_ansi_c_string;
	v->a[120650] = aux_sym_number_token1;
	v->a[120651] = aux_sym_number_token2;
	v->a[120652] = anon_sym_DOLLAR_LBRACE;
	v->a[120653] = anon_sym_DOLLAR_LPAREN;
	v->a[120654] = anon_sym_BQUOTE;
	v->a[120655] = anon_sym_DOLLAR_BQUOTE;
	v->a[120656] = anon_sym_LT_LPAREN;
	v->a[120657] = anon_sym_GT_LPAREN;
	v->a[120658] = sym_word;
	v->a[120659] = 3;
	small_parse_table_6033(v);
}

void	small_parse_table_6033(t_small_parse_table_array *v)
{
	v->a[120660] = actions(3);
	v->a[120661] = 1;
	v->a[120662] = sym_comment;
	v->a[120663] = actions(1263);
	v->a[120664] = 5;
	v->a[120665] = sym_file_descriptor;
	v->a[120666] = sym_test_operator;
	v->a[120667] = sym__brace_start;
	v->a[120668] = ts_builtin_sym_end;
	v->a[120669] = aux_sym_heredoc_redirect_token1;
	v->a[120670] = actions(1261);
	v->a[120671] = 37;
	v->a[120672] = anon_sym_LPAREN_LPAREN;
	v->a[120673] = anon_sym_SEMI;
	v->a[120674] = anon_sym_PIPE_PIPE;
	v->a[120675] = anon_sym_AMP_AMP;
	v->a[120676] = anon_sym_PIPE;
	v->a[120677] = anon_sym_AMP;
	v->a[120678] = anon_sym_LT;
	v->a[120679] = anon_sym_GT;
	small_parse_table_6034(v);
}

void	small_parse_table_6034(t_small_parse_table_array *v)
{
	v->a[120680] = anon_sym_LT_LT;
	v->a[120681] = anon_sym_GT_GT;
	v->a[120682] = anon_sym_SEMI_SEMI;
	v->a[120683] = anon_sym_PIPE_AMP;
	v->a[120684] = anon_sym_AMP_GT;
	v->a[120685] = anon_sym_AMP_GT_GT;
	v->a[120686] = anon_sym_LT_AMP;
	v->a[120687] = anon_sym_GT_AMP;
	v->a[120688] = anon_sym_GT_PIPE;
	v->a[120689] = anon_sym_LT_AMP_DASH;
	v->a[120690] = anon_sym_GT_AMP_DASH;
	v->a[120691] = anon_sym_LT_LT_DASH;
	v->a[120692] = anon_sym_LT_LT_LT;
	v->a[120693] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120694] = anon_sym_DOLLAR_LBRACK;
	v->a[120695] = anon_sym_DOLLAR;
	v->a[120696] = sym__special_character;
	v->a[120697] = anon_sym_DQUOTE;
	v->a[120698] = sym_raw_string;
	v->a[120699] = sym_ansi_c_string;
	small_parse_table_6035(v);
}

/* EOF small_parse_table_1206.c */
