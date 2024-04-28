/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_348.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1740(t_small_parse_table_array *v)
{
	v->a[34800] = state(1376);
	v->a[34801] = 1;
	v->a[34802] = sym_concatenation;
	v->a[34803] = state(6771);
	v->a[34804] = 1;
	v->a[34805] = sym_subscript;
	v->a[34806] = actions(312);
	v->a[34807] = 2;
	v->a[34808] = anon_sym_LPAREN_LPAREN;
	v->a[34809] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34810] = actions(336);
	v->a[34811] = 2;
	v->a[34812] = anon_sym_LT_LPAREN;
	v->a[34813] = anon_sym_GT_LPAREN;
	v->a[34814] = actions(1017);
	v->a[34815] = 2;
	v->a[34816] = sym_raw_string;
	v->a[34817] = sym_ansi_c_string;
	v->a[34818] = actions(1392);
	v->a[34819] = 2;
	small_parse_table_1741(v);
}

void	small_parse_table_1741(t_small_parse_table_array *v)
{
	v->a[34820] = anon_sym_LT_AMP_DASH;
	v->a[34821] = anon_sym_GT_AMP_DASH;
	v->a[34822] = state(3127);
	v->a[34823] = 2;
	v->a[34824] = sym_variable_assignment;
	v->a[34825] = aux_sym_command_repeat1;
	v->a[34826] = state(3581);
	v->a[34827] = 2;
	v->a[34828] = sym_file_redirect;
	v->a[34829] = sym_herestring_redirect;
	v->a[34830] = actions(1390);
	v->a[34831] = 3;
	v->a[34832] = anon_sym_GT_GT;
	v->a[34833] = anon_sym_AMP_GT_GT;
	v->a[34834] = anon_sym_GT_PIPE;
	v->a[34835] = actions(1388);
	v->a[34836] = 5;
	v->a[34837] = anon_sym_LT;
	v->a[34838] = anon_sym_GT;
	v->a[34839] = anon_sym_AMP_GT;
	small_parse_table_1742(v);
}

void	small_parse_table_1742(t_small_parse_table_array *v)
{
	v->a[34840] = anon_sym_LT_AMP;
	v->a[34841] = anon_sym_GT_AMP;
	v->a[34842] = state(1717);
	v->a[34843] = 9;
	v->a[34844] = sym_arithmetic_expansion;
	v->a[34845] = sym_brace_expression;
	v->a[34846] = sym_string;
	v->a[34847] = sym_translated_string;
	v->a[34848] = sym_number;
	v->a[34849] = sym_simple_expansion;
	v->a[34850] = sym_expansion;
	v->a[34851] = sym_command_substitution;
	v->a[34852] = sym_process_substitution;
	v->a[34853] = 3;
	v->a[34854] = actions(3);
	v->a[34855] = 1;
	v->a[34856] = sym_comment;
	v->a[34857] = actions(1358);
	v->a[34858] = 6;
	v->a[34859] = sym_file_descriptor;
	small_parse_table_1743(v);
}

void	small_parse_table_1743(t_small_parse_table_array *v)
{
	v->a[34860] = sym__concat;
	v->a[34861] = sym_test_operator;
	v->a[34862] = sym__bare_dollar;
	v->a[34863] = sym__brace_start;
	v->a[34864] = aux_sym_heredoc_redirect_token1;
	v->a[34865] = actions(1356);
	v->a[34866] = 43;
	v->a[34867] = anon_sym_LPAREN_LPAREN;
	v->a[34868] = anon_sym_SEMI;
	v->a[34869] = anon_sym_PIPE_PIPE;
	v->a[34870] = anon_sym_AMP_AMP;
	v->a[34871] = anon_sym_PIPE;
	v->a[34872] = anon_sym_AMP;
	v->a[34873] = anon_sym_EQ_EQ;
	v->a[34874] = anon_sym_LT;
	v->a[34875] = anon_sym_GT;
	v->a[34876] = anon_sym_LT_LT;
	v->a[34877] = anon_sym_GT_GT;
	v->a[34878] = anon_sym_LPAREN;
	v->a[34879] = anon_sym_SEMI_SEMI;
	small_parse_table_1744(v);
}

void	small_parse_table_1744(t_small_parse_table_array *v)
{
	v->a[34880] = anon_sym_SEMI_AMP;
	v->a[34881] = anon_sym_SEMI_SEMI_AMP;
	v->a[34882] = anon_sym_PIPE_AMP;
	v->a[34883] = anon_sym_EQ_TILDE;
	v->a[34884] = anon_sym_AMP_GT;
	v->a[34885] = anon_sym_AMP_GT_GT;
	v->a[34886] = anon_sym_LT_AMP;
	v->a[34887] = anon_sym_GT_AMP;
	v->a[34888] = anon_sym_GT_PIPE;
	v->a[34889] = anon_sym_LT_AMP_DASH;
	v->a[34890] = anon_sym_GT_AMP_DASH;
	v->a[34891] = anon_sym_LT_LT_DASH;
	v->a[34892] = anon_sym_LT_LT_LT;
	v->a[34893] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34894] = anon_sym_DOLLAR_LBRACK;
	v->a[34895] = aux_sym_concatenation_token1;
	v->a[34896] = anon_sym_DOLLAR;
	v->a[34897] = sym__special_character;
	v->a[34898] = anon_sym_DQUOTE;
	v->a[34899] = sym_raw_string;
	small_parse_table_1745(v);
}

/* EOF small_parse_table_348.c */
