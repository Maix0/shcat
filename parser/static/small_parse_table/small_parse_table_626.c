/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_626.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3130(t_small_parse_table_array *v)
{
	v->a[62600] = actions(4060);
	v->a[62601] = 1;
	v->a[62602] = anon_sym_LPAREN;
	v->a[62603] = state(1338);
	v->a[62604] = 1;
	v->a[62605] = aux_sym_concatenation_repeat1;
	v->a[62606] = actions(4043);
	v->a[62607] = 2;
	v->a[62608] = sym__concat;
	v->a[62609] = aux_sym_concatenation_token1;
	v->a[62610] = actions(2749);
	v->a[62611] = 13;
	v->a[62612] = anon_sym_PIPE;
	v->a[62613] = anon_sym_LT;
	v->a[62614] = anon_sym_GT;
	v->a[62615] = anon_sym_AMP_GT;
	v->a[62616] = anon_sym_LT_AMP;
	v->a[62617] = anon_sym_GT_AMP;
	v->a[62618] = anon_sym_LT_LT;
	v->a[62619] = anon_sym_DOLLAR;
	small_parse_table_3131(v);
}

void	small_parse_table_3131(t_small_parse_table_array *v)
{
	v->a[62620] = aux_sym_number_token1;
	v->a[62621] = aux_sym_number_token2;
	v->a[62622] = anon_sym_DOLLAR_LPAREN;
	v->a[62623] = anon_sym_BQUOTE;
	v->a[62624] = sym_word;
	v->a[62625] = actions(2754);
	v->a[62626] = 19;
	v->a[62627] = sym_file_descriptor;
	v->a[62628] = sym_test_operator;
	v->a[62629] = sym__bare_dollar;
	v->a[62630] = sym__brace_start;
	v->a[62631] = anon_sym_PIPE_AMP;
	v->a[62632] = anon_sym_AMP_AMP;
	v->a[62633] = anon_sym_PIPE_PIPE;
	v->a[62634] = anon_sym_GT_GT;
	v->a[62635] = anon_sym_AMP_GT_GT;
	v->a[62636] = anon_sym_GT_PIPE;
	v->a[62637] = anon_sym_LT_AMP_DASH;
	v->a[62638] = anon_sym_GT_AMP_DASH;
	v->a[62639] = anon_sym_LT_LT_DASH;
	small_parse_table_3132(v);
}

void	small_parse_table_3132(t_small_parse_table_array *v)
{
	v->a[62640] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62641] = sym__special_character;
	v->a[62642] = anon_sym_DQUOTE;
	v->a[62643] = sym_raw_string;
	v->a[62644] = anon_sym_DOLLAR_LBRACE;
	v->a[62645] = anon_sym_DOLLAR_BQUOTE;
	v->a[62646] = 3;
	v->a[62647] = actions(3);
	v->a[62648] = 1;
	v->a[62649] = sym_comment;
	v->a[62650] = actions(2664);
	v->a[62651] = 4;
	v->a[62652] = sym_file_descriptor;
	v->a[62653] = sym_test_operator;
	v->a[62654] = sym__brace_start;
	v->a[62655] = aux_sym_heredoc_redirect_token1;
	v->a[62656] = actions(2662);
	v->a[62657] = 32;
	v->a[62658] = anon_sym_PIPE;
	v->a[62659] = anon_sym_RPAREN;
	small_parse_table_3133(v);
}

void	small_parse_table_3133(t_small_parse_table_array *v)
{
	v->a[62660] = anon_sym_SEMI_SEMI;
	v->a[62661] = anon_sym_PIPE_AMP;
	v->a[62662] = anon_sym_AMP_AMP;
	v->a[62663] = anon_sym_PIPE_PIPE;
	v->a[62664] = anon_sym_LT;
	v->a[62665] = anon_sym_GT;
	v->a[62666] = anon_sym_GT_GT;
	v->a[62667] = anon_sym_AMP_GT;
	v->a[62668] = anon_sym_AMP_GT_GT;
	v->a[62669] = anon_sym_LT_AMP;
	v->a[62670] = anon_sym_GT_AMP;
	v->a[62671] = anon_sym_GT_PIPE;
	v->a[62672] = anon_sym_LT_AMP_DASH;
	v->a[62673] = anon_sym_GT_AMP_DASH;
	v->a[62674] = anon_sym_LT_LT;
	v->a[62675] = anon_sym_LT_LT_DASH;
	v->a[62676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62677] = anon_sym_AMP;
	v->a[62678] = anon_sym_DOLLAR;
	v->a[62679] = sym__special_character;
	small_parse_table_3134(v);
}

void	small_parse_table_3134(t_small_parse_table_array *v)
{
	v->a[62680] = anon_sym_DQUOTE;
	v->a[62681] = sym_raw_string;
	v->a[62682] = aux_sym_number_token1;
	v->a[62683] = aux_sym_number_token2;
	v->a[62684] = anon_sym_DOLLAR_LBRACE;
	v->a[62685] = anon_sym_DOLLAR_LPAREN;
	v->a[62686] = anon_sym_BQUOTE;
	v->a[62687] = anon_sym_DOLLAR_BQUOTE;
	v->a[62688] = sym_word;
	v->a[62689] = anon_sym_SEMI;
	v->a[62690] = 6;
	v->a[62691] = actions(3);
	v->a[62692] = 1;
	v->a[62693] = sym_comment;
	v->a[62694] = actions(828);
	v->a[62695] = 1;
	v->a[62696] = sym_file_descriptor;
	v->a[62697] = actions(4067);
	v->a[62698] = 1;
	v->a[62699] = sym_variable_name;
	small_parse_table_3135(v);
}

/* EOF small_parse_table_626.c */
