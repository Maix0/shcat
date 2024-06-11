/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_816.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4080(t_small_parse_table_array *v)
{
	v->a[81600] = 1;
	v->a[81601] = sym__concat;
	v->a[81602] = state(1553);
	v->a[81603] = 1;
	v->a[81604] = aux_sym_concatenation_repeat1;
	v->a[81605] = actions(974);
	v->a[81606] = 7;
	v->a[81607] = anon_sym_PIPE;
	v->a[81608] = anon_sym_LT;
	v->a[81609] = anon_sym_GT;
	v->a[81610] = anon_sym_AMP_GT;
	v->a[81611] = anon_sym_LT_AMP;
	v->a[81612] = anon_sym_GT_AMP;
	v->a[81613] = anon_sym_LT_LT;
	v->a[81614] = actions(972);
	v->a[81615] = 10;
	v->a[81616] = sym_file_descriptor;
	v->a[81617] = sym_variable_name;
	v->a[81618] = anon_sym_AMP_AMP;
	v->a[81619] = anon_sym_PIPE_PIPE;
	small_parse_table_4081(v);
}

void	small_parse_table_4081(t_small_parse_table_array *v)
{
	v->a[81620] = anon_sym_GT_GT;
	v->a[81621] = anon_sym_AMP_GT_GT;
	v->a[81622] = anon_sym_GT_PIPE;
	v->a[81623] = anon_sym_LT_AMP_DASH;
	v->a[81624] = anon_sym_GT_AMP_DASH;
	v->a[81625] = anon_sym_LT_LT_DASH;
	v->a[81626] = 11;
	v->a[81627] = actions(3);
	v->a[81628] = 1;
	v->a[81629] = sym_comment;
	v->a[81630] = actions(884);
	v->a[81631] = 1;
	v->a[81632] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81633] = actions(886);
	v->a[81634] = 1;
	v->a[81635] = anon_sym_DOLLAR;
	v->a[81636] = actions(888);
	v->a[81637] = 1;
	v->a[81638] = anon_sym_DQUOTE;
	v->a[81639] = actions(890);
	small_parse_table_4082(v);
}

void	small_parse_table_4082(t_small_parse_table_array *v)
{
	v->a[81640] = 1;
	v->a[81641] = anon_sym_DOLLAR_LBRACE;
	v->a[81642] = actions(892);
	v->a[81643] = 1;
	v->a[81644] = anon_sym_DOLLAR_LPAREN;
	v->a[81645] = actions(894);
	v->a[81646] = 1;
	v->a[81647] = anon_sym_BQUOTE;
	v->a[81648] = state(1545);
	v->a[81649] = 2;
	v->a[81650] = sym_concatenation;
	v->a[81651] = aux_sym_for_statement_repeat1;
	v->a[81652] = actions(2924);
	v->a[81653] = 3;
	v->a[81654] = sym_raw_string;
	v->a[81655] = sym_number;
	v->a[81656] = sym_word;
	v->a[81657] = actions(2995);
	v->a[81658] = 4;
	v->a[81659] = anon_sym_SEMI_SEMI;
	small_parse_table_4083(v);
}

void	small_parse_table_4083(t_small_parse_table_array *v)
{
	v->a[81660] = aux_sym_heredoc_redirect_token1;
	v->a[81661] = anon_sym_AMP;
	v->a[81662] = anon_sym_SEMI;
	v->a[81663] = state(1745);
	v->a[81664] = 5;
	v->a[81665] = sym_arithmetic_expansion;
	v->a[81666] = sym_string;
	v->a[81667] = sym_simple_expansion;
	v->a[81668] = sym_expansion;
	v->a[81669] = sym_command_substitution;
	v->a[81670] = 5;
	v->a[81671] = actions(3);
	v->a[81672] = 1;
	v->a[81673] = sym_comment;
	v->a[81674] = actions(807);
	v->a[81675] = 1;
	v->a[81676] = anon_sym_PIPE;
	v->a[81677] = actions(803);
	v->a[81678] = 2;
	v->a[81679] = sym_file_descriptor;
	small_parse_table_4084(v);
}

void	small_parse_table_4084(t_small_parse_table_array *v)
{
	v->a[81680] = aux_sym_heredoc_redirect_token1;
	v->a[81681] = state(1546);
	v->a[81682] = 3;
	v->a[81683] = sym_file_redirect;
	v->a[81684] = sym_heredoc_redirect;
	v->a[81685] = aux_sym_redirected_statement_repeat1;
	v->a[81686] = actions(809);
	v->a[81687] = 14;
	v->a[81688] = anon_sym_AMP_AMP;
	v->a[81689] = anon_sym_PIPE_PIPE;
	v->a[81690] = anon_sym_LT;
	v->a[81691] = anon_sym_GT;
	v->a[81692] = anon_sym_GT_GT;
	v->a[81693] = anon_sym_AMP_GT;
	v->a[81694] = anon_sym_AMP_GT_GT;
	v->a[81695] = anon_sym_LT_AMP;
	v->a[81696] = anon_sym_GT_AMP;
	v->a[81697] = anon_sym_GT_PIPE;
	v->a[81698] = anon_sym_LT_AMP_DASH;
	v->a[81699] = anon_sym_GT_AMP_DASH;
	small_parse_table_4085(v);
}

/* EOF small_parse_table_816.c */
