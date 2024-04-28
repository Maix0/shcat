/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_188.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_940(t_small_parse_table_array *v)
{
	v->a[18800] = 1;
	v->a[18801] = sym_comment;
	v->a[18802] = actions(2628);
	v->a[18803] = 1;
	v->a[18804] = sym_word;
	v->a[18805] = actions(2634);
	v->a[18806] = 1;
	v->a[18807] = anon_sym_LT_LT_LT;
	v->a[18808] = actions(2636);
	v->a[18809] = 1;
	v->a[18810] = anon_sym_DOLLAR_LBRACK;
	v->a[18811] = actions(2638);
	v->a[18812] = 1;
	v->a[18813] = anon_sym_DOLLAR;
	v->a[18814] = actions(2640);
	v->a[18815] = 1;
	v->a[18816] = sym__special_character;
	v->a[18817] = actions(2642);
	v->a[18818] = 1;
	v->a[18819] = anon_sym_DQUOTE;
	small_parse_table_941(v);
}

void	small_parse_table_941(t_small_parse_table_array *v)
{
	v->a[18820] = actions(2646);
	v->a[18821] = 1;
	v->a[18822] = aux_sym_number_token1;
	v->a[18823] = actions(2648);
	v->a[18824] = 1;
	v->a[18825] = aux_sym_number_token2;
	v->a[18826] = actions(2650);
	v->a[18827] = 1;
	v->a[18828] = anon_sym_DOLLAR_LBRACE;
	v->a[18829] = actions(2652);
	v->a[18830] = 1;
	v->a[18831] = anon_sym_DOLLAR_LPAREN;
	v->a[18832] = actions(2654);
	v->a[18833] = 1;
	v->a[18834] = anon_sym_BQUOTE;
	v->a[18835] = actions(2656);
	v->a[18836] = 1;
	v->a[18837] = anon_sym_DOLLAR_BQUOTE;
	v->a[18838] = actions(2660);
	v->a[18839] = 1;
	small_parse_table_942(v);
}

void	small_parse_table_942(t_small_parse_table_array *v)
{
	v->a[18840] = sym_test_operator;
	v->a[18841] = actions(2662);
	v->a[18842] = 1;
	v->a[18843] = sym__bare_dollar;
	v->a[18844] = actions(2664);
	v->a[18845] = 1;
	v->a[18846] = sym__brace_start;
	v->a[18847] = state(751);
	v->a[18848] = 1;
	v->a[18849] = aux_sym_command_repeat2;
	v->a[18850] = state(2417);
	v->a[18851] = 1;
	v->a[18852] = aux_sym__literal_repeat1;
	v->a[18853] = state(2558);
	v->a[18854] = 1;
	v->a[18855] = sym_concatenation;
	v->a[18856] = state(2562);
	v->a[18857] = 1;
	v->a[18858] = sym_herestring_redirect;
	v->a[18859] = actions(2630);
	small_parse_table_943(v);
}

void	small_parse_table_943(t_small_parse_table_array *v)
{
	v->a[18860] = 2;
	v->a[18861] = anon_sym_LPAREN_LPAREN;
	v->a[18862] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18863] = actions(2632);
	v->a[18864] = 2;
	v->a[18865] = anon_sym_EQ_EQ;
	v->a[18866] = anon_sym_EQ_TILDE;
	v->a[18867] = actions(2644);
	v->a[18868] = 2;
	v->a[18869] = sym_raw_string;
	v->a[18870] = sym_ansi_c_string;
	v->a[18871] = actions(2658);
	v->a[18872] = 2;
	v->a[18873] = anon_sym_LT_LPAREN;
	v->a[18874] = anon_sym_GT_LPAREN;
	v->a[18875] = actions(1625);
	v->a[18876] = 7;
	v->a[18877] = anon_sym_PIPE;
	v->a[18878] = anon_sym_LT;
	v->a[18879] = anon_sym_GT;
	small_parse_table_944(v);
}

void	small_parse_table_944(t_small_parse_table_array *v)
{
	v->a[18880] = anon_sym_LT_LT;
	v->a[18881] = anon_sym_AMP_GT;
	v->a[18882] = anon_sym_LT_AMP;
	v->a[18883] = anon_sym_GT_AMP;
	v->a[18884] = state(2211);
	v->a[18885] = 9;
	v->a[18886] = sym_arithmetic_expansion;
	v->a[18887] = sym_brace_expression;
	v->a[18888] = sym_string;
	v->a[18889] = sym_translated_string;
	v->a[18890] = sym_number;
	v->a[18891] = sym_simple_expansion;
	v->a[18892] = sym_expansion;
	v->a[18893] = sym_command_substitution;
	v->a[18894] = sym_process_substitution;
	v->a[18895] = actions(1627);
	v->a[18896] = 10;
	v->a[18897] = sym_file_descriptor;
	v->a[18898] = anon_sym_PIPE_PIPE;
	v->a[18899] = anon_sym_AMP_AMP;
	small_parse_table_945(v);
}

/* EOF small_parse_table_188.c */
