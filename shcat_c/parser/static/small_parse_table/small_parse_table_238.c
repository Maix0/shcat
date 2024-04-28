/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_238.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1190(t_small_parse_table_array *v)
{
	v->a[23800] = anon_sym_DOLLAR;
	v->a[23801] = actions(4082);
	v->a[23802] = 1;
	v->a[23803] = sym__special_character;
	v->a[23804] = actions(4084);
	v->a[23805] = 1;
	v->a[23806] = anon_sym_DQUOTE;
	v->a[23807] = actions(4086);
	v->a[23808] = 1;
	v->a[23809] = aux_sym_number_token1;
	v->a[23810] = actions(4088);
	v->a[23811] = 1;
	v->a[23812] = aux_sym_number_token2;
	v->a[23813] = actions(4090);
	v->a[23814] = 1;
	v->a[23815] = anon_sym_DOLLAR_LBRACE;
	v->a[23816] = actions(4092);
	v->a[23817] = 1;
	v->a[23818] = anon_sym_DOLLAR_LPAREN;
	v->a[23819] = actions(4094);
	small_parse_table_1191(v);
}

void	small_parse_table_1191(t_small_parse_table_array *v)
{
	v->a[23820] = 1;
	v->a[23821] = anon_sym_BQUOTE;
	v->a[23822] = actions(4096);
	v->a[23823] = 1;
	v->a[23824] = anon_sym_DOLLAR_BQUOTE;
	v->a[23825] = actions(4100);
	v->a[23826] = 1;
	v->a[23827] = sym_test_operator;
	v->a[23828] = actions(4102);
	v->a[23829] = 1;
	v->a[23830] = sym__brace_start;
	v->a[23831] = state(4521);
	v->a[23832] = 1;
	v->a[23833] = aux_sym__literal_repeat1;
	v->a[23834] = state(5023);
	v->a[23835] = 1;
	v->a[23836] = sym_concatenation;
	v->a[23837] = actions(2496);
	v->a[23838] = 2;
	v->a[23839] = sym_file_descriptor;
	small_parse_table_1192(v);
}

void	small_parse_table_1192(t_small_parse_table_array *v)
{
	v->a[23840] = aux_sym_heredoc_redirect_token1;
	v->a[23841] = actions(4076);
	v->a[23842] = 2;
	v->a[23843] = anon_sym_LPAREN_LPAREN;
	v->a[23844] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23845] = actions(4098);
	v->a[23846] = 2;
	v->a[23847] = anon_sym_LT_LPAREN;
	v->a[23848] = anon_sym_GT_LPAREN;
	v->a[23849] = actions(4074);
	v->a[23850] = 3;
	v->a[23851] = sym_raw_string;
	v->a[23852] = sym_ansi_c_string;
	v->a[23853] = sym_word;
	v->a[23854] = state(4828);
	v->a[23855] = 9;
	v->a[23856] = sym_arithmetic_expansion;
	v->a[23857] = sym_brace_expression;
	v->a[23858] = sym_string;
	v->a[23859] = sym_translated_string;
	small_parse_table_1193(v);
}

void	small_parse_table_1193(t_small_parse_table_array *v)
{
	v->a[23860] = sym_number;
	v->a[23861] = sym_simple_expansion;
	v->a[23862] = sym_expansion;
	v->a[23863] = sym_command_substitution;
	v->a[23864] = sym_process_substitution;
	v->a[23865] = actions(2494);
	v->a[23866] = 20;
	v->a[23867] = anon_sym_SEMI;
	v->a[23868] = anon_sym_PIPE_PIPE;
	v->a[23869] = anon_sym_AMP_AMP;
	v->a[23870] = anon_sym_PIPE;
	v->a[23871] = anon_sym_AMP;
	v->a[23872] = anon_sym_LT;
	v->a[23873] = anon_sym_GT;
	v->a[23874] = anon_sym_LT_LT;
	v->a[23875] = anon_sym_GT_GT;
	v->a[23876] = anon_sym_RPAREN;
	v->a[23877] = anon_sym_SEMI_SEMI;
	v->a[23878] = anon_sym_PIPE_AMP;
	v->a[23879] = anon_sym_AMP_GT;
	small_parse_table_1194(v);
}

void	small_parse_table_1194(t_small_parse_table_array *v)
{
	v->a[23880] = anon_sym_AMP_GT_GT;
	v->a[23881] = anon_sym_LT_AMP;
	v->a[23882] = anon_sym_GT_AMP;
	v->a[23883] = anon_sym_GT_PIPE;
	v->a[23884] = anon_sym_LT_AMP_DASH;
	v->a[23885] = anon_sym_GT_AMP_DASH;
	v->a[23886] = anon_sym_LT_LT_DASH;
	v->a[23887] = 3;
	v->a[23888] = actions(71);
	v->a[23889] = 1;
	v->a[23890] = sym_comment;
	v->a[23891] = actions(809);
	v->a[23892] = 24;
	v->a[23893] = sym_file_descriptor;
	v->a[23894] = sym_variable_name;
	v->a[23895] = sym_test_operator;
	v->a[23896] = sym__brace_start;
	v->a[23897] = anon_sym_LPAREN_LPAREN;
	v->a[23898] = anon_sym_GT_GT;
	v->a[23899] = anon_sym_LBRACE;
	small_parse_table_1195(v);
}

/* EOF small_parse_table_238.c */
