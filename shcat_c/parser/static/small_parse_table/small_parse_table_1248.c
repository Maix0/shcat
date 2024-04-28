/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1248.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6240(t_small_parse_table_array *v)
{
	v->a[124800] = sym_string;
	v->a[124801] = sym_translated_string;
	v->a[124802] = sym_number;
	v->a[124803] = sym_simple_expansion;
	v->a[124804] = sym_expansion;
	v->a[124805] = sym_command_substitution;
	v->a[124806] = sym_process_substitution;
	v->a[124807] = 26;
	v->a[124808] = actions(3);
	v->a[124809] = 1;
	v->a[124810] = sym_comment;
	v->a[124811] = actions(6480);
	v->a[124812] = 1;
	v->a[124813] = anon_sym_LPAREN;
	v->a[124814] = actions(6486);
	v->a[124815] = 1;
	v->a[124816] = anon_sym_DOLLAR_LBRACK;
	v->a[124817] = actions(6488);
	v->a[124818] = 1;
	v->a[124819] = anon_sym_DOLLAR;
	small_parse_table_6241(v);
}

void	small_parse_table_6241(t_small_parse_table_array *v)
{
	v->a[124820] = actions(6490);
	v->a[124821] = 1;
	v->a[124822] = sym__special_character;
	v->a[124823] = actions(6492);
	v->a[124824] = 1;
	v->a[124825] = anon_sym_DQUOTE;
	v->a[124826] = actions(6494);
	v->a[124827] = 1;
	v->a[124828] = aux_sym_number_token1;
	v->a[124829] = actions(6496);
	v->a[124830] = 1;
	v->a[124831] = aux_sym_number_token2;
	v->a[124832] = actions(6498);
	v->a[124833] = 1;
	v->a[124834] = anon_sym_DOLLAR_LBRACE;
	v->a[124835] = actions(6500);
	v->a[124836] = 1;
	v->a[124837] = anon_sym_DOLLAR_LPAREN;
	v->a[124838] = actions(6502);
	v->a[124839] = 1;
	small_parse_table_6242(v);
}

void	small_parse_table_6242(t_small_parse_table_array *v)
{
	v->a[124840] = anon_sym_BQUOTE;
	v->a[124841] = actions(6504);
	v->a[124842] = 1;
	v->a[124843] = anon_sym_DOLLAR_BQUOTE;
	v->a[124844] = actions(6508);
	v->a[124845] = 1;
	v->a[124846] = sym_test_operator;
	v->a[124847] = actions(6510);
	v->a[124848] = 1;
	v->a[124849] = sym_extglob_pattern;
	v->a[124850] = actions(6512);
	v->a[124851] = 1;
	v->a[124852] = sym__brace_start;
	v->a[124853] = actions(6580);
	v->a[124854] = 1;
	v->a[124855] = anon_sym_esac;
	v->a[124856] = actions(6582);
	v->a[124857] = 1;
	v->a[124858] = aux_sym_heredoc_redirect_token1;
	v->a[124859] = state(6426);
	small_parse_table_6243(v);
}

void	small_parse_table_6243(t_small_parse_table_array *v)
{
	v->a[124860] = 1;
	v->a[124861] = aux_sym__literal_repeat1;
	v->a[124862] = state(6824);
	v->a[124863] = 1;
	v->a[124864] = sym_last_case_item;
	v->a[124865] = actions(6476);
	v->a[124866] = 2;
	v->a[124867] = anon_sym_LPAREN_LPAREN;
	v->a[124868] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124869] = actions(6506);
	v->a[124870] = 2;
	v->a[124871] = anon_sym_LT_LPAREN;
	v->a[124872] = anon_sym_GT_LPAREN;
	v->a[124873] = state(3378);
	v->a[124874] = 2;
	v->a[124875] = sym_case_item;
	v->a[124876] = aux_sym_case_statement_repeat1;
	v->a[124877] = state(6695);
	v->a[124878] = 2;
	v->a[124879] = sym_concatenation;
	small_parse_table_6244(v);
}

void	small_parse_table_6244(t_small_parse_table_array *v)
{
	v->a[124880] = sym__extglob_blob;
	v->a[124881] = actions(6474);
	v->a[124882] = 3;
	v->a[124883] = sym_raw_string;
	v->a[124884] = sym_ansi_c_string;
	v->a[124885] = sym_word;
	v->a[124886] = actions(6578);
	v->a[124887] = 3;
	v->a[124888] = anon_sym_SEMI;
	v->a[124889] = anon_sym_AMP;
	v->a[124890] = anon_sym_SEMI_SEMI;
	v->a[124891] = state(6303);
	v->a[124892] = 9;
	v->a[124893] = sym_arithmetic_expansion;
	v->a[124894] = sym_brace_expression;
	v->a[124895] = sym_string;
	v->a[124896] = sym_translated_string;
	v->a[124897] = sym_number;
	v->a[124898] = sym_simple_expansion;
	v->a[124899] = sym_expansion;
	small_parse_table_6245(v);
}

/* EOF small_parse_table_1248.c */
