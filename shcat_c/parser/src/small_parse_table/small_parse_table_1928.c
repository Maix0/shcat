/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1928.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9640(t_small_parse_table_array *v)
{
	v->a[192800] = sym_arithmetic_expansion;
	v->a[192801] = sym_brace_expression;
	v->a[192802] = sym_string;
	v->a[192803] = sym_translated_string;
	v->a[192804] = sym_number;
	v->a[192805] = sym_simple_expansion;
	v->a[192806] = sym_expansion;
	v->a[192807] = sym_command_substitution;
	v->a[192808] = sym_process_substitution;
	v->a[192809] = 21;
	v->a[192810] = actions(71);
	v->a[192811] = 1;
	v->a[192812] = sym_comment;
	v->a[192813] = actions(6488);
	v->a[192814] = 1;
	v->a[192815] = anon_sym_DOLLAR;
	v->a[192816] = actions(6494);
	v->a[192817] = 1;
	v->a[192818] = aux_sym_number_token1;
	v->a[192819] = actions(6496);
	small_parse_table_9641(v);
}

void	small_parse_table_9641(t_small_parse_table_array *v)
{
	v->a[192820] = 1;
	v->a[192821] = aux_sym_number_token2;
	v->a[192822] = actions(6500);
	v->a[192823] = 1;
	v->a[192824] = anon_sym_DOLLAR_LPAREN;
	v->a[192825] = actions(6510);
	v->a[192826] = 1;
	v->a[192827] = sym_extglob_pattern;
	v->a[192828] = actions(6512);
	v->a[192829] = 1;
	v->a[192830] = sym__brace_start;
	v->a[192831] = actions(7226);
	v->a[192832] = 1;
	v->a[192833] = anon_sym_DOLLAR_LBRACK;
	v->a[192834] = actions(7228);
	v->a[192835] = 1;
	v->a[192836] = sym__special_character;
	v->a[192837] = actions(7230);
	v->a[192838] = 1;
	v->a[192839] = anon_sym_DQUOTE;
	small_parse_table_9642(v);
}

void	small_parse_table_9642(t_small_parse_table_array *v)
{
	v->a[192840] = actions(7234);
	v->a[192841] = 1;
	v->a[192842] = anon_sym_DOLLAR_LBRACE;
	v->a[192843] = actions(7236);
	v->a[192844] = 1;
	v->a[192845] = anon_sym_BQUOTE;
	v->a[192846] = actions(7238);
	v->a[192847] = 1;
	v->a[192848] = anon_sym_DOLLAR_BQUOTE;
	v->a[192849] = actions(8611);
	v->a[192850] = 1;
	v->a[192851] = sym_word;
	v->a[192852] = actions(8615);
	v->a[192853] = 1;
	v->a[192854] = sym_test_operator;
	v->a[192855] = state(6405);
	v->a[192856] = 1;
	v->a[192857] = aux_sym__literal_repeat1;
	v->a[192858] = actions(7224);
	v->a[192859] = 2;
	small_parse_table_9643(v);
}

void	small_parse_table_9643(t_small_parse_table_array *v)
{
	v->a[192860] = anon_sym_LPAREN_LPAREN;
	v->a[192861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[192862] = actions(7240);
	v->a[192863] = 2;
	v->a[192864] = anon_sym_LT_LPAREN;
	v->a[192865] = anon_sym_GT_LPAREN;
	v->a[192866] = actions(8613);
	v->a[192867] = 2;
	v->a[192868] = sym_raw_string;
	v->a[192869] = sym_ansi_c_string;
	v->a[192870] = state(6725);
	v->a[192871] = 2;
	v->a[192872] = sym_concatenation;
	v->a[192873] = sym__extglob_blob;
	v->a[192874] = state(6338);
	v->a[192875] = 9;
	v->a[192876] = sym_arithmetic_expansion;
	v->a[192877] = sym_brace_expression;
	v->a[192878] = sym_string;
	v->a[192879] = sym_translated_string;
	small_parse_table_9644(v);
}

void	small_parse_table_9644(t_small_parse_table_array *v)
{
	v->a[192880] = sym_number;
	v->a[192881] = sym_simple_expansion;
	v->a[192882] = sym_expansion;
	v->a[192883] = sym_command_substitution;
	v->a[192884] = sym_process_substitution;
	v->a[192885] = 3;
	v->a[192886] = actions(71);
	v->a[192887] = 1;
	v->a[192888] = sym_comment;
	v->a[192889] = actions(2094);
	v->a[192890] = 10;
	v->a[192891] = anon_sym_LT;
	v->a[192892] = anon_sym_GT;
	v->a[192893] = anon_sym_AMP_GT;
	v->a[192894] = anon_sym_LT_AMP;
	v->a[192895] = anon_sym_GT_AMP;
	v->a[192896] = anon_sym_DOLLAR;
	v->a[192897] = aux_sym_number_token1;
	v->a[192898] = aux_sym_number_token2;
	v->a[192899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9645(v);
}

/* EOF small_parse_table_1928.c */
