/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1007.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5035(t_small_parse_table_array *v)
{
	v->a[100700] = sym__expression;
	v->a[100701] = actions(1129);
	v->a[100702] = 2;
	v->a[100703] = anon_sym_LPAREN_LPAREN;
	v->a[100704] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100705] = actions(1165);
	v->a[100706] = 2;
	v->a[100707] = anon_sym_LT_LPAREN;
	v->a[100708] = anon_sym_GT_LPAREN;
	v->a[100709] = actions(1215);
	v->a[100710] = 2;
	v->a[100711] = anon_sym_PLUS_PLUS2;
	v->a[100712] = anon_sym_DASH_DASH2;
	v->a[100713] = actions(1217);
	v->a[100714] = 2;
	v->a[100715] = anon_sym_DASH2;
	v->a[100716] = anon_sym_PLUS2;
	v->a[100717] = actions(1223);
	v->a[100718] = 2;
	v->a[100719] = sym_raw_string;
	small_parse_table_5036(v);
}

void	small_parse_table_5036(t_small_parse_table_array *v)
{
	v->a[100720] = sym_ansi_c_string;
	v->a[100721] = state(2594);
	v->a[100722] = 6;
	v->a[100723] = sym_binary_expression;
	v->a[100724] = sym_ternary_expression;
	v->a[100725] = sym_unary_expression;
	v->a[100726] = sym_postfix_expression;
	v->a[100727] = sym_parenthesized_expression;
	v->a[100728] = sym_concatenation;
	v->a[100729] = state(2588);
	v->a[100730] = 9;
	v->a[100731] = sym_arithmetic_expansion;
	v->a[100732] = sym_brace_expression;
	v->a[100733] = sym_string;
	v->a[100734] = sym_translated_string;
	v->a[100735] = sym_number;
	v->a[100736] = sym_simple_expansion;
	v->a[100737] = sym_expansion;
	v->a[100738] = sym_command_substitution;
	v->a[100739] = sym_process_substitution;
	small_parse_table_5037(v);
}

void	small_parse_table_5037(t_small_parse_table_array *v)
{
	v->a[100740] = 7;
	v->a[100741] = actions(3);
	v->a[100742] = 1;
	v->a[100743] = sym_comment;
	v->a[100744] = actions(5826);
	v->a[100745] = 1;
	v->a[100746] = aux_sym_heredoc_redirect_token1;
	v->a[100747] = actions(5828);
	v->a[100748] = 1;
	v->a[100749] = sym_file_descriptor;
	v->a[100750] = actions(5831);
	v->a[100751] = 3;
	v->a[100752] = sym_variable_name;
	v->a[100753] = sym_test_operator;
	v->a[100754] = sym__brace_start;
	v->a[100755] = actions(5821);
	v->a[100756] = 10;
	v->a[100757] = anon_sym_SEMI;
	v->a[100758] = anon_sym_PIPE_PIPE;
	v->a[100759] = anon_sym_AMP_AMP;
	small_parse_table_5038(v);
}

void	small_parse_table_5038(t_small_parse_table_array *v)
{
	v->a[100760] = anon_sym_PIPE;
	v->a[100761] = anon_sym_AMP;
	v->a[100762] = anon_sym_LT_LT;
	v->a[100763] = anon_sym_RPAREN;
	v->a[100764] = anon_sym_SEMI_SEMI;
	v->a[100765] = anon_sym_PIPE_AMP;
	v->a[100766] = anon_sym_LT_LT_DASH;
	v->a[100767] = actions(5823);
	v->a[100768] = 11;
	v->a[100769] = anon_sym_LT;
	v->a[100770] = anon_sym_GT;
	v->a[100771] = anon_sym_GT_GT;
	v->a[100772] = anon_sym_AMP_GT;
	v->a[100773] = anon_sym_AMP_GT_GT;
	v->a[100774] = anon_sym_LT_AMP;
	v->a[100775] = anon_sym_GT_AMP;
	v->a[100776] = anon_sym_GT_PIPE;
	v->a[100777] = anon_sym_LT_AMP_DASH;
	v->a[100778] = anon_sym_GT_AMP_DASH;
	v->a[100779] = anon_sym_LT_LT_LT;
	small_parse_table_5039(v);
}

void	small_parse_table_5039(t_small_parse_table_array *v)
{
	v->a[100780] = actions(5819);
	v->a[100781] = 17;
	v->a[100782] = anon_sym_LPAREN_LPAREN;
	v->a[100783] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100784] = anon_sym_DOLLAR_LBRACK;
	v->a[100785] = anon_sym_DOLLAR;
	v->a[100786] = sym__special_character;
	v->a[100787] = anon_sym_DQUOTE;
	v->a[100788] = sym_raw_string;
	v->a[100789] = sym_ansi_c_string;
	v->a[100790] = aux_sym_number_token1;
	v->a[100791] = aux_sym_number_token2;
	v->a[100792] = anon_sym_DOLLAR_LBRACE;
	v->a[100793] = anon_sym_DOLLAR_LPAREN;
	v->a[100794] = anon_sym_BQUOTE;
	v->a[100795] = anon_sym_DOLLAR_BQUOTE;
	v->a[100796] = anon_sym_LT_LPAREN;
	v->a[100797] = anon_sym_GT_LPAREN;
	v->a[100798] = sym_word;
	v->a[100799] = 26;
	small_parse_table_5040(v);
}

/* EOF small_parse_table_1007.c */
