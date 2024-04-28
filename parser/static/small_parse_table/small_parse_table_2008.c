/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2008.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10040(t_small_parse_table_array *v)
{
	v->a[200800] = actions(381);
	v->a[200801] = 1;
	v->a[200802] = anon_sym_DOLLAR_LPAREN;
	v->a[200803] = actions(385);
	v->a[200804] = 1;
	v->a[200805] = anon_sym_DOLLAR_BQUOTE;
	v->a[200806] = actions(391);
	v->a[200807] = 1;
	v->a[200808] = sym__brace_start;
	v->a[200809] = actions(5809);
	v->a[200810] = 1;
	v->a[200811] = anon_sym_BQUOTE;
	v->a[200812] = actions(8836);
	v->a[200813] = 1;
	v->a[200814] = sym_word;
	v->a[200815] = actions(8844);
	v->a[200816] = 1;
	v->a[200817] = sym_test_operator;
	v->a[200818] = actions(9164);
	v->a[200819] = 1;
	small_parse_table_10041(v);
}

void	small_parse_table_10041(t_small_parse_table_array *v)
{
	v->a[200820] = anon_sym_RBRACK;
	v->a[200821] = actions(352);
	v->a[200822] = 2;
	v->a[200823] = anon_sym_LPAREN_LPAREN;
	v->a[200824] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200825] = actions(387);
	v->a[200826] = 2;
	v->a[200827] = anon_sym_LT_LPAREN;
	v->a[200828] = anon_sym_GT_LPAREN;
	v->a[200829] = actions(8840);
	v->a[200830] = 2;
	v->a[200831] = sym__special_character;
	v->a[200832] = sym__comment_word;
	v->a[200833] = actions(8842);
	v->a[200834] = 3;
	v->a[200835] = sym__bare_dollar;
	v->a[200836] = sym_raw_string;
	v->a[200837] = sym_ansi_c_string;
	v->a[200838] = state(2730);
	v->a[200839] = 9;
	small_parse_table_10042(v);
}

void	small_parse_table_10042(t_small_parse_table_array *v)
{
	v->a[200840] = sym_arithmetic_expansion;
	v->a[200841] = sym_brace_expression;
	v->a[200842] = sym_string;
	v->a[200843] = sym_translated_string;
	v->a[200844] = sym_number;
	v->a[200845] = sym_simple_expansion;
	v->a[200846] = sym_expansion;
	v->a[200847] = sym_command_substitution;
	v->a[200848] = sym_process_substitution;
	v->a[200849] = 21;
	v->a[200850] = actions(71);
	v->a[200851] = 1;
	v->a[200852] = sym_comment;
	v->a[200853] = actions(2636);
	v->a[200854] = 1;
	v->a[200855] = anon_sym_DOLLAR_LBRACK;
	v->a[200856] = actions(2638);
	v->a[200857] = 1;
	v->a[200858] = anon_sym_DOLLAR;
	v->a[200859] = actions(2640);
	small_parse_table_10043(v);
}

void	small_parse_table_10043(t_small_parse_table_array *v)
{
	v->a[200860] = 1;
	v->a[200861] = sym__special_character;
	v->a[200862] = actions(2642);
	v->a[200863] = 1;
	v->a[200864] = anon_sym_DQUOTE;
	v->a[200865] = actions(2646);
	v->a[200866] = 1;
	v->a[200867] = aux_sym_number_token1;
	v->a[200868] = actions(2648);
	v->a[200869] = 1;
	v->a[200870] = aux_sym_number_token2;
	v->a[200871] = actions(2650);
	v->a[200872] = 1;
	v->a[200873] = anon_sym_DOLLAR_LBRACE;
	v->a[200874] = actions(2652);
	v->a[200875] = 1;
	v->a[200876] = anon_sym_DOLLAR_LPAREN;
	v->a[200877] = actions(2654);
	v->a[200878] = 1;
	v->a[200879] = anon_sym_BQUOTE;
	small_parse_table_10044(v);
}

void	small_parse_table_10044(t_small_parse_table_array *v)
{
	v->a[200880] = actions(2656);
	v->a[200881] = 1;
	v->a[200882] = anon_sym_DOLLAR_BQUOTE;
	v->a[200883] = actions(2664);
	v->a[200884] = 1;
	v->a[200885] = sym__brace_start;
	v->a[200886] = actions(9166);
	v->a[200887] = 1;
	v->a[200888] = sym_word;
	v->a[200889] = actions(9170);
	v->a[200890] = 1;
	v->a[200891] = sym_test_operator;
	v->a[200892] = actions(9172);
	v->a[200893] = 1;
	v->a[200894] = sym_regex;
	v->a[200895] = state(2394);
	v->a[200896] = 1;
	v->a[200897] = aux_sym__literal_repeat1;
	v->a[200898] = state(2556);
	v->a[200899] = 1;
	small_parse_table_10045(v);
}

/* EOF small_parse_table_2008.c */
