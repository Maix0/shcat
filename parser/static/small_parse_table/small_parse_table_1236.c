/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1236.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6180(t_small_parse_table_array *v)
{
	v->a[123600] = actions(3);
	v->a[123601] = 1;
	v->a[123602] = sym_comment;
	v->a[123603] = actions(7101);
	v->a[123604] = 1;
	v->a[123605] = sym_variable_name;
	v->a[123606] = actions(5145);
	v->a[123607] = 2;
	v->a[123608] = sym_file_descriptor;
	v->a[123609] = aux_sym_heredoc_redirect_token1;
	v->a[123610] = state(2600);
	v->a[123611] = 2;
	v->a[123612] = sym_variable_assignment;
	v->a[123613] = aux_sym_variable_assignments_repeat1;
	v->a[123614] = actions(5143);
	v->a[123615] = 16;
	v->a[123616] = anon_sym_PIPE;
	v->a[123617] = anon_sym_PIPE_AMP;
	v->a[123618] = anon_sym_AMP_AMP;
	v->a[123619] = anon_sym_PIPE_PIPE;
	small_parse_table_6181(v);
}

void	small_parse_table_6181(t_small_parse_table_array *v)
{
	v->a[123620] = anon_sym_LT;
	v->a[123621] = anon_sym_GT;
	v->a[123622] = anon_sym_GT_GT;
	v->a[123623] = anon_sym_AMP_GT;
	v->a[123624] = anon_sym_AMP_GT_GT;
	v->a[123625] = anon_sym_LT_AMP;
	v->a[123626] = anon_sym_GT_AMP;
	v->a[123627] = anon_sym_GT_PIPE;
	v->a[123628] = anon_sym_LT_AMP_DASH;
	v->a[123629] = anon_sym_GT_AMP_DASH;
	v->a[123630] = anon_sym_LT_LT;
	v->a[123631] = anon_sym_LT_LT_DASH;
	v->a[123632] = 8;
	v->a[123633] = actions(3);
	v->a[123634] = 1;
	v->a[123635] = sym_comment;
	v->a[123636] = actions(5176);
	v->a[123637] = 1;
	v->a[123638] = aux_sym_heredoc_redirect_token1;
	v->a[123639] = actions(7109);
	small_parse_table_6182(v);
}

void	small_parse_table_6182(t_small_parse_table_array *v)
{
	v->a[123640] = 1;
	v->a[123641] = sym_file_descriptor;
	v->a[123642] = actions(5326);
	v->a[123643] = 2;
	v->a[123644] = anon_sym_LT_LT;
	v->a[123645] = anon_sym_LT_LT_DASH;
	v->a[123646] = actions(7106);
	v->a[123647] = 2;
	v->a[123648] = anon_sym_LT_AMP_DASH;
	v->a[123649] = anon_sym_GT_AMP_DASH;
	v->a[123650] = state(2602);
	v->a[123651] = 3;
	v->a[123652] = sym_file_redirect;
	v->a[123653] = sym_heredoc_redirect;
	v->a[123654] = aux_sym_redirected_statement_repeat1;
	v->a[123655] = actions(5165);
	v->a[123656] = 4;
	v->a[123657] = anon_sym_PIPE;
	v->a[123658] = anon_sym_PIPE_AMP;
	v->a[123659] = anon_sym_AMP_AMP;
	small_parse_table_6183(v);
}

void	small_parse_table_6183(t_small_parse_table_array *v)
{
	v->a[123660] = anon_sym_PIPE_PIPE;
	v->a[123661] = actions(7103);
	v->a[123662] = 8;
	v->a[123663] = anon_sym_LT;
	v->a[123664] = anon_sym_GT;
	v->a[123665] = anon_sym_GT_GT;
	v->a[123666] = anon_sym_AMP_GT;
	v->a[123667] = anon_sym_AMP_GT_GT;
	v->a[123668] = anon_sym_LT_AMP;
	v->a[123669] = anon_sym_GT_AMP;
	v->a[123670] = anon_sym_GT_PIPE;
	v->a[123671] = 6;
	v->a[123672] = actions(3);
	v->a[123673] = 1;
	v->a[123674] = sym_comment;
	v->a[123675] = actions(7092);
	v->a[123676] = 1;
	v->a[123677] = aux_sym_concatenation_token1;
	v->a[123678] = actions(7112);
	v->a[123679] = 1;
	small_parse_table_6184(v);
}

void	small_parse_table_6184(t_small_parse_table_array *v)
{
	v->a[123680] = sym__concat;
	v->a[123681] = state(2607);
	v->a[123682] = 1;
	v->a[123683] = aux_sym_concatenation_repeat1;
	v->a[123684] = actions(2696);
	v->a[123685] = 3;
	v->a[123686] = sym_test_operator;
	v->a[123687] = sym__brace_start;
	v->a[123688] = aux_sym_heredoc_redirect_token1;
	v->a[123689] = actions(2694);
	v->a[123690] = 15;
	v->a[123691] = anon_sym_SEMI_SEMI;
	v->a[123692] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123693] = anon_sym_AMP;
	v->a[123694] = anon_sym_DOLLAR;
	v->a[123695] = sym__special_character;
	v->a[123696] = anon_sym_DQUOTE;
	v->a[123697] = sym_raw_string;
	v->a[123698] = aux_sym_number_token1;
	v->a[123699] = aux_sym_number_token2;
	small_parse_table_6185(v);
}

/* EOF small_parse_table_1236.c */
