/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_806.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4030(t_small_parse_table_array *v)
{
	v->a[80600] = aux_sym_heredoc_redirect_token1;
	v->a[80601] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80602] = anon_sym_AMP;
	v->a[80603] = aux_sym_concatenation_token1;
	v->a[80604] = anon_sym_DOLLAR;
	v->a[80605] = anon_sym_DQUOTE;
	v->a[80606] = sym_raw_string;
	v->a[80607] = sym_number;
	v->a[80608] = anon_sym_DOLLAR_LBRACE;
	v->a[80609] = anon_sym_DOLLAR_LPAREN;
	v->a[80610] = anon_sym_BQUOTE;
	v->a[80611] = sym_word;
	v->a[80612] = anon_sym_SEMI;
	v->a[80613] = 3;
	v->a[80614] = actions(3);
	v->a[80615] = 1;
	v->a[80616] = sym_comment;
	v->a[80617] = actions(1005);
	v->a[80618] = 1;
	v->a[80619] = sym__concat;
	small_parse_table_4031(v);
}

void	small_parse_table_4031(t_small_parse_table_array *v)
{
	v->a[80620] = actions(1003);
	v->a[80621] = 14;
	v->a[80622] = anon_sym_SEMI_SEMI;
	v->a[80623] = aux_sym_heredoc_redirect_token1;
	v->a[80624] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80625] = anon_sym_AMP;
	v->a[80626] = aux_sym_concatenation_token1;
	v->a[80627] = anon_sym_DOLLAR;
	v->a[80628] = anon_sym_DQUOTE;
	v->a[80629] = sym_raw_string;
	v->a[80630] = sym_number;
	v->a[80631] = anon_sym_DOLLAR_LBRACE;
	v->a[80632] = anon_sym_DOLLAR_LPAREN;
	v->a[80633] = anon_sym_BQUOTE;
	v->a[80634] = sym_word;
	v->a[80635] = anon_sym_SEMI;
	v->a[80636] = 3;
	v->a[80637] = actions(3);
	v->a[80638] = 1;
	v->a[80639] = sym_comment;
	small_parse_table_4032(v);
}

void	small_parse_table_4032(t_small_parse_table_array *v)
{
	v->a[80640] = actions(982);
	v->a[80641] = 1;
	v->a[80642] = sym__concat;
	v->a[80643] = actions(980);
	v->a[80644] = 14;
	v->a[80645] = anon_sym_SEMI_SEMI;
	v->a[80646] = aux_sym_heredoc_redirect_token1;
	v->a[80647] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80648] = anon_sym_AMP;
	v->a[80649] = aux_sym_concatenation_token1;
	v->a[80650] = anon_sym_DOLLAR;
	v->a[80651] = anon_sym_DQUOTE;
	v->a[80652] = sym_raw_string;
	v->a[80653] = sym_number;
	v->a[80654] = anon_sym_DOLLAR_LBRACE;
	v->a[80655] = anon_sym_DOLLAR_LPAREN;
	v->a[80656] = anon_sym_BQUOTE;
	v->a[80657] = sym_word;
	v->a[80658] = anon_sym_SEMI;
	v->a[80659] = 5;
	small_parse_table_4033(v);
}

void	small_parse_table_4033(t_small_parse_table_array *v)
{
	v->a[80660] = actions(870);
	v->a[80661] = 1;
	v->a[80662] = sym_comment;
	v->a[80663] = actions(3130);
	v->a[80664] = 1;
	v->a[80665] = anon_sym_PIPE;
	v->a[80666] = state(1625);
	v->a[80667] = 1;
	v->a[80668] = aux_sym_pipeline_repeat1;
	v->a[80669] = actions(2466);
	v->a[80670] = 5;
	v->a[80671] = anon_sym_LT;
	v->a[80672] = anon_sym_GT;
	v->a[80673] = anon_sym_LT_AMP;
	v->a[80674] = anon_sym_GT_AMP;
	v->a[80675] = anon_sym_LT_LT;
	v->a[80676] = actions(2462);
	v->a[80677] = 8;
	v->a[80678] = sym_file_descriptor;
	v->a[80679] = anon_sym_AMP_AMP;
	small_parse_table_4034(v);
}

void	small_parse_table_4034(t_small_parse_table_array *v)
{
	v->a[80680] = anon_sym_PIPE_PIPE;
	v->a[80681] = anon_sym_GT_GT;
	v->a[80682] = anon_sym_GT_PIPE;
	v->a[80683] = anon_sym_LT_AMP_DASH;
	v->a[80684] = anon_sym_GT_AMP_DASH;
	v->a[80685] = anon_sym_LT_LT_DASH;
	v->a[80686] = 8;
	v->a[80687] = actions(3);
	v->a[80688] = 1;
	v->a[80689] = sym_comment;
	v->a[80690] = actions(906);
	v->a[80691] = 1;
	v->a[80692] = sym_file_descriptor;
	v->a[80693] = actions(3132);
	v->a[80694] = 1;
	v->a[80695] = aux_sym_heredoc_redirect_token1;
	v->a[80696] = state(2180);
	v->a[80697] = 1;
	v->a[80698] = sym__heredoc_expression;
	v->a[80699] = actions(886);
	small_parse_table_4035(v);
}

/* EOF small_parse_table_806.c */
