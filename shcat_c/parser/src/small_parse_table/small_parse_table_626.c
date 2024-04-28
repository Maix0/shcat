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
	v->a[62600] = anon_sym_AMP;
	v->a[62601] = anon_sym_LT;
	v->a[62602] = anon_sym_GT;
	v->a[62603] = anon_sym_LT_LT;
	v->a[62604] = anon_sym_GT_GT;
	v->a[62605] = anon_sym_esac;
	v->a[62606] = anon_sym_SEMI_SEMI;
	v->a[62607] = anon_sym_SEMI_AMP;
	v->a[62608] = anon_sym_SEMI_SEMI_AMP;
	v->a[62609] = anon_sym_PIPE_AMP;
	v->a[62610] = anon_sym_AMP_GT;
	v->a[62611] = anon_sym_AMP_GT_GT;
	v->a[62612] = anon_sym_LT_AMP;
	v->a[62613] = anon_sym_GT_AMP;
	v->a[62614] = anon_sym_GT_PIPE;
	v->a[62615] = anon_sym_LT_AMP_DASH;
	v->a[62616] = anon_sym_GT_AMP_DASH;
	v->a[62617] = anon_sym_LT_LT_DASH;
	v->a[62618] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62619] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_3131(v);
}

void	small_parse_table_3131(t_small_parse_table_array *v)
{
	v->a[62620] = anon_sym_DOLLAR;
	v->a[62621] = sym__special_character;
	v->a[62622] = anon_sym_DQUOTE;
	v->a[62623] = sym_raw_string;
	v->a[62624] = sym_ansi_c_string;
	v->a[62625] = aux_sym_number_token1;
	v->a[62626] = aux_sym_number_token2;
	v->a[62627] = anon_sym_DOLLAR_LBRACE;
	v->a[62628] = anon_sym_DOLLAR_LPAREN;
	v->a[62629] = anon_sym_BQUOTE;
	v->a[62630] = anon_sym_DOLLAR_BQUOTE;
	v->a[62631] = anon_sym_LT_LPAREN;
	v->a[62632] = anon_sym_GT_LPAREN;
	v->a[62633] = sym_word;
	v->a[62634] = 5;
	v->a[62635] = actions(3);
	v->a[62636] = 1;
	v->a[62637] = sym_comment;
	v->a[62638] = actions(5662);
	v->a[62639] = 1;
	small_parse_table_3132(v);
}

void	small_parse_table_3132(t_small_parse_table_array *v)
{
	v->a[62640] = sym__special_character;
	v->a[62641] = state(1433);
	v->a[62642] = 1;
	v->a[62643] = aux_sym__literal_repeat1;
	v->a[62644] = actions(5697);
	v->a[62645] = 5;
	v->a[62646] = sym_file_descriptor;
	v->a[62647] = sym_variable_name;
	v->a[62648] = sym_test_operator;
	v->a[62649] = sym__brace_start;
	v->a[62650] = aux_sym_heredoc_redirect_token1;
	v->a[62651] = actions(5695);
	v->a[62652] = 39;
	v->a[62653] = anon_sym_LPAREN_LPAREN;
	v->a[62654] = anon_sym_SEMI;
	v->a[62655] = anon_sym_PIPE_PIPE;
	v->a[62656] = anon_sym_AMP_AMP;
	v->a[62657] = anon_sym_PIPE;
	v->a[62658] = anon_sym_AMP;
	v->a[62659] = anon_sym_LT;
	small_parse_table_3133(v);
}

void	small_parse_table_3133(t_small_parse_table_array *v)
{
	v->a[62660] = anon_sym_GT;
	v->a[62661] = anon_sym_LT_LT;
	v->a[62662] = anon_sym_GT_GT;
	v->a[62663] = anon_sym_esac;
	v->a[62664] = anon_sym_SEMI_SEMI;
	v->a[62665] = anon_sym_SEMI_AMP;
	v->a[62666] = anon_sym_SEMI_SEMI_AMP;
	v->a[62667] = anon_sym_PIPE_AMP;
	v->a[62668] = anon_sym_AMP_GT;
	v->a[62669] = anon_sym_AMP_GT_GT;
	v->a[62670] = anon_sym_LT_AMP;
	v->a[62671] = anon_sym_GT_AMP;
	v->a[62672] = anon_sym_GT_PIPE;
	v->a[62673] = anon_sym_LT_AMP_DASH;
	v->a[62674] = anon_sym_GT_AMP_DASH;
	v->a[62675] = anon_sym_LT_LT_DASH;
	v->a[62676] = anon_sym_LT_LT_LT;
	v->a[62677] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62678] = anon_sym_DOLLAR_LBRACK;
	v->a[62679] = anon_sym_DOLLAR;
	small_parse_table_3134(v);
}

void	small_parse_table_3134(t_small_parse_table_array *v)
{
	v->a[62680] = anon_sym_DQUOTE;
	v->a[62681] = sym_raw_string;
	v->a[62682] = sym_ansi_c_string;
	v->a[62683] = aux_sym_number_token1;
	v->a[62684] = aux_sym_number_token2;
	v->a[62685] = anon_sym_DOLLAR_LBRACE;
	v->a[62686] = anon_sym_DOLLAR_LPAREN;
	v->a[62687] = anon_sym_BQUOTE;
	v->a[62688] = anon_sym_DOLLAR_BQUOTE;
	v->a[62689] = anon_sym_LT_LPAREN;
	v->a[62690] = anon_sym_GT_LPAREN;
	v->a[62691] = sym_word;
	v->a[62692] = 6;
	v->a[62693] = actions(3);
	v->a[62694] = 1;
	v->a[62695] = sym_comment;
	v->a[62696] = actions(5664);
	v->a[62697] = 1;
	v->a[62698] = aux_sym_concatenation_token1;
	v->a[62699] = actions(5699);
	small_parse_table_3135(v);
}

/* EOF small_parse_table_626.c */
