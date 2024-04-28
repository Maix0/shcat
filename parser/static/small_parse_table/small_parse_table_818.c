/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_818.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4090(t_small_parse_table_array *v)
{
	v->a[81800] = anon_sym_LT_LT;
	v->a[81801] = anon_sym_GT_GT;
	v->a[81802] = anon_sym_SEMI_SEMI;
	v->a[81803] = anon_sym_SEMI_AMP;
	v->a[81804] = anon_sym_SEMI_SEMI_AMP;
	v->a[81805] = anon_sym_PIPE_AMP;
	v->a[81806] = anon_sym_AMP_GT;
	v->a[81807] = anon_sym_AMP_GT_GT;
	v->a[81808] = anon_sym_LT_AMP;
	v->a[81809] = anon_sym_GT_AMP;
	v->a[81810] = anon_sym_GT_PIPE;
	v->a[81811] = anon_sym_LT_AMP_DASH;
	v->a[81812] = anon_sym_GT_AMP_DASH;
	v->a[81813] = anon_sym_LT_LT_DASH;
	v->a[81814] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81815] = anon_sym_DOLLAR_LBRACK;
	v->a[81816] = anon_sym_DOLLAR;
	v->a[81817] = anon_sym_DQUOTE;
	v->a[81818] = sym_raw_string;
	v->a[81819] = sym_ansi_c_string;
	small_parse_table_4091(v);
}

void	small_parse_table_4091(t_small_parse_table_array *v)
{
	v->a[81820] = aux_sym_number_token1;
	v->a[81821] = aux_sym_number_token2;
	v->a[81822] = anon_sym_DOLLAR_LBRACE;
	v->a[81823] = anon_sym_DOLLAR_LPAREN;
	v->a[81824] = anon_sym_BQUOTE;
	v->a[81825] = anon_sym_DOLLAR_BQUOTE;
	v->a[81826] = anon_sym_LT_LPAREN;
	v->a[81827] = anon_sym_GT_LPAREN;
	v->a[81828] = aux_sym__simple_variable_name_token1;
	v->a[81829] = sym_word;
	v->a[81830] = 6;
	v->a[81831] = actions(3);
	v->a[81832] = 1;
	v->a[81833] = sym_comment;
	v->a[81834] = actions(4699);
	v->a[81835] = 1;
	v->a[81836] = aux_sym_concatenation_token1;
	v->a[81837] = actions(5955);
	v->a[81838] = 1;
	v->a[81839] = sym__concat;
	small_parse_table_4092(v);
}

void	small_parse_table_4092(t_small_parse_table_array *v)
{
	v->a[81840] = state(965);
	v->a[81841] = 1;
	v->a[81842] = aux_sym_concatenation_repeat1;
	v->a[81843] = actions(1288);
	v->a[81844] = 5;
	v->a[81845] = sym_file_descriptor;
	v->a[81846] = sym_test_operator;
	v->a[81847] = sym__bare_dollar;
	v->a[81848] = sym__brace_start;
	v->a[81849] = aux_sym_heredoc_redirect_token1;
	v->a[81850] = actions(1286);
	v->a[81851] = 37;
	v->a[81852] = anon_sym_LPAREN_LPAREN;
	v->a[81853] = anon_sym_PIPE_PIPE;
	v->a[81854] = anon_sym_AMP_AMP;
	v->a[81855] = anon_sym_PIPE;
	v->a[81856] = anon_sym_EQ_EQ;
	v->a[81857] = anon_sym_LT;
	v->a[81858] = anon_sym_GT;
	v->a[81859] = anon_sym_LT_LT;
	small_parse_table_4093(v);
}

void	small_parse_table_4093(t_small_parse_table_array *v)
{
	v->a[81860] = anon_sym_GT_GT;
	v->a[81861] = anon_sym_LPAREN;
	v->a[81862] = anon_sym_PIPE_AMP;
	v->a[81863] = anon_sym_EQ_TILDE;
	v->a[81864] = anon_sym_AMP_GT;
	v->a[81865] = anon_sym_AMP_GT_GT;
	v->a[81866] = anon_sym_LT_AMP;
	v->a[81867] = anon_sym_GT_AMP;
	v->a[81868] = anon_sym_GT_PIPE;
	v->a[81869] = anon_sym_LT_AMP_DASH;
	v->a[81870] = anon_sym_GT_AMP_DASH;
	v->a[81871] = anon_sym_LT_LT_DASH;
	v->a[81872] = anon_sym_LT_LT_LT;
	v->a[81873] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81874] = anon_sym_DOLLAR_LBRACK;
	v->a[81875] = anon_sym_DOLLAR;
	v->a[81876] = sym__special_character;
	v->a[81877] = anon_sym_DQUOTE;
	v->a[81878] = sym_raw_string;
	v->a[81879] = sym_ansi_c_string;
	small_parse_table_4094(v);
}

void	small_parse_table_4094(t_small_parse_table_array *v)
{
	v->a[81880] = aux_sym_number_token1;
	v->a[81881] = aux_sym_number_token2;
	v->a[81882] = anon_sym_DOLLAR_LBRACE;
	v->a[81883] = anon_sym_DOLLAR_LPAREN;
	v->a[81884] = anon_sym_BQUOTE;
	v->a[81885] = anon_sym_DOLLAR_BQUOTE;
	v->a[81886] = anon_sym_LT_LPAREN;
	v->a[81887] = anon_sym_GT_LPAREN;
	v->a[81888] = sym_word;
	v->a[81889] = 6;
	v->a[81890] = actions(3);
	v->a[81891] = 1;
	v->a[81892] = sym_comment;
	v->a[81893] = actions(5957);
	v->a[81894] = 1;
	v->a[81895] = aux_sym_concatenation_token1;
	v->a[81896] = actions(5960);
	v->a[81897] = 1;
	v->a[81898] = sym__concat;
	v->a[81899] = state(1722);
	small_parse_table_4095(v);
}

/* EOF small_parse_table_818.c */
