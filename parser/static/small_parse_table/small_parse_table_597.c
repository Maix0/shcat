/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_597.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2985(t_small_parse_table_array *v)
{
	v->a[59700] = anon_sym_DASH2;
	v->a[59701] = anon_sym_PLUS2;
	v->a[59702] = state(588);
	v->a[59703] = 4;
	v->a[59704] = sym_string;
	v->a[59705] = sym_number;
	v->a[59706] = sym_simple_expansion;
	v->a[59707] = sym_expansion;
	v->a[59708] = state(633);
	v->a[59709] = 8;
	v->a[59710] = sym__arithmetic_expression;
	v->a[59711] = sym_arithmetic_literal;
	v->a[59712] = sym_arithmetic_binary_expression;
	v->a[59713] = sym_arithmetic_ternary_expression;
	v->a[59714] = sym_arithmetic_unary_expression;
	v->a[59715] = sym_arithmetic_postfix_expression;
	v->a[59716] = sym_arithmetic_parenthesized_expression;
	v->a[59717] = sym_command_substitution;
	v->a[59718] = 3;
	v->a[59719] = actions(3);
	small_parse_table_2986(v);
}

void	small_parse_table_2986(t_small_parse_table_array *v)
{
	v->a[59720] = 1;
	v->a[59721] = sym_comment;
	v->a[59722] = actions(1255);
	v->a[59723] = 2;
	v->a[59724] = sym_file_descriptor;
	v->a[59725] = sym__concat;
	v->a[59726] = actions(1257);
	v->a[59727] = 26;
	v->a[59728] = anon_sym_PIPE;
	v->a[59729] = anon_sym_AMP_AMP;
	v->a[59730] = anon_sym_PIPE_PIPE;
	v->a[59731] = anon_sym_LT;
	v->a[59732] = anon_sym_GT;
	v->a[59733] = anon_sym_GT_GT;
	v->a[59734] = anon_sym_AMP_GT;
	v->a[59735] = anon_sym_AMP_GT_GT;
	v->a[59736] = anon_sym_LT_AMP;
	v->a[59737] = anon_sym_GT_AMP;
	v->a[59738] = anon_sym_GT_PIPE;
	v->a[59739] = anon_sym_LT_AMP_DASH;
	small_parse_table_2987(v);
}

void	small_parse_table_2987(t_small_parse_table_array *v)
{
	v->a[59740] = anon_sym_GT_AMP_DASH;
	v->a[59741] = anon_sym_LT_LT;
	v->a[59742] = anon_sym_LT_LT_DASH;
	v->a[59743] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59744] = aux_sym_concatenation_token1;
	v->a[59745] = anon_sym_DOLLAR;
	v->a[59746] = anon_sym_DQUOTE;
	v->a[59747] = sym_raw_string;
	v->a[59748] = aux_sym_number_token1;
	v->a[59749] = aux_sym_number_token2;
	v->a[59750] = anon_sym_DOLLAR_LBRACE;
	v->a[59751] = anon_sym_DOLLAR_LPAREN;
	v->a[59752] = anon_sym_BQUOTE;
	v->a[59753] = sym_word;
	v->a[59754] = 3;
	v->a[59755] = actions(3);
	v->a[59756] = 1;
	v->a[59757] = sym_comment;
	v->a[59758] = actions(1301);
	v->a[59759] = 2;
	small_parse_table_2988(v);
}

void	small_parse_table_2988(t_small_parse_table_array *v)
{
	v->a[59760] = sym_file_descriptor;
	v->a[59761] = sym__concat;
	v->a[59762] = actions(1299);
	v->a[59763] = 26;
	v->a[59764] = anon_sym_PIPE;
	v->a[59765] = anon_sym_AMP_AMP;
	v->a[59766] = anon_sym_PIPE_PIPE;
	v->a[59767] = anon_sym_LT;
	v->a[59768] = anon_sym_GT;
	v->a[59769] = anon_sym_GT_GT;
	v->a[59770] = anon_sym_AMP_GT;
	v->a[59771] = anon_sym_AMP_GT_GT;
	v->a[59772] = anon_sym_LT_AMP;
	v->a[59773] = anon_sym_GT_AMP;
	v->a[59774] = anon_sym_GT_PIPE;
	v->a[59775] = anon_sym_LT_AMP_DASH;
	v->a[59776] = anon_sym_GT_AMP_DASH;
	v->a[59777] = anon_sym_LT_LT;
	v->a[59778] = anon_sym_LT_LT_DASH;
	v->a[59779] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2989(v);
}

void	small_parse_table_2989(t_small_parse_table_array *v)
{
	v->a[59780] = aux_sym_concatenation_token1;
	v->a[59781] = anon_sym_DOLLAR;
	v->a[59782] = anon_sym_DQUOTE;
	v->a[59783] = sym_raw_string;
	v->a[59784] = aux_sym_number_token1;
	v->a[59785] = aux_sym_number_token2;
	v->a[59786] = anon_sym_DOLLAR_LBRACE;
	v->a[59787] = anon_sym_DOLLAR_LPAREN;
	v->a[59788] = anon_sym_BQUOTE;
	v->a[59789] = sym_word;
	v->a[59790] = 17;
	v->a[59791] = actions(1404);
	v->a[59792] = 1;
	v->a[59793] = sym_comment;
	v->a[59794] = actions(2077);
	v->a[59795] = 1;
	v->a[59796] = anon_sym_LPAREN;
	v->a[59797] = actions(2079);
	v->a[59798] = 1;
	v->a[59799] = anon_sym_BANG;
	small_parse_table_2990(v);
}

/* EOF small_parse_table_597.c */
