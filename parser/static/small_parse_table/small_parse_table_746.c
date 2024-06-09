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
	v->a[74600] = sym_comment;
	v->a[74601] = actions(2119);
	v->a[74602] = 1;
	v->a[74603] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74604] = actions(2121);
	v->a[74605] = 1;
	v->a[74606] = anon_sym_DOLLAR;
	v->a[74607] = actions(2123);
	v->a[74608] = 1;
	v->a[74609] = anon_sym_DQUOTE;
	v->a[74610] = actions(2125);
	v->a[74611] = 1;
	v->a[74612] = aux_sym_number_token1;
	v->a[74613] = actions(2127);
	v->a[74614] = 1;
	v->a[74615] = aux_sym_number_token2;
	v->a[74616] = actions(2129);
	v->a[74617] = 1;
	v->a[74618] = anon_sym_DOLLAR_LBRACE;
	v->a[74619] = actions(2131);
	small_parse_table_3731(v);
}

void	small_parse_table_3731(t_small_parse_table_array *v)
{
	v->a[74620] = 1;
	v->a[74621] = anon_sym_DOLLAR_LPAREN;
	v->a[74622] = actions(2133);
	v->a[74623] = 1;
	v->a[74624] = anon_sym_BQUOTE;
	v->a[74625] = actions(2135);
	v->a[74626] = 1;
	v->a[74627] = sym_extglob_pattern;
	v->a[74628] = actions(2899);
	v->a[74629] = 2;
	v->a[74630] = sym_raw_string;
	v->a[74631] = sym_word;
	v->a[74632] = state(2036);
	v->a[74633] = 2;
	v->a[74634] = sym_concatenation;
	v->a[74635] = sym__extglob_blob;
	v->a[74636] = state(1963);
	v->a[74637] = 6;
	v->a[74638] = sym_arithmetic_expansion;
	v->a[74639] = sym_string;
	small_parse_table_3732(v);
}

void	small_parse_table_3732(t_small_parse_table_array *v)
{
	v->a[74640] = sym_number;
	v->a[74641] = sym_simple_expansion;
	v->a[74642] = sym_expansion;
	v->a[74643] = sym_command_substitution;
	v->a[74644] = 8;
	v->a[74645] = actions(3);
	v->a[74646] = 1;
	v->a[74647] = sym_comment;
	v->a[74648] = actions(2761);
	v->a[74649] = 1;
	v->a[74650] = sym_file_descriptor;
	v->a[74651] = actions(2765);
	v->a[74652] = 1;
	v->a[74653] = aux_sym_heredoc_redirect_token1;
	v->a[74654] = actions(1062);
	v->a[74655] = 2;
	v->a[74656] = anon_sym_LT_LT;
	v->a[74657] = anon_sym_LT_LT_DASH;
	v->a[74658] = actions(1588);
	v->a[74659] = 2;
	small_parse_table_3733(v);
}

void	small_parse_table_3733(t_small_parse_table_array *v)
{
	v->a[74660] = anon_sym_AMP_AMP;
	v->a[74661] = anon_sym_PIPE_PIPE;
	v->a[74662] = actions(2757);
	v->a[74663] = 2;
	v->a[74664] = anon_sym_LT_AMP_DASH;
	v->a[74665] = anon_sym_GT_AMP_DASH;
	v->a[74666] = state(1302);
	v->a[74667] = 3;
	v->a[74668] = sym_file_redirect;
	v->a[74669] = sym_heredoc_redirect;
	v->a[74670] = aux_sym_redirected_statement_repeat1;
	v->a[74671] = actions(2755);
	v->a[74672] = 8;
	v->a[74673] = anon_sym_LT;
	v->a[74674] = anon_sym_GT;
	v->a[74675] = anon_sym_GT_GT;
	v->a[74676] = anon_sym_AMP_GT;
	v->a[74677] = anon_sym_AMP_GT_GT;
	v->a[74678] = anon_sym_LT_AMP;
	v->a[74679] = anon_sym_GT_AMP;
	small_parse_table_3734(v);
}

void	small_parse_table_3734(t_small_parse_table_array *v)
{
	v->a[74680] = anon_sym_GT_PIPE;
	v->a[74681] = 3;
	v->a[74682] = actions(1404);
	v->a[74683] = 1;
	v->a[74684] = sym_comment;
	v->a[74685] = actions(1239);
	v->a[74686] = 7;
	v->a[74687] = anon_sym_PIPE;
	v->a[74688] = anon_sym_LT;
	v->a[74689] = anon_sym_GT;
	v->a[74690] = anon_sym_AMP_GT;
	v->a[74691] = anon_sym_LT_AMP;
	v->a[74692] = anon_sym_GT_AMP;
	v->a[74693] = anon_sym_LT_LT;
	v->a[74694] = actions(1241);
	v->a[74695] = 12;
	v->a[74696] = sym_file_descriptor;
	v->a[74697] = sym__concat;
	v->a[74698] = sym_variable_name;
	v->a[74699] = anon_sym_AMP_AMP;
	small_parse_table_3735(v);
}

/* EOF small_parse_table_746.c */
