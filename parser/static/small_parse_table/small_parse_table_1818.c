/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1818.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9090(t_small_parse_table_array *v)
{
	v->a[181800] = 1;
	v->a[181801] = anon_sym_DOLLAR;
	v->a[181802] = actions(6494);
	v->a[181803] = 1;
	v->a[181804] = aux_sym_number_token1;
	v->a[181805] = actions(6496);
	v->a[181806] = 1;
	v->a[181807] = aux_sym_number_token2;
	v->a[181808] = actions(6500);
	v->a[181809] = 1;
	v->a[181810] = anon_sym_DOLLAR_LPAREN;
	v->a[181811] = actions(6508);
	v->a[181812] = 1;
	v->a[181813] = sym_test_operator;
	v->a[181814] = actions(6510);
	v->a[181815] = 1;
	v->a[181816] = sym_extglob_pattern;
	v->a[181817] = actions(6512);
	v->a[181818] = 1;
	v->a[181819] = sym__brace_start;
	small_parse_table_9091(v);
}

void	small_parse_table_9091(t_small_parse_table_array *v)
{
	v->a[181820] = actions(7226);
	v->a[181821] = 1;
	v->a[181822] = anon_sym_DOLLAR_LBRACK;
	v->a[181823] = actions(7228);
	v->a[181824] = 1;
	v->a[181825] = sym__special_character;
	v->a[181826] = actions(7230);
	v->a[181827] = 1;
	v->a[181828] = anon_sym_DQUOTE;
	v->a[181829] = actions(7234);
	v->a[181830] = 1;
	v->a[181831] = anon_sym_DOLLAR_LBRACE;
	v->a[181832] = actions(7236);
	v->a[181833] = 1;
	v->a[181834] = anon_sym_BQUOTE;
	v->a[181835] = actions(7238);
	v->a[181836] = 1;
	v->a[181837] = anon_sym_DOLLAR_BQUOTE;
	v->a[181838] = state(6426);
	v->a[181839] = 1;
	small_parse_table_9092(v);
}

void	small_parse_table_9092(t_small_parse_table_array *v)
{
	v->a[181840] = aux_sym__literal_repeat1;
	v->a[181841] = state(6923);
	v->a[181842] = 1;
	v->a[181843] = sym_last_case_item;
	v->a[181844] = actions(7224);
	v->a[181845] = 2;
	v->a[181846] = anon_sym_LPAREN_LPAREN;
	v->a[181847] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[181848] = actions(7232);
	v->a[181849] = 2;
	v->a[181850] = sym_raw_string;
	v->a[181851] = sym_ansi_c_string;
	v->a[181852] = actions(7240);
	v->a[181853] = 2;
	v->a[181854] = anon_sym_LT_LPAREN;
	v->a[181855] = anon_sym_GT_LPAREN;
	v->a[181856] = state(3477);
	v->a[181857] = 2;
	v->a[181858] = sym_case_item;
	v->a[181859] = aux_sym_case_statement_repeat1;
	small_parse_table_9093(v);
}

void	small_parse_table_9093(t_small_parse_table_array *v)
{
	v->a[181860] = state(6695);
	v->a[181861] = 2;
	v->a[181862] = sym_concatenation;
	v->a[181863] = sym__extglob_blob;
	v->a[181864] = state(6303);
	v->a[181865] = 9;
	v->a[181866] = sym_arithmetic_expansion;
	v->a[181867] = sym_brace_expression;
	v->a[181868] = sym_string;
	v->a[181869] = sym_translated_string;
	v->a[181870] = sym_number;
	v->a[181871] = sym_simple_expansion;
	v->a[181872] = sym_expansion;
	v->a[181873] = sym_command_substitution;
	v->a[181874] = sym_process_substitution;
	v->a[181875] = 24;
	v->a[181876] = actions(71);
	v->a[181877] = 1;
	v->a[181878] = sym_comment;
	v->a[181879] = actions(6474);
	small_parse_table_9094(v);
}

void	small_parse_table_9094(t_small_parse_table_array *v)
{
	v->a[181880] = 1;
	v->a[181881] = sym_word;
	v->a[181882] = actions(6480);
	v->a[181883] = 1;
	v->a[181884] = anon_sym_LPAREN;
	v->a[181885] = actions(6488);
	v->a[181886] = 1;
	v->a[181887] = anon_sym_DOLLAR;
	v->a[181888] = actions(6494);
	v->a[181889] = 1;
	v->a[181890] = aux_sym_number_token1;
	v->a[181891] = actions(6496);
	v->a[181892] = 1;
	v->a[181893] = aux_sym_number_token2;
	v->a[181894] = actions(6500);
	v->a[181895] = 1;
	v->a[181896] = anon_sym_DOLLAR_LPAREN;
	v->a[181897] = actions(6508);
	v->a[181898] = 1;
	v->a[181899] = sym_test_operator;
	small_parse_table_9095(v);
}

/* EOF small_parse_table_1818.c */
