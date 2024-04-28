/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_586.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2930(t_small_parse_table_array *v)
{
	v->a[58600] = anon_sym_PIPE;
	v->a[58601] = anon_sym_AMP;
	v->a[58602] = anon_sym_EQ_EQ;
	v->a[58603] = anon_sym_LT;
	v->a[58604] = anon_sym_GT;
	v->a[58605] = anon_sym_LT_LT;
	v->a[58606] = anon_sym_GT_GT;
	v->a[58607] = anon_sym_SEMI_SEMI;
	v->a[58608] = anon_sym_PIPE_AMP;
	v->a[58609] = anon_sym_EQ_TILDE;
	v->a[58610] = anon_sym_AMP_GT;
	v->a[58611] = anon_sym_AMP_GT_GT;
	v->a[58612] = anon_sym_LT_AMP;
	v->a[58613] = anon_sym_GT_AMP;
	v->a[58614] = anon_sym_GT_PIPE;
	v->a[58615] = anon_sym_LT_AMP_DASH;
	v->a[58616] = anon_sym_GT_AMP_DASH;
	v->a[58617] = anon_sym_LT_LT_DASH;
	v->a[58618] = anon_sym_LT_LT_LT;
	v->a[58619] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2931(v);
}

void	small_parse_table_2931(t_small_parse_table_array *v)
{
	v->a[58620] = anon_sym_DOLLAR_LBRACK;
	v->a[58621] = anon_sym_DOLLAR;
	v->a[58622] = anon_sym_DQUOTE;
	v->a[58623] = sym_raw_string;
	v->a[58624] = sym_ansi_c_string;
	v->a[58625] = aux_sym_number_token1;
	v->a[58626] = aux_sym_number_token2;
	v->a[58627] = anon_sym_DOLLAR_LBRACE;
	v->a[58628] = anon_sym_DOLLAR_LPAREN;
	v->a[58629] = anon_sym_BQUOTE;
	v->a[58630] = anon_sym_DOLLAR_BQUOTE;
	v->a[58631] = anon_sym_LT_LPAREN;
	v->a[58632] = anon_sym_GT_LPAREN;
	v->a[58633] = sym_word;
	v->a[58634] = 21;
	v->a[58635] = actions(3);
	v->a[58636] = 1;
	v->a[58637] = sym_comment;
	v->a[58638] = actions(5565);
	v->a[58639] = 1;
	small_parse_table_2932(v);
}

void	small_parse_table_2932(t_small_parse_table_array *v)
{
	v->a[58640] = anon_sym_DOLLAR_LBRACK;
	v->a[58641] = actions(5568);
	v->a[58642] = 1;
	v->a[58643] = anon_sym_DOLLAR;
	v->a[58644] = actions(5571);
	v->a[58645] = 1;
	v->a[58646] = sym__special_character;
	v->a[58647] = actions(5574);
	v->a[58648] = 1;
	v->a[58649] = anon_sym_DQUOTE;
	v->a[58650] = actions(5577);
	v->a[58651] = 1;
	v->a[58652] = aux_sym_number_token1;
	v->a[58653] = actions(5580);
	v->a[58654] = 1;
	v->a[58655] = aux_sym_number_token2;
	v->a[58656] = actions(5583);
	v->a[58657] = 1;
	v->a[58658] = anon_sym_DOLLAR_LBRACE;
	v->a[58659] = actions(5586);
	small_parse_table_2933(v);
}

void	small_parse_table_2933(t_small_parse_table_array *v)
{
	v->a[58660] = 1;
	v->a[58661] = anon_sym_DOLLAR_LPAREN;
	v->a[58662] = actions(5589);
	v->a[58663] = 1;
	v->a[58664] = anon_sym_BQUOTE;
	v->a[58665] = actions(5592);
	v->a[58666] = 1;
	v->a[58667] = anon_sym_DOLLAR_BQUOTE;
	v->a[58668] = actions(5598);
	v->a[58669] = 1;
	v->a[58670] = sym_test_operator;
	v->a[58671] = actions(5601);
	v->a[58672] = 1;
	v->a[58673] = sym__brace_start;
	v->a[58674] = state(3469);
	v->a[58675] = 1;
	v->a[58676] = aux_sym__literal_repeat1;
	v->a[58677] = actions(2216);
	v->a[58678] = 2;
	v->a[58679] = sym_file_descriptor;
	small_parse_table_2934(v);
}

void	small_parse_table_2934(t_small_parse_table_array *v)
{
	v->a[58680] = aux_sym_heredoc_redirect_token1;
	v->a[58681] = actions(5562);
	v->a[58682] = 2;
	v->a[58683] = anon_sym_LPAREN_LPAREN;
	v->a[58684] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58685] = actions(5595);
	v->a[58686] = 2;
	v->a[58687] = anon_sym_LT_LPAREN;
	v->a[58688] = anon_sym_GT_LPAREN;
	v->a[58689] = state(1314);
	v->a[58690] = 2;
	v->a[58691] = sym_concatenation;
	v->a[58692] = aux_sym_for_statement_repeat1;
	v->a[58693] = actions(5559);
	v->a[58694] = 3;
	v->a[58695] = sym_raw_string;
	v->a[58696] = sym_ansi_c_string;
	v->a[58697] = sym_word;
	v->a[58698] = state(3093);
	v->a[58699] = 9;
	small_parse_table_2935(v);
}

/* EOF small_parse_table_586.c */
