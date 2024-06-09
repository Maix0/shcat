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
	v->a[49600] = aux_sym_number_token1;
	v->a[49601] = aux_sym_number_token2;
	v->a[49602] = anon_sym_DOLLAR_LBRACE;
	v->a[49603] = anon_sym_DOLLAR_LPAREN;
	v->a[49604] = anon_sym_BQUOTE;
	v->a[49605] = sym_word;
	v->a[49606] = actions(1703);
	v->a[49607] = 10;
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
	v->a[49618] = 4;
	v->a[49619] = actions(3);
	small_parse_table_2481(v);
}

void	small_parse_table_2481(t_small_parse_table_array *v)
{
	v->a[49620] = 1;
	v->a[49621] = sym_comment;
	v->a[49622] = actions(1033);
	v->a[49623] = 2;
	v->a[49624] = anon_sym_esac;
	v->a[49625] = anon_sym_SEMI_SEMI;
	v->a[49626] = actions(1734);
	v->a[49627] = 2;
	v->a[49628] = sym_file_descriptor;
	v->a[49629] = sym_variable_name;
	v->a[49630] = actions(1730);
	v->a[49631] = 28;
	v->a[49632] = anon_sym_for;
	v->a[49633] = anon_sym_while;
	v->a[49634] = anon_sym_until;
	v->a[49635] = anon_sym_if;
	v->a[49636] = anon_sym_case;
	v->a[49637] = anon_sym_LPAREN;
	v->a[49638] = anon_sym_LBRACE;
	v->a[49639] = anon_sym_BANG;
	small_parse_table_2482(v);
}

void	small_parse_table_2482(t_small_parse_table_array *v)
{
	v->a[49640] = anon_sym_LT;
	v->a[49641] = anon_sym_GT;
	v->a[49642] = anon_sym_GT_GT;
	v->a[49643] = anon_sym_AMP_GT;
	v->a[49644] = anon_sym_AMP_GT_GT;
	v->a[49645] = anon_sym_LT_AMP;
	v->a[49646] = anon_sym_GT_AMP;
	v->a[49647] = anon_sym_GT_PIPE;
	v->a[49648] = anon_sym_LT_AMP_DASH;
	v->a[49649] = anon_sym_GT_AMP_DASH;
	v->a[49650] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49651] = anon_sym_DOLLAR;
	v->a[49652] = anon_sym_DQUOTE;
	v->a[49653] = sym_raw_string;
	v->a[49654] = aux_sym_number_token1;
	v->a[49655] = aux_sym_number_token2;
	v->a[49656] = anon_sym_DOLLAR_LBRACE;
	v->a[49657] = anon_sym_DOLLAR_LPAREN;
	v->a[49658] = anon_sym_BQUOTE;
	v->a[49659] = sym_word;
	small_parse_table_2483(v);
}

void	small_parse_table_2483(t_small_parse_table_array *v)
{
	v->a[49660] = 7;
	v->a[49661] = actions(3);
	v->a[49662] = 1;
	v->a[49663] = sym_comment;
	v->a[49664] = actions(1706);
	v->a[49665] = 1;
	v->a[49666] = sym_file_descriptor;
	v->a[49667] = actions(1709);
	v->a[49668] = 1;
	v->a[49669] = sym_variable_name;
	v->a[49670] = actions(1822);
	v->a[49671] = 1;
	v->a[49672] = anon_sym_RPAREN;
	v->a[49673] = actions(1698);
	v->a[49674] = 9;
	v->a[49675] = anon_sym_PIPE;
	v->a[49676] = anon_sym_SEMI_SEMI;
	v->a[49677] = anon_sym_AMP_AMP;
	v->a[49678] = anon_sym_PIPE_PIPE;
	v->a[49679] = anon_sym_LT_LT;
	small_parse_table_2484(v);
}

void	small_parse_table_2484(t_small_parse_table_array *v)
{
	v->a[49680] = anon_sym_LT_LT_DASH;
	v->a[49681] = aux_sym_heredoc_redirect_token1;
	v->a[49682] = anon_sym_AMP;
	v->a[49683] = anon_sym_SEMI;
	v->a[49684] = actions(1696);
	v->a[49685] = 10;
	v->a[49686] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49687] = anon_sym_DOLLAR;
	v->a[49688] = anon_sym_DQUOTE;
	v->a[49689] = sym_raw_string;
	v->a[49690] = aux_sym_number_token1;
	v->a[49691] = aux_sym_number_token2;
	v->a[49692] = anon_sym_DOLLAR_LBRACE;
	v->a[49693] = anon_sym_DOLLAR_LPAREN;
	v->a[49694] = anon_sym_BQUOTE;
	v->a[49695] = sym_word;
	v->a[49696] = actions(1703);
	v->a[49697] = 10;
	v->a[49698] = anon_sym_LT;
	v->a[49699] = anon_sym_GT;
	small_parse_table_2485(v);
}

/* EOF small_parse_table_496.c */
