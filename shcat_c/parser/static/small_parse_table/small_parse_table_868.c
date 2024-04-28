/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_868.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4340(t_small_parse_table_array *v)
{
	v->a[86800] = actions(71);
	v->a[86801] = 1;
	v->a[86802] = sym_comment;
	v->a[86803] = state(3543);
	v->a[86804] = 1;
	v->a[86805] = aux_sym__literal_repeat1;
	v->a[86806] = state(1868);
	v->a[86807] = 2;
	v->a[86808] = sym_concatenation;
	v->a[86809] = aux_sym_for_statement_repeat1;
	v->a[86810] = state(3480);
	v->a[86811] = 9;
	v->a[86812] = sym_arithmetic_expansion;
	v->a[86813] = sym_brace_expression;
	v->a[86814] = sym_string;
	v->a[86815] = sym_translated_string;
	v->a[86816] = sym_number;
	v->a[86817] = sym_simple_expansion;
	v->a[86818] = sym_expansion;
	v->a[86819] = sym_command_substitution;
	small_parse_table_4341(v);
}

void	small_parse_table_4341(t_small_parse_table_array *v)
{
	v->a[86820] = sym_process_substitution;
	v->a[86821] = actions(2094);
	v->a[86822] = 10;
	v->a[86823] = anon_sym_LT;
	v->a[86824] = anon_sym_GT;
	v->a[86825] = anon_sym_AMP_GT;
	v->a[86826] = anon_sym_LT_AMP;
	v->a[86827] = anon_sym_GT_AMP;
	v->a[86828] = anon_sym_DOLLAR;
	v->a[86829] = aux_sym_number_token1;
	v->a[86830] = aux_sym_number_token2;
	v->a[86831] = anon_sym_DOLLAR_LPAREN;
	v->a[86832] = sym_word;
	v->a[86833] = actions(2096);
	v->a[86834] = 22;
	v->a[86835] = sym_file_descriptor;
	v->a[86836] = sym_variable_name;
	v->a[86837] = sym_test_operator;
	v->a[86838] = sym__brace_start;
	v->a[86839] = anon_sym_LPAREN_LPAREN;
	small_parse_table_4342(v);
}

void	small_parse_table_4342(t_small_parse_table_array *v)
{
	v->a[86840] = anon_sym_GT_GT;
	v->a[86841] = anon_sym_AMP_GT_GT;
	v->a[86842] = anon_sym_GT_PIPE;
	v->a[86843] = anon_sym_LT_AMP_DASH;
	v->a[86844] = anon_sym_GT_AMP_DASH;
	v->a[86845] = anon_sym_LT_LT_LT;
	v->a[86846] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86847] = anon_sym_DOLLAR_LBRACK;
	v->a[86848] = sym__special_character;
	v->a[86849] = anon_sym_DQUOTE;
	v->a[86850] = sym_raw_string;
	v->a[86851] = sym_ansi_c_string;
	v->a[86852] = anon_sym_DOLLAR_LBRACE;
	v->a[86853] = anon_sym_BQUOTE;
	v->a[86854] = anon_sym_DOLLAR_BQUOTE;
	v->a[86855] = anon_sym_LT_LPAREN;
	v->a[86856] = anon_sym_GT_LPAREN;
	v->a[86857] = 3;
	v->a[86858] = actions(3);
	v->a[86859] = 1;
	small_parse_table_4343(v);
}

void	small_parse_table_4343(t_small_parse_table_array *v)
{
	v->a[86860] = sym_comment;
	v->a[86861] = actions(1302);
	v->a[86862] = 5;
	v->a[86863] = sym_file_descriptor;
	v->a[86864] = sym__concat;
	v->a[86865] = sym_test_operator;
	v->a[86866] = sym__brace_start;
	v->a[86867] = aux_sym_heredoc_redirect_token1;
	v->a[86868] = actions(1300);
	v->a[86869] = 39;
	v->a[86870] = anon_sym_LPAREN_LPAREN;
	v->a[86871] = anon_sym_SEMI;
	v->a[86872] = anon_sym_PIPE_PIPE;
	v->a[86873] = anon_sym_AMP_AMP;
	v->a[86874] = anon_sym_PIPE;
	v->a[86875] = anon_sym_AMP;
	v->a[86876] = anon_sym_LT;
	v->a[86877] = anon_sym_GT;
	v->a[86878] = anon_sym_LT_LT;
	v->a[86879] = anon_sym_GT_GT;
	small_parse_table_4344(v);
}

void	small_parse_table_4344(t_small_parse_table_array *v)
{
	v->a[86880] = anon_sym_SEMI_SEMI;
	v->a[86881] = anon_sym_SEMI_AMP;
	v->a[86882] = anon_sym_SEMI_SEMI_AMP;
	v->a[86883] = anon_sym_PIPE_AMP;
	v->a[86884] = anon_sym_AMP_GT;
	v->a[86885] = anon_sym_AMP_GT_GT;
	v->a[86886] = anon_sym_LT_AMP;
	v->a[86887] = anon_sym_GT_AMP;
	v->a[86888] = anon_sym_GT_PIPE;
	v->a[86889] = anon_sym_LT_AMP_DASH;
	v->a[86890] = anon_sym_GT_AMP_DASH;
	v->a[86891] = anon_sym_LT_LT_DASH;
	v->a[86892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86893] = anon_sym_DOLLAR_LBRACK;
	v->a[86894] = aux_sym_concatenation_token1;
	v->a[86895] = anon_sym_DOLLAR;
	v->a[86896] = sym__special_character;
	v->a[86897] = anon_sym_DQUOTE;
	v->a[86898] = sym_raw_string;
	v->a[86899] = sym_ansi_c_string;
	small_parse_table_4345(v);
}

/* EOF small_parse_table_868.c */
