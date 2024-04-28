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
	v->a[81600] = 6;
	v->a[81601] = actions(3);
	v->a[81602] = 1;
	v->a[81603] = sym_comment;
	v->a[81604] = actions(4699);
	v->a[81605] = 1;
	v->a[81606] = aux_sym_concatenation_token1;
	v->a[81607] = actions(4701);
	v->a[81608] = 1;
	v->a[81609] = sym__concat;
	v->a[81610] = state(1721);
	v->a[81611] = 1;
	v->a[81612] = aux_sym_concatenation_repeat1;
	v->a[81613] = actions(1281);
	v->a[81614] = 5;
	v->a[81615] = sym_file_descriptor;
	v->a[81616] = sym_test_operator;
	v->a[81617] = sym__bare_dollar;
	v->a[81618] = sym__brace_start;
	v->a[81619] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4081(v);
}

void	small_parse_table_4081(t_small_parse_table_array *v)
{
	v->a[81620] = actions(1271);
	v->a[81621] = 37;
	v->a[81622] = anon_sym_LPAREN_LPAREN;
	v->a[81623] = anon_sym_PIPE_PIPE;
	v->a[81624] = anon_sym_AMP_AMP;
	v->a[81625] = anon_sym_PIPE;
	v->a[81626] = anon_sym_EQ_EQ;
	v->a[81627] = anon_sym_LT;
	v->a[81628] = anon_sym_GT;
	v->a[81629] = anon_sym_LT_LT;
	v->a[81630] = anon_sym_GT_GT;
	v->a[81631] = anon_sym_LPAREN;
	v->a[81632] = anon_sym_PIPE_AMP;
	v->a[81633] = anon_sym_EQ_TILDE;
	v->a[81634] = anon_sym_AMP_GT;
	v->a[81635] = anon_sym_AMP_GT_GT;
	v->a[81636] = anon_sym_LT_AMP;
	v->a[81637] = anon_sym_GT_AMP;
	v->a[81638] = anon_sym_GT_PIPE;
	v->a[81639] = anon_sym_LT_AMP_DASH;
	small_parse_table_4082(v);
}

void	small_parse_table_4082(t_small_parse_table_array *v)
{
	v->a[81640] = anon_sym_GT_AMP_DASH;
	v->a[81641] = anon_sym_LT_LT_DASH;
	v->a[81642] = anon_sym_LT_LT_LT;
	v->a[81643] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81644] = anon_sym_DOLLAR_LBRACK;
	v->a[81645] = anon_sym_DOLLAR;
	v->a[81646] = sym__special_character;
	v->a[81647] = anon_sym_DQUOTE;
	v->a[81648] = sym_raw_string;
	v->a[81649] = sym_ansi_c_string;
	v->a[81650] = aux_sym_number_token1;
	v->a[81651] = aux_sym_number_token2;
	v->a[81652] = anon_sym_DOLLAR_LBRACE;
	v->a[81653] = anon_sym_DOLLAR_LPAREN;
	v->a[81654] = anon_sym_BQUOTE;
	v->a[81655] = anon_sym_DOLLAR_BQUOTE;
	v->a[81656] = anon_sym_LT_LPAREN;
	v->a[81657] = anon_sym_GT_LPAREN;
	v->a[81658] = sym_word;
	v->a[81659] = 3;
	small_parse_table_4083(v);
}

void	small_parse_table_4083(t_small_parse_table_array *v)
{
	v->a[81660] = actions(3);
	v->a[81661] = 1;
	v->a[81662] = sym_comment;
	v->a[81663] = actions(1342);
	v->a[81664] = 5;
	v->a[81665] = sym_file_descriptor;
	v->a[81666] = sym__concat;
	v->a[81667] = sym_test_operator;
	v->a[81668] = sym__brace_start;
	v->a[81669] = aux_sym_heredoc_redirect_token1;
	v->a[81670] = actions(1340);
	v->a[81671] = 40;
	v->a[81672] = anon_sym_LPAREN_LPAREN;
	v->a[81673] = anon_sym_SEMI;
	v->a[81674] = anon_sym_PIPE_PIPE;
	v->a[81675] = anon_sym_AMP_AMP;
	v->a[81676] = anon_sym_PIPE;
	v->a[81677] = anon_sym_AMP;
	v->a[81678] = anon_sym_LT;
	v->a[81679] = anon_sym_GT;
	small_parse_table_4084(v);
}

void	small_parse_table_4084(t_small_parse_table_array *v)
{
	v->a[81680] = anon_sym_LT_LT;
	v->a[81681] = anon_sym_GT_GT;
	v->a[81682] = anon_sym_SEMI_SEMI;
	v->a[81683] = anon_sym_SEMI_AMP;
	v->a[81684] = anon_sym_SEMI_SEMI_AMP;
	v->a[81685] = anon_sym_PIPE_AMP;
	v->a[81686] = anon_sym_AMP_GT;
	v->a[81687] = anon_sym_AMP_GT_GT;
	v->a[81688] = anon_sym_LT_AMP;
	v->a[81689] = anon_sym_GT_AMP;
	v->a[81690] = anon_sym_GT_PIPE;
	v->a[81691] = anon_sym_LT_AMP_DASH;
	v->a[81692] = anon_sym_GT_AMP_DASH;
	v->a[81693] = anon_sym_LT_LT_DASH;
	v->a[81694] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81695] = anon_sym_DOLLAR_LBRACK;
	v->a[81696] = aux_sym_concatenation_token1;
	v->a[81697] = anon_sym_DOLLAR;
	v->a[81698] = sym__special_character;
	v->a[81699] = anon_sym_DQUOTE;
	small_parse_table_4085(v);
}

/* EOF small_parse_table_816.c */
