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
	v->a[74600] = sym__bare_dollar;
	v->a[74601] = actions(2705);
	v->a[74602] = 1;
	v->a[74603] = anon_sym_DOLLAR;
	v->a[74604] = actions(2661);
	v->a[74605] = 5;
	v->a[74606] = aux_sym_concatenation_token1;
	v->a[74607] = sym_raw_string;
	v->a[74608] = sym_number;
	v->a[74609] = sym__comment_word;
	v->a[74610] = sym_word;
	v->a[74611] = state(990);
	v->a[74612] = 5;
	v->a[74613] = sym_arithmetic_expansion;
	v->a[74614] = sym_string;
	v->a[74615] = sym_simple_expansion;
	v->a[74616] = sym_expansion;
	v->a[74617] = sym_command_substitution;
	v->a[74618] = 10;
	v->a[74619] = actions(3);
	small_parse_table_3731(v);
}

void	small_parse_table_3731(t_small_parse_table_array *v)
{
	v->a[74620] = 1;
	v->a[74621] = sym_comment;
	v->a[74622] = actions(1690);
	v->a[74623] = 1;
	v->a[74624] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74625] = actions(1694);
	v->a[74626] = 1;
	v->a[74627] = anon_sym_DQUOTE;
	v->a[74628] = actions(1696);
	v->a[74629] = 1;
	v->a[74630] = anon_sym_DOLLAR_LBRACE;
	v->a[74631] = actions(1698);
	v->a[74632] = 1;
	v->a[74633] = anon_sym_DOLLAR_LPAREN;
	v->a[74634] = actions(1700);
	v->a[74635] = 1;
	v->a[74636] = anon_sym_BQUOTE;
	v->a[74637] = actions(2709);
	v->a[74638] = 1;
	v->a[74639] = anon_sym_DOLLAR;
	small_parse_table_3732(v);
}

void	small_parse_table_3732(t_small_parse_table_array *v)
{
	v->a[74640] = actions(2711);
	v->a[74641] = 1;
	v->a[74642] = sym__bare_dollar;
	v->a[74643] = actions(2707);
	v->a[74644] = 5;
	v->a[74645] = aux_sym_concatenation_token1;
	v->a[74646] = sym_raw_string;
	v->a[74647] = sym_number;
	v->a[74648] = sym__comment_word;
	v->a[74649] = sym_word;
	v->a[74650] = state(1029);
	v->a[74651] = 5;
	v->a[74652] = sym_arithmetic_expansion;
	v->a[74653] = sym_string;
	v->a[74654] = sym_simple_expansion;
	v->a[74655] = sym_expansion;
	v->a[74656] = sym_command_substitution;
	v->a[74657] = 3;
	v->a[74658] = actions(870);
	v->a[74659] = 1;
	small_parse_table_3733(v);
}

void	small_parse_table_3733(t_small_parse_table_array *v)
{
	v->a[74660] = sym_comment;
	v->a[74661] = actions(1039);
	v->a[74662] = 6;
	v->a[74663] = anon_sym_PIPE;
	v->a[74664] = anon_sym_LT;
	v->a[74665] = anon_sym_GT;
	v->a[74666] = anon_sym_LT_AMP;
	v->a[74667] = anon_sym_GT_AMP;
	v->a[74668] = anon_sym_LT_LT;
	v->a[74669] = actions(1041);
	v->a[74670] = 11;
	v->a[74671] = sym_file_descriptor;
	v->a[74672] = sym__concat;
	v->a[74673] = sym_variable_name;
	v->a[74674] = anon_sym_AMP_AMP;
	v->a[74675] = anon_sym_PIPE_PIPE;
	v->a[74676] = anon_sym_GT_GT;
	v->a[74677] = anon_sym_GT_PIPE;
	v->a[74678] = anon_sym_LT_AMP_DASH;
	v->a[74679] = anon_sym_GT_AMP_DASH;
	small_parse_table_3734(v);
}

void	small_parse_table_3734(t_small_parse_table_array *v)
{
	v->a[74680] = anon_sym_LT_LT_DASH;
	v->a[74681] = aux_sym_concatenation_token1;
	v->a[74682] = 3;
	v->a[74683] = actions(870);
	v->a[74684] = 1;
	v->a[74685] = sym_comment;
	v->a[74686] = actions(1035);
	v->a[74687] = 6;
	v->a[74688] = anon_sym_PIPE;
	v->a[74689] = anon_sym_LT;
	v->a[74690] = anon_sym_GT;
	v->a[74691] = anon_sym_LT_AMP;
	v->a[74692] = anon_sym_GT_AMP;
	v->a[74693] = anon_sym_LT_LT;
	v->a[74694] = actions(1037);
	v->a[74695] = 11;
	v->a[74696] = sym_file_descriptor;
	v->a[74697] = sym__concat;
	v->a[74698] = sym_variable_name;
	v->a[74699] = anon_sym_AMP_AMP;
	small_parse_table_3735(v);
}

/* EOF small_parse_table_746.c */
