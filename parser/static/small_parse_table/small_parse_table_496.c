/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_496.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2480(t_small_parse_table_array *v)
{
	v->a[49600] = anon_sym_esac;
	v->a[49601] = anon_sym_PIPE;
	v->a[49602] = anon_sym_SEMI_SEMI;
	v->a[49603] = anon_sym_SEMI_AMP;
	v->a[49604] = anon_sym_SEMI_SEMI_AMP;
	v->a[49605] = anon_sym_PIPE_AMP;
	v->a[49606] = anon_sym_AMP_AMP;
	v->a[49607] = anon_sym_PIPE_PIPE;
	v->a[49608] = anon_sym_LT;
	v->a[49609] = anon_sym_GT;
	v->a[49610] = anon_sym_GT_GT;
	v->a[49611] = anon_sym_AMP_GT;
	v->a[49612] = anon_sym_AMP_GT_GT;
	v->a[49613] = anon_sym_LT_AMP;
	v->a[49614] = anon_sym_GT_AMP;
	v->a[49615] = anon_sym_GT_PIPE;
	v->a[49616] = anon_sym_LT_AMP_DASH;
	v->a[49617] = anon_sym_GT_AMP_DASH;
	v->a[49618] = anon_sym_LT_LT;
	v->a[49619] = anon_sym_LT_LT_DASH;
	small_parse_table_2481(v);
}

void	small_parse_table_2481(t_small_parse_table_array *v)
{
	v->a[49620] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49621] = anon_sym_AMP;
	v->a[49622] = anon_sym_DOLLAR;
	v->a[49623] = anon_sym_DQUOTE;
	v->a[49624] = sym_raw_string;
	v->a[49625] = aux_sym_number_token1;
	v->a[49626] = aux_sym_number_token2;
	v->a[49627] = anon_sym_DOLLAR_LBRACE;
	v->a[49628] = anon_sym_DOLLAR_LPAREN;
	v->a[49629] = anon_sym_BQUOTE;
	v->a[49630] = anon_sym_DOLLAR_BQUOTE;
	v->a[49631] = sym_word;
	v->a[49632] = anon_sym_SEMI;
	v->a[49633] = 5;
	v->a[49634] = actions(3);
	v->a[49635] = 1;
	v->a[49636] = sym_comment;
	v->a[49637] = actions(3611);
	v->a[49638] = 1;
	v->a[49639] = sym__special_character;
	small_parse_table_2482(v);
}

void	small_parse_table_2482(t_small_parse_table_array *v)
{
	v->a[49640] = state(1057);
	v->a[49641] = 1;
	v->a[49642] = aux_sym__literal_repeat1;
	v->a[49643] = actions(3549);
	v->a[49644] = 5;
	v->a[49645] = sym_file_descriptor;
	v->a[49646] = sym_variable_name;
	v->a[49647] = sym_test_operator;
	v->a[49648] = sym__brace_start;
	v->a[49649] = aux_sym_heredoc_redirect_token1;
	v->a[49650] = actions(3547);
	v->a[49651] = 32;
	v->a[49652] = anon_sym_PIPE;
	v->a[49653] = anon_sym_SEMI_SEMI;
	v->a[49654] = anon_sym_SEMI_AMP;
	v->a[49655] = anon_sym_SEMI_SEMI_AMP;
	v->a[49656] = anon_sym_PIPE_AMP;
	v->a[49657] = anon_sym_AMP_AMP;
	v->a[49658] = anon_sym_PIPE_PIPE;
	v->a[49659] = anon_sym_LT;
	small_parse_table_2483(v);
}

void	small_parse_table_2483(t_small_parse_table_array *v)
{
	v->a[49660] = anon_sym_GT;
	v->a[49661] = anon_sym_GT_GT;
	v->a[49662] = anon_sym_AMP_GT;
	v->a[49663] = anon_sym_AMP_GT_GT;
	v->a[49664] = anon_sym_LT_AMP;
	v->a[49665] = anon_sym_GT_AMP;
	v->a[49666] = anon_sym_GT_PIPE;
	v->a[49667] = anon_sym_LT_AMP_DASH;
	v->a[49668] = anon_sym_GT_AMP_DASH;
	v->a[49669] = anon_sym_LT_LT;
	v->a[49670] = anon_sym_LT_LT_DASH;
	v->a[49671] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49672] = anon_sym_AMP;
	v->a[49673] = anon_sym_DOLLAR;
	v->a[49674] = anon_sym_DQUOTE;
	v->a[49675] = sym_raw_string;
	v->a[49676] = aux_sym_number_token1;
	v->a[49677] = aux_sym_number_token2;
	v->a[49678] = anon_sym_DOLLAR_LBRACE;
	v->a[49679] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2484(v);
}

void	small_parse_table_2484(t_small_parse_table_array *v)
{
	v->a[49680] = anon_sym_BQUOTE;
	v->a[49681] = anon_sym_DOLLAR_BQUOTE;
	v->a[49682] = sym_word;
	v->a[49683] = anon_sym_SEMI;
	v->a[49684] = 3;
	v->a[49685] = actions(3);
	v->a[49686] = 1;
	v->a[49687] = sym_comment;
	v->a[49688] = actions(3159);
	v->a[49689] = 6;
	v->a[49690] = sym_file_descriptor;
	v->a[49691] = sym__concat;
	v->a[49692] = sym_test_operator;
	v->a[49693] = sym__bare_dollar;
	v->a[49694] = sym__brace_start;
	v->a[49695] = aux_sym_heredoc_redirect_token1;
	v->a[49696] = actions(3157);
	v->a[49697] = 33;
	v->a[49698] = anon_sym_PIPE;
	v->a[49699] = anon_sym_RPAREN;
	small_parse_table_2485(v);
}

/* EOF small_parse_table_496.c */
