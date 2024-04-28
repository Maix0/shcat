/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2646.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13230(t_small_parse_table_array *v)
{
	v->a[264600] = aux_sym_number_token1;
	v->a[264601] = aux_sym_number_token2;
	v->a[264602] = anon_sym_DOLLAR_LBRACE;
	v->a[264603] = anon_sym_DOLLAR_LPAREN;
	v->a[264604] = anon_sym_BQUOTE;
	v->a[264605] = anon_sym_DOLLAR_BQUOTE;
	v->a[264606] = anon_sym_LT_LPAREN;
	v->a[264607] = anon_sym_GT_LPAREN;
	v->a[264608] = sym_word;
	v->a[264609] = 16;
	v->a[264610] = actions(3);
	v->a[264611] = 1;
	v->a[264612] = sym_comment;
	v->a[264613] = actions(11760);
	v->a[264614] = 1;
	v->a[264615] = anon_sym_BANG2;
	v->a[264616] = actions(11764);
	v->a[264617] = 1;
	v->a[264618] = anon_sym_DOLLAR_LPAREN;
	v->a[264619] = actions(11766);
	small_parse_table_13231(v);
}

void	small_parse_table_13231(t_small_parse_table_array *v)
{
	v->a[264620] = 1;
	v->a[264621] = anon_sym_BQUOTE;
	v->a[264622] = actions(11768);
	v->a[264623] = 1;
	v->a[264624] = anon_sym_DOLLAR_BQUOTE;
	v->a[264625] = actions(11770);
	v->a[264626] = 1;
	v->a[264627] = aux_sym__simple_variable_name_token1;
	v->a[264628] = actions(11772);
	v->a[264629] = 1;
	v->a[264630] = sym_variable_name;
	v->a[264631] = actions(12070);
	v->a[264632] = 1;
	v->a[264633] = anon_sym_RBRACE3;
	v->a[264634] = state(3532);
	v->a[264635] = 1;
	v->a[264636] = sym_subscript;
	v->a[264637] = state(6428);
	v->a[264638] = 1;
	v->a[264639] = aux_sym__expansion_body_repeat1;
	small_parse_table_13232(v);
}

void	small_parse_table_13232(t_small_parse_table_array *v)
{
	v->a[264640] = state(6472);
	v->a[264641] = 1;
	v->a[264642] = sym_command_substitution;
	v->a[264643] = state(7197);
	v->a[264644] = 1;
	v->a[264645] = sym__expansion_body;
	v->a[264646] = actions(11762);
	v->a[264647] = 2;
	v->a[264648] = anon_sym_POUND2;
	v->a[264649] = anon_sym_EQ2;
	v->a[264650] = actions(8050);
	v->a[264651] = 3;
	v->a[264652] = sym__external_expansion_sym_hash;
	v->a[264653] = sym__external_expansion_sym_bang;
	v->a[264654] = sym__external_expansion_sym_equal;
	v->a[264655] = actions(11754);
	v->a[264656] = 4;
	v->a[264657] = anon_sym_DASH;
	v->a[264658] = anon_sym_STAR;
	v->a[264659] = anon_sym_QMARK;
	small_parse_table_13233(v);
}

void	small_parse_table_13233(t_small_parse_table_array *v)
{
	v->a[264660] = anon_sym_AT2;
	v->a[264661] = actions(11756);
	v->a[264662] = 5;
	v->a[264663] = anon_sym_BANG;
	v->a[264664] = anon_sym_DOLLAR;
	v->a[264665] = anon_sym_POUND;
	v->a[264666] = anon_sym_0;
	v->a[264667] = anon_sym__;
	v->a[264668] = 3;
	v->a[264669] = actions(3);
	v->a[264670] = 1;
	v->a[264671] = sym_comment;
	v->a[264672] = actions(4372);
	v->a[264673] = 2;
	v->a[264674] = sym_file_descriptor;
	v->a[264675] = aux_sym_heredoc_redirect_token1;
	v->a[264676] = actions(4370);
	v->a[264677] = 23;
	v->a[264678] = anon_sym_SEMI;
	v->a[264679] = anon_sym_PIPE_PIPE;
	small_parse_table_13234(v);
}

void	small_parse_table_13234(t_small_parse_table_array *v)
{
	v->a[264680] = anon_sym_AMP_AMP;
	v->a[264681] = anon_sym_PIPE;
	v->a[264682] = anon_sym_AMP;
	v->a[264683] = anon_sym_LT;
	v->a[264684] = anon_sym_GT;
	v->a[264685] = anon_sym_LT_LT;
	v->a[264686] = anon_sym_GT_GT;
	v->a[264687] = anon_sym_esac;
	v->a[264688] = anon_sym_SEMI_SEMI;
	v->a[264689] = anon_sym_SEMI_AMP;
	v->a[264690] = anon_sym_SEMI_SEMI_AMP;
	v->a[264691] = anon_sym_PIPE_AMP;
	v->a[264692] = anon_sym_AMP_GT;
	v->a[264693] = anon_sym_AMP_GT_GT;
	v->a[264694] = anon_sym_LT_AMP;
	v->a[264695] = anon_sym_GT_AMP;
	v->a[264696] = anon_sym_GT_PIPE;
	v->a[264697] = anon_sym_LT_AMP_DASH;
	v->a[264698] = anon_sym_GT_AMP_DASH;
	v->a[264699] = anon_sym_LT_LT_DASH;
	small_parse_table_13235(v);
}

/* EOF small_parse_table_2646.c */
