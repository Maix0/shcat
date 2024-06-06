/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_476.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2380(t_small_parse_table_array *v)
{
	v->a[47600] = actions(3);
	v->a[47601] = 1;
	v->a[47602] = sym_comment;
	v->a[47603] = actions(3662);
	v->a[47604] = 1;
	v->a[47605] = sym__special_character;
	v->a[47606] = state(1049);
	v->a[47607] = 1;
	v->a[47608] = aux_sym__literal_repeat1;
	v->a[47609] = actions(3197);
	v->a[47610] = 4;
	v->a[47611] = sym_file_descriptor;
	v->a[47612] = sym_test_operator;
	v->a[47613] = sym__brace_start;
	v->a[47614] = aux_sym_heredoc_redirect_token1;
	v->a[47615] = actions(3195);
	v->a[47616] = 33;
	v->a[47617] = anon_sym_PIPE;
	v->a[47618] = anon_sym_SEMI_SEMI;
	v->a[47619] = anon_sym_SEMI_AMP;
	small_parse_table_2381(v);
}

void	small_parse_table_2381(t_small_parse_table_array *v)
{
	v->a[47620] = anon_sym_SEMI_SEMI_AMP;
	v->a[47621] = anon_sym_PIPE_AMP;
	v->a[47622] = anon_sym_AMP_AMP;
	v->a[47623] = anon_sym_PIPE_PIPE;
	v->a[47624] = anon_sym_LT;
	v->a[47625] = anon_sym_GT;
	v->a[47626] = anon_sym_GT_GT;
	v->a[47627] = anon_sym_AMP_GT;
	v->a[47628] = anon_sym_AMP_GT_GT;
	v->a[47629] = anon_sym_LT_AMP;
	v->a[47630] = anon_sym_GT_AMP;
	v->a[47631] = anon_sym_GT_PIPE;
	v->a[47632] = anon_sym_LT_AMP_DASH;
	v->a[47633] = anon_sym_GT_AMP_DASH;
	v->a[47634] = anon_sym_LT_LT;
	v->a[47635] = anon_sym_LT_LT_DASH;
	v->a[47636] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47637] = anon_sym_AMP;
	v->a[47638] = anon_sym_DOLLAR;
	v->a[47639] = anon_sym_DQUOTE;
	small_parse_table_2382(v);
}

void	small_parse_table_2382(t_small_parse_table_array *v)
{
	v->a[47640] = sym_raw_string;
	v->a[47641] = aux_sym_number_token1;
	v->a[47642] = aux_sym_number_token2;
	v->a[47643] = anon_sym_DOLLAR_LBRACE;
	v->a[47644] = anon_sym_DOLLAR_LPAREN;
	v->a[47645] = anon_sym_BQUOTE;
	v->a[47646] = anon_sym_DOLLAR_BQUOTE;
	v->a[47647] = aux_sym__simple_variable_name_token1;
	v->a[47648] = sym_word;
	v->a[47649] = anon_sym_SEMI;
	v->a[47650] = 3;
	v->a[47651] = actions(3);
	v->a[47652] = 1;
	v->a[47653] = sym_comment;
	v->a[47654] = actions(3117);
	v->a[47655] = 5;
	v->a[47656] = sym_file_descriptor;
	v->a[47657] = sym__concat;
	v->a[47658] = sym_test_operator;
	v->a[47659] = sym__brace_start;
	small_parse_table_2383(v);
}

void	small_parse_table_2383(t_small_parse_table_array *v)
{
	v->a[47660] = aux_sym_heredoc_redirect_token1;
	v->a[47661] = actions(3115);
	v->a[47662] = 34;
	v->a[47663] = anon_sym_PIPE;
	v->a[47664] = anon_sym_RPAREN;
	v->a[47665] = anon_sym_SEMI_SEMI;
	v->a[47666] = anon_sym_PIPE_AMP;
	v->a[47667] = anon_sym_AMP_AMP;
	v->a[47668] = anon_sym_PIPE_PIPE;
	v->a[47669] = anon_sym_LT;
	v->a[47670] = anon_sym_GT;
	v->a[47671] = anon_sym_GT_GT;
	v->a[47672] = anon_sym_AMP_GT;
	v->a[47673] = anon_sym_AMP_GT_GT;
	v->a[47674] = anon_sym_LT_AMP;
	v->a[47675] = anon_sym_GT_AMP;
	v->a[47676] = anon_sym_GT_PIPE;
	v->a[47677] = anon_sym_LT_AMP_DASH;
	v->a[47678] = anon_sym_GT_AMP_DASH;
	v->a[47679] = anon_sym_LT_LT;
	small_parse_table_2384(v);
}

void	small_parse_table_2384(t_small_parse_table_array *v)
{
	v->a[47680] = anon_sym_LT_LT_DASH;
	v->a[47681] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47682] = anon_sym_AMP;
	v->a[47683] = aux_sym_concatenation_token1;
	v->a[47684] = anon_sym_DOLLAR;
	v->a[47685] = sym__special_character;
	v->a[47686] = anon_sym_DQUOTE;
	v->a[47687] = sym_raw_string;
	v->a[47688] = aux_sym_number_token1;
	v->a[47689] = aux_sym_number_token2;
	v->a[47690] = anon_sym_DOLLAR_LBRACE;
	v->a[47691] = anon_sym_DOLLAR_LPAREN;
	v->a[47692] = anon_sym_BQUOTE;
	v->a[47693] = anon_sym_DOLLAR_BQUOTE;
	v->a[47694] = aux_sym__simple_variable_name_token1;
	v->a[47695] = sym_word;
	v->a[47696] = anon_sym_SEMI;
	v->a[47697] = 3;
	v->a[47698] = actions(3);
	v->a[47699] = 1;
	small_parse_table_2385(v);
}

/* EOF small_parse_table_476.c */
