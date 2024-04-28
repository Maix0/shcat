/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_746.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3730(t_small_parse_table_array *v)
{
	v->a[74600] = sym__concat;
	v->a[74601] = sym_variable_name;
	v->a[74602] = sym_test_operator;
	v->a[74603] = sym__brace_start;
	v->a[74604] = aux_sym_heredoc_redirect_token1;
	v->a[74605] = actions(1292);
	v->a[74606] = 39;
	v->a[74607] = anon_sym_LPAREN_LPAREN;
	v->a[74608] = anon_sym_SEMI;
	v->a[74609] = anon_sym_PIPE_PIPE;
	v->a[74610] = anon_sym_AMP_AMP;
	v->a[74611] = anon_sym_PIPE;
	v->a[74612] = anon_sym_AMP;
	v->a[74613] = anon_sym_LT;
	v->a[74614] = anon_sym_GT;
	v->a[74615] = anon_sym_LT_LT;
	v->a[74616] = anon_sym_GT_GT;
	v->a[74617] = anon_sym_RPAREN;
	v->a[74618] = anon_sym_SEMI_SEMI;
	v->a[74619] = anon_sym_PIPE_AMP;
	small_parse_table_3731(v);
}

void	small_parse_table_3731(t_small_parse_table_array *v)
{
	v->a[74620] = anon_sym_AMP_GT;
	v->a[74621] = anon_sym_AMP_GT_GT;
	v->a[74622] = anon_sym_LT_AMP;
	v->a[74623] = anon_sym_GT_AMP;
	v->a[74624] = anon_sym_GT_PIPE;
	v->a[74625] = anon_sym_LT_AMP_DASH;
	v->a[74626] = anon_sym_GT_AMP_DASH;
	v->a[74627] = anon_sym_LT_LT_DASH;
	v->a[74628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74629] = anon_sym_DOLLAR_LBRACK;
	v->a[74630] = aux_sym_concatenation_token1;
	v->a[74631] = anon_sym_DOLLAR;
	v->a[74632] = sym__special_character;
	v->a[74633] = anon_sym_DQUOTE;
	v->a[74634] = sym_raw_string;
	v->a[74635] = sym_ansi_c_string;
	v->a[74636] = aux_sym_number_token1;
	v->a[74637] = aux_sym_number_token2;
	v->a[74638] = anon_sym_DOLLAR_LBRACE;
	v->a[74639] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3732(v);
}

void	small_parse_table_3732(t_small_parse_table_array *v)
{
	v->a[74640] = anon_sym_BQUOTE;
	v->a[74641] = anon_sym_DOLLAR_BQUOTE;
	v->a[74642] = anon_sym_LT_LPAREN;
	v->a[74643] = anon_sym_GT_LPAREN;
	v->a[74644] = aux_sym__simple_variable_name_token1;
	v->a[74645] = sym_word;
	v->a[74646] = 6;
	v->a[74647] = actions(3);
	v->a[74648] = 1;
	v->a[74649] = sym_comment;
	v->a[74650] = actions(5638);
	v->a[74651] = 1;
	v->a[74652] = aux_sym_concatenation_token1;
	v->a[74653] = actions(5640);
	v->a[74654] = 1;
	v->a[74655] = sym__concat;
	v->a[74656] = state(1660);
	v->a[74657] = 1;
	v->a[74658] = aux_sym_concatenation_repeat1;
	v->a[74659] = actions(4469);
	small_parse_table_3733(v);
}

void	small_parse_table_3733(t_small_parse_table_array *v)
{
	v->a[74660] = 5;
	v->a[74661] = sym_file_descriptor;
	v->a[74662] = sym_variable_name;
	v->a[74663] = sym_test_operator;
	v->a[74664] = sym__brace_start;
	v->a[74665] = aux_sym_heredoc_redirect_token1;
	v->a[74666] = actions(4467);
	v->a[74667] = 37;
	v->a[74668] = anon_sym_LPAREN_LPAREN;
	v->a[74669] = anon_sym_SEMI;
	v->a[74670] = anon_sym_PIPE_PIPE;
	v->a[74671] = anon_sym_AMP_AMP;
	v->a[74672] = anon_sym_PIPE;
	v->a[74673] = anon_sym_AMP;
	v->a[74674] = anon_sym_LT;
	v->a[74675] = anon_sym_GT;
	v->a[74676] = anon_sym_LT_LT;
	v->a[74677] = anon_sym_GT_GT;
	v->a[74678] = anon_sym_SEMI_SEMI;
	v->a[74679] = anon_sym_PIPE_AMP;
	small_parse_table_3734(v);
}

void	small_parse_table_3734(t_small_parse_table_array *v)
{
	v->a[74680] = anon_sym_AMP_GT;
	v->a[74681] = anon_sym_AMP_GT_GT;
	v->a[74682] = anon_sym_LT_AMP;
	v->a[74683] = anon_sym_GT_AMP;
	v->a[74684] = anon_sym_GT_PIPE;
	v->a[74685] = anon_sym_LT_AMP_DASH;
	v->a[74686] = anon_sym_GT_AMP_DASH;
	v->a[74687] = anon_sym_LT_LT_DASH;
	v->a[74688] = anon_sym_LT_LT_LT;
	v->a[74689] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74690] = anon_sym_DOLLAR_LBRACK;
	v->a[74691] = anon_sym_DOLLAR;
	v->a[74692] = sym__special_character;
	v->a[74693] = anon_sym_DQUOTE;
	v->a[74694] = sym_raw_string;
	v->a[74695] = sym_ansi_c_string;
	v->a[74696] = aux_sym_number_token1;
	v->a[74697] = aux_sym_number_token2;
	v->a[74698] = anon_sym_DOLLAR_LBRACE;
	v->a[74699] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3735(v);
}

/* EOF small_parse_table_746.c */
