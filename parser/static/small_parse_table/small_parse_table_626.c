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
	v->a[62600] = 8;
	v->a[62601] = actions(3);
	v->a[62602] = 1;
	v->a[62603] = sym_comment;
	v->a[62604] = actions(2233);
	v->a[62605] = 1;
	v->a[62606] = sym_file_descriptor;
	v->a[62607] = actions(2236);
	v->a[62608] = 1;
	v->a[62609] = sym_variable_name;
	v->a[62610] = state(1237);
	v->a[62611] = 1;
	v->a[62612] = sym_file_redirect;
	v->a[62613] = actions(2230);
	v->a[62614] = 2;
	v->a[62615] = anon_sym_LT_AMP_DASH;
	v->a[62616] = anon_sym_GT_AMP_DASH;
	v->a[62617] = state(996);
	v->a[62618] = 2;
	v->a[62619] = sym_variable_assignment;
	small_parse_table_3131(v);
}

void	small_parse_table_3131(t_small_parse_table_array *v)
{
	v->a[62620] = aux_sym_command_repeat1;
	v->a[62621] = actions(2227);
	v->a[62622] = 8;
	v->a[62623] = anon_sym_LT;
	v->a[62624] = anon_sym_GT;
	v->a[62625] = anon_sym_GT_GT;
	v->a[62626] = anon_sym_AMP_GT;
	v->a[62627] = anon_sym_AMP_GT_GT;
	v->a[62628] = anon_sym_LT_AMP;
	v->a[62629] = anon_sym_GT_AMP;
	v->a[62630] = anon_sym_GT_PIPE;
	v->a[62631] = actions(2225);
	v->a[62632] = 10;
	v->a[62633] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62634] = anon_sym_DOLLAR;
	v->a[62635] = anon_sym_DQUOTE;
	v->a[62636] = sym_raw_string;
	v->a[62637] = aux_sym_number_token1;
	v->a[62638] = aux_sym_number_token2;
	v->a[62639] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3132(v);
}

void	small_parse_table_3132(t_small_parse_table_array *v)
{
	v->a[62640] = anon_sym_DOLLAR_LPAREN;
	v->a[62641] = anon_sym_BQUOTE;
	v->a[62642] = sym_word;
	v->a[62643] = 6;
	v->a[62644] = actions(3);
	v->a[62645] = 1;
	v->a[62646] = sym_comment;
	v->a[62647] = actions(2199);
	v->a[62648] = 1;
	v->a[62649] = aux_sym_concatenation_token1;
	v->a[62650] = actions(2239);
	v->a[62651] = 1;
	v->a[62652] = sym__concat;
	v->a[62653] = state(941);
	v->a[62654] = 1;
	v->a[62655] = aux_sym_concatenation_repeat1;
	v->a[62656] = actions(1127);
	v->a[62657] = 3;
	v->a[62658] = sym_file_descriptor;
	v->a[62659] = sym_variable_name;
	small_parse_table_3133(v);
}

void	small_parse_table_3133(t_small_parse_table_array *v)
{
	v->a[62660] = aux_sym_heredoc_redirect_token1;
	v->a[62661] = actions(1129);
	v->a[62662] = 19;
	v->a[62663] = anon_sym_PIPE;
	v->a[62664] = anon_sym_SEMI_SEMI;
	v->a[62665] = anon_sym_AMP_AMP;
	v->a[62666] = anon_sym_PIPE_PIPE;
	v->a[62667] = anon_sym_LT;
	v->a[62668] = anon_sym_GT;
	v->a[62669] = anon_sym_GT_GT;
	v->a[62670] = anon_sym_AMP_GT;
	v->a[62671] = anon_sym_AMP_GT_GT;
	v->a[62672] = anon_sym_LT_AMP;
	v->a[62673] = anon_sym_GT_AMP;
	v->a[62674] = anon_sym_GT_PIPE;
	v->a[62675] = anon_sym_LT_AMP_DASH;
	v->a[62676] = anon_sym_GT_AMP_DASH;
	v->a[62677] = anon_sym_LT_LT;
	v->a[62678] = anon_sym_LT_LT_DASH;
	v->a[62679] = anon_sym_AMP;
	small_parse_table_3134(v);
}

void	small_parse_table_3134(t_small_parse_table_array *v)
{
	v->a[62680] = anon_sym_BQUOTE;
	v->a[62681] = anon_sym_SEMI;
	v->a[62682] = 6;
	v->a[62683] = actions(3);
	v->a[62684] = 1;
	v->a[62685] = sym_comment;
	v->a[62686] = actions(2213);
	v->a[62687] = 1;
	v->a[62688] = aux_sym_concatenation_token1;
	v->a[62689] = actions(2215);
	v->a[62690] = 1;
	v->a[62691] = sym__concat;
	v->a[62692] = state(987);
	v->a[62693] = 1;
	v->a[62694] = aux_sym_concatenation_repeat1;
	v->a[62695] = actions(555);
	v->a[62696] = 2;
	v->a[62697] = sym_file_descriptor;
	v->a[62698] = sym_variable_name;
	v->a[62699] = actions(553);
	small_parse_table_3135(v);
}

/* EOF small_parse_table_626.c */
