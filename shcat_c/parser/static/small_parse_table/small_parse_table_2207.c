/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2207.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11035(t_small_parse_table_array *v)
{
	v->a[220700] = actions(8170);
	v->a[220701] = 1;
	v->a[220702] = sym__brace_start;
	v->a[220703] = actions(10564);
	v->a[220704] = 1;
	v->a[220705] = sym_word;
	v->a[220706] = actions(10570);
	v->a[220707] = 1;
	v->a[220708] = sym__comment_word;
	v->a[220709] = actions(8136);
	v->a[220710] = 2;
	v->a[220711] = anon_sym_LPAREN_LPAREN;
	v->a[220712] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220713] = actions(8162);
	v->a[220714] = 2;
	v->a[220715] = anon_sym_LT_LPAREN;
	v->a[220716] = anon_sym_GT_LPAREN;
	v->a[220717] = actions(10566);
	v->a[220718] = 2;
	v->a[220719] = sym_test_operator;
	small_parse_table_11036(v);
}

void	small_parse_table_11036(t_small_parse_table_array *v)
{
	v->a[220720] = sym__special_character;
	v->a[220721] = actions(10568);
	v->a[220722] = 3;
	v->a[220723] = sym__bare_dollar;
	v->a[220724] = sym_raw_string;
	v->a[220725] = sym_ansi_c_string;
	v->a[220726] = state(4526);
	v->a[220727] = 9;
	v->a[220728] = sym_arithmetic_expansion;
	v->a[220729] = sym_brace_expression;
	v->a[220730] = sym_string;
	v->a[220731] = sym_translated_string;
	v->a[220732] = sym_number;
	v->a[220733] = sym_simple_expansion;
	v->a[220734] = sym_expansion;
	v->a[220735] = sym_command_substitution;
	v->a[220736] = sym_process_substitution;
	v->a[220737] = 18;
	v->a[220738] = actions(3);
	v->a[220739] = 1;
	small_parse_table_11037(v);
}

void	small_parse_table_11037(t_small_parse_table_array *v)
{
	v->a[220740] = sym_comment;
	v->a[220741] = actions(264);
	v->a[220742] = 1;
	v->a[220743] = aux_sym_number_token1;
	v->a[220744] = actions(266);
	v->a[220745] = 1;
	v->a[220746] = aux_sym_number_token2;
	v->a[220747] = actions(270);
	v->a[220748] = 1;
	v->a[220749] = anon_sym_DOLLAR_LPAREN;
	v->a[220750] = actions(284);
	v->a[220751] = 1;
	v->a[220752] = sym__brace_start;
	v->a[220753] = actions(1075);
	v->a[220754] = 1;
	v->a[220755] = anon_sym_DOLLAR_LBRACK;
	v->a[220756] = actions(1081);
	v->a[220757] = 1;
	v->a[220758] = anon_sym_DQUOTE;
	v->a[220759] = actions(1085);
	small_parse_table_11038(v);
}

void	small_parse_table_11038(t_small_parse_table_array *v)
{
	v->a[220760] = 1;
	v->a[220761] = anon_sym_DOLLAR_LBRACE;
	v->a[220762] = actions(1087);
	v->a[220763] = 1;
	v->a[220764] = anon_sym_DOLLAR_BQUOTE;
	v->a[220765] = actions(3598);
	v->a[220766] = 1;
	v->a[220767] = anon_sym_BQUOTE;
	v->a[220768] = actions(10428);
	v->a[220769] = 1;
	v->a[220770] = sym_word;
	v->a[220771] = actions(10434);
	v->a[220772] = 1;
	v->a[220773] = sym__comment_word;
	v->a[220774] = actions(10572);
	v->a[220775] = 1;
	v->a[220776] = anon_sym_DOLLAR;
	v->a[220777] = actions(1073);
	v->a[220778] = 2;
	v->a[220779] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11039(v);
}

void	small_parse_table_11039(t_small_parse_table_array *v)
{
	v->a[220780] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220781] = actions(1089);
	v->a[220782] = 2;
	v->a[220783] = anon_sym_LT_LPAREN;
	v->a[220784] = anon_sym_GT_LPAREN;
	v->a[220785] = actions(10430);
	v->a[220786] = 2;
	v->a[220787] = sym_test_operator;
	v->a[220788] = sym__special_character;
	v->a[220789] = actions(10432);
	v->a[220790] = 3;
	v->a[220791] = sym__bare_dollar;
	v->a[220792] = sym_raw_string;
	v->a[220793] = sym_ansi_c_string;
	v->a[220794] = state(2732);
	v->a[220795] = 9;
	v->a[220796] = sym_arithmetic_expansion;
	v->a[220797] = sym_brace_expression;
	v->a[220798] = sym_string;
	v->a[220799] = sym_translated_string;
	small_parse_table_11040(v);
}

/* EOF small_parse_table_2207.c */
