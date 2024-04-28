/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_278.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1390(t_small_parse_table_array *v)
{
	v->a[27800] = 20;
	v->a[27801] = anon_sym_SEMI;
	v->a[27802] = anon_sym_PIPE_PIPE;
	v->a[27803] = anon_sym_AMP_AMP;
	v->a[27804] = anon_sym_PIPE;
	v->a[27805] = anon_sym_AMP;
	v->a[27806] = anon_sym_LT;
	v->a[27807] = anon_sym_GT;
	v->a[27808] = anon_sym_LT_LT;
	v->a[27809] = anon_sym_GT_GT;
	v->a[27810] = anon_sym_SEMI_SEMI;
	v->a[27811] = anon_sym_PIPE_AMP;
	v->a[27812] = anon_sym_AMP_GT;
	v->a[27813] = anon_sym_AMP_GT_GT;
	v->a[27814] = anon_sym_LT_AMP;
	v->a[27815] = anon_sym_GT_AMP;
	v->a[27816] = anon_sym_GT_PIPE;
	v->a[27817] = anon_sym_LT_AMP_DASH;
	v->a[27818] = anon_sym_GT_AMP_DASH;
	v->a[27819] = anon_sym_LT_LT_DASH;
	small_parse_table_1391(v);
}

void	small_parse_table_1391(t_small_parse_table_array *v)
{
	v->a[27820] = anon_sym_BQUOTE;
	v->a[27821] = 6;
	v->a[27822] = actions(71);
	v->a[27823] = 1;
	v->a[27824] = sym_comment;
	v->a[27825] = state(2476);
	v->a[27826] = 1;
	v->a[27827] = aux_sym__literal_repeat1;
	v->a[27828] = state(2637);
	v->a[27829] = 1;
	v->a[27830] = sym_concatenation;
	v->a[27831] = state(2303);
	v->a[27832] = 9;
	v->a[27833] = sym_arithmetic_expansion;
	v->a[27834] = sym_brace_expression;
	v->a[27835] = sym_string;
	v->a[27836] = sym_translated_string;
	v->a[27837] = sym_number;
	v->a[27838] = sym_simple_expansion;
	v->a[27839] = sym_expansion;
	small_parse_table_1392(v);
}

void	small_parse_table_1392(t_small_parse_table_array *v)
{
	v->a[27840] = sym_command_substitution;
	v->a[27841] = sym_process_substitution;
	v->a[27842] = actions(2494);
	v->a[27843] = 13;
	v->a[27844] = anon_sym_PIPE;
	v->a[27845] = anon_sym_LT;
	v->a[27846] = anon_sym_GT;
	v->a[27847] = anon_sym_LT_LT;
	v->a[27848] = anon_sym_AMP_GT;
	v->a[27849] = anon_sym_LT_AMP;
	v->a[27850] = anon_sym_GT_AMP;
	v->a[27851] = anon_sym_DOLLAR;
	v->a[27852] = sym__special_character;
	v->a[27853] = aux_sym_number_token1;
	v->a[27854] = aux_sym_number_token2;
	v->a[27855] = anon_sym_DOLLAR_LPAREN;
	v->a[27856] = sym_word;
	v->a[27857] = actions(2496);
	v->a[27858] = 26;
	v->a[27859] = sym_file_descriptor;
	small_parse_table_1393(v);
}

void	small_parse_table_1393(t_small_parse_table_array *v)
{
	v->a[27860] = sym_variable_name;
	v->a[27861] = sym_test_operator;
	v->a[27862] = sym__brace_start;
	v->a[27863] = anon_sym_LPAREN_LPAREN;
	v->a[27864] = anon_sym_PIPE_PIPE;
	v->a[27865] = anon_sym_AMP_AMP;
	v->a[27866] = anon_sym_GT_GT;
	v->a[27867] = anon_sym_PIPE_AMP;
	v->a[27868] = anon_sym_RBRACK;
	v->a[27869] = anon_sym_AMP_GT_GT;
	v->a[27870] = anon_sym_GT_PIPE;
	v->a[27871] = anon_sym_LT_AMP_DASH;
	v->a[27872] = anon_sym_GT_AMP_DASH;
	v->a[27873] = anon_sym_LT_LT_DASH;
	v->a[27874] = anon_sym_LT_LT_LT;
	v->a[27875] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27876] = anon_sym_DOLLAR_LBRACK;
	v->a[27877] = anon_sym_DQUOTE;
	v->a[27878] = sym_raw_string;
	v->a[27879] = sym_ansi_c_string;
	small_parse_table_1394(v);
}

void	small_parse_table_1394(t_small_parse_table_array *v)
{
	v->a[27880] = anon_sym_DOLLAR_LBRACE;
	v->a[27881] = anon_sym_BQUOTE;
	v->a[27882] = anon_sym_DOLLAR_BQUOTE;
	v->a[27883] = anon_sym_LT_LPAREN;
	v->a[27884] = anon_sym_GT_LPAREN;
	v->a[27885] = 3;
	v->a[27886] = actions(3);
	v->a[27887] = 1;
	v->a[27888] = sym_comment;
	v->a[27889] = actions(1302);
	v->a[27890] = 6;
	v->a[27891] = sym_file_descriptor;
	v->a[27892] = sym__concat;
	v->a[27893] = sym_test_operator;
	v->a[27894] = sym__bare_dollar;
	v->a[27895] = sym__brace_start;
	v->a[27896] = aux_sym_heredoc_redirect_token1;
	v->a[27897] = actions(1300);
	v->a[27898] = 44;
	v->a[27899] = anon_sym_LPAREN_LPAREN;
	small_parse_table_1395(v);
}

/* EOF small_parse_table_278.c */
