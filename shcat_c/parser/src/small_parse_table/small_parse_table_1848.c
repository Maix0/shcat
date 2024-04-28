/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1848.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9240(t_small_parse_table_array *v)
{
	v->a[184800] = sym_raw_string;
	v->a[184801] = sym_ansi_c_string;
	v->a[184802] = actions(7240);
	v->a[184803] = 2;
	v->a[184804] = anon_sym_LT_LPAREN;
	v->a[184805] = anon_sym_GT_LPAREN;
	v->a[184806] = state(3477);
	v->a[184807] = 2;
	v->a[184808] = sym_case_item;
	v->a[184809] = aux_sym_case_statement_repeat1;
	v->a[184810] = state(6695);
	v->a[184811] = 2;
	v->a[184812] = sym_concatenation;
	v->a[184813] = sym__extglob_blob;
	v->a[184814] = state(6303);
	v->a[184815] = 9;
	v->a[184816] = sym_arithmetic_expansion;
	v->a[184817] = sym_brace_expression;
	v->a[184818] = sym_string;
	v->a[184819] = sym_translated_string;
	small_parse_table_9241(v);
}

void	small_parse_table_9241(t_small_parse_table_array *v)
{
	v->a[184820] = sym_number;
	v->a[184821] = sym_simple_expansion;
	v->a[184822] = sym_expansion;
	v->a[184823] = sym_command_substitution;
	v->a[184824] = sym_process_substitution;
	v->a[184825] = 24;
	v->a[184826] = actions(71);
	v->a[184827] = 1;
	v->a[184828] = sym_comment;
	v->a[184829] = actions(6474);
	v->a[184830] = 1;
	v->a[184831] = sym_word;
	v->a[184832] = actions(6480);
	v->a[184833] = 1;
	v->a[184834] = anon_sym_LPAREN;
	v->a[184835] = actions(6488);
	v->a[184836] = 1;
	v->a[184837] = anon_sym_DOLLAR;
	v->a[184838] = actions(6494);
	v->a[184839] = 1;
	small_parse_table_9242(v);
}

void	small_parse_table_9242(t_small_parse_table_array *v)
{
	v->a[184840] = aux_sym_number_token1;
	v->a[184841] = actions(6496);
	v->a[184842] = 1;
	v->a[184843] = aux_sym_number_token2;
	v->a[184844] = actions(6500);
	v->a[184845] = 1;
	v->a[184846] = anon_sym_DOLLAR_LPAREN;
	v->a[184847] = actions(6508);
	v->a[184848] = 1;
	v->a[184849] = sym_test_operator;
	v->a[184850] = actions(6510);
	v->a[184851] = 1;
	v->a[184852] = sym_extglob_pattern;
	v->a[184853] = actions(6512);
	v->a[184854] = 1;
	v->a[184855] = sym__brace_start;
	v->a[184856] = actions(7226);
	v->a[184857] = 1;
	v->a[184858] = anon_sym_DOLLAR_LBRACK;
	v->a[184859] = actions(7228);
	small_parse_table_9243(v);
}

void	small_parse_table_9243(t_small_parse_table_array *v)
{
	v->a[184860] = 1;
	v->a[184861] = sym__special_character;
	v->a[184862] = actions(7230);
	v->a[184863] = 1;
	v->a[184864] = anon_sym_DQUOTE;
	v->a[184865] = actions(7234);
	v->a[184866] = 1;
	v->a[184867] = anon_sym_DOLLAR_LBRACE;
	v->a[184868] = actions(7236);
	v->a[184869] = 1;
	v->a[184870] = anon_sym_BQUOTE;
	v->a[184871] = actions(7238);
	v->a[184872] = 1;
	v->a[184873] = anon_sym_DOLLAR_BQUOTE;
	v->a[184874] = state(6426);
	v->a[184875] = 1;
	v->a[184876] = aux_sym__literal_repeat1;
	v->a[184877] = state(7489);
	v->a[184878] = 1;
	v->a[184879] = sym_last_case_item;
	small_parse_table_9244(v);
}

void	small_parse_table_9244(t_small_parse_table_array *v)
{
	v->a[184880] = actions(7224);
	v->a[184881] = 2;
	v->a[184882] = anon_sym_LPAREN_LPAREN;
	v->a[184883] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[184884] = actions(7232);
	v->a[184885] = 2;
	v->a[184886] = sym_raw_string;
	v->a[184887] = sym_ansi_c_string;
	v->a[184888] = actions(7240);
	v->a[184889] = 2;
	v->a[184890] = anon_sym_LT_LPAREN;
	v->a[184891] = anon_sym_GT_LPAREN;
	v->a[184892] = state(3477);
	v->a[184893] = 2;
	v->a[184894] = sym_case_item;
	v->a[184895] = aux_sym_case_statement_repeat1;
	v->a[184896] = state(6695);
	v->a[184897] = 2;
	v->a[184898] = sym_concatenation;
	v->a[184899] = sym__extglob_blob;
	small_parse_table_9245(v);
}

/* EOF small_parse_table_1848.c */
