/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1978.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9890(t_small_parse_table_array *v)
{
	v->a[197800] = actions(5108);
	v->a[197801] = 1;
	v->a[197802] = sym_word;
	v->a[197803] = actions(5112);
	v->a[197804] = 1;
	v->a[197805] = anon_sym_DOLLAR_LBRACK;
	v->a[197806] = actions(5114);
	v->a[197807] = 1;
	v->a[197808] = anon_sym_DOLLAR;
	v->a[197809] = actions(5116);
	v->a[197810] = 1;
	v->a[197811] = sym__special_character;
	v->a[197812] = actions(5118);
	v->a[197813] = 1;
	v->a[197814] = anon_sym_DQUOTE;
	v->a[197815] = actions(5122);
	v->a[197816] = 1;
	v->a[197817] = aux_sym_number_token1;
	v->a[197818] = actions(5124);
	v->a[197819] = 1;
	small_parse_table_9891(v);
}

void	small_parse_table_9891(t_small_parse_table_array *v)
{
	v->a[197820] = aux_sym_number_token2;
	v->a[197821] = actions(5126);
	v->a[197822] = 1;
	v->a[197823] = anon_sym_DOLLAR_LBRACE;
	v->a[197824] = actions(5128);
	v->a[197825] = 1;
	v->a[197826] = anon_sym_DOLLAR_LPAREN;
	v->a[197827] = actions(5130);
	v->a[197828] = 1;
	v->a[197829] = anon_sym_BQUOTE;
	v->a[197830] = actions(5132);
	v->a[197831] = 1;
	v->a[197832] = anon_sym_DOLLAR_BQUOTE;
	v->a[197833] = actions(5136);
	v->a[197834] = 1;
	v->a[197835] = sym_test_operator;
	v->a[197836] = actions(5138);
	v->a[197837] = 1;
	v->a[197838] = sym__brace_start;
	v->a[197839] = state(3114);
	small_parse_table_9892(v);
}

void	small_parse_table_9892(t_small_parse_table_array *v)
{
	v->a[197840] = 1;
	v->a[197841] = aux_sym__literal_repeat1;
	v->a[197842] = actions(5110);
	v->a[197843] = 2;
	v->a[197844] = anon_sym_LPAREN_LPAREN;
	v->a[197845] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[197846] = actions(5120);
	v->a[197847] = 2;
	v->a[197848] = sym_raw_string;
	v->a[197849] = sym_ansi_c_string;
	v->a[197850] = actions(5134);
	v->a[197851] = 2;
	v->a[197852] = anon_sym_LT_LPAREN;
	v->a[197853] = anon_sym_GT_LPAREN;
	v->a[197854] = state(1035);
	v->a[197855] = 2;
	v->a[197856] = sym_concatenation;
	v->a[197857] = aux_sym_for_statement_repeat1;
	v->a[197858] = state(2613);
	v->a[197859] = 9;
	small_parse_table_9893(v);
}

void	small_parse_table_9893(t_small_parse_table_array *v)
{
	v->a[197860] = sym_arithmetic_expansion;
	v->a[197861] = sym_brace_expression;
	v->a[197862] = sym_string;
	v->a[197863] = sym_translated_string;
	v->a[197864] = sym_number;
	v->a[197865] = sym_simple_expansion;
	v->a[197866] = sym_expansion;
	v->a[197867] = sym_command_substitution;
	v->a[197868] = sym_process_substitution;
	v->a[197869] = 20;
	v->a[197870] = actions(71);
	v->a[197871] = 1;
	v->a[197872] = sym_comment;
	v->a[197873] = actions(3397);
	v->a[197874] = 1;
	v->a[197875] = anon_sym_DOLLAR;
	v->a[197876] = actions(3401);
	v->a[197877] = 1;
	v->a[197878] = aux_sym_number_token1;
	v->a[197879] = actions(3403);
	small_parse_table_9894(v);
}

void	small_parse_table_9894(t_small_parse_table_array *v)
{
	v->a[197880] = 1;
	v->a[197881] = aux_sym_number_token2;
	v->a[197882] = actions(3407);
	v->a[197883] = 1;
	v->a[197884] = anon_sym_DOLLAR_LPAREN;
	v->a[197885] = actions(3417);
	v->a[197886] = 1;
	v->a[197887] = sym__brace_start;
	v->a[197888] = actions(4484);
	v->a[197889] = 1;
	v->a[197890] = sym_word;
	v->a[197891] = actions(4488);
	v->a[197892] = 1;
	v->a[197893] = sym_test_operator;
	v->a[197894] = actions(8926);
	v->a[197895] = 1;
	v->a[197896] = anon_sym_DOLLAR_LBRACK;
	v->a[197897] = actions(8928);
	v->a[197898] = 1;
	v->a[197899] = sym__special_character;
	small_parse_table_9895(v);
}

/* EOF small_parse_table_1978.c */
