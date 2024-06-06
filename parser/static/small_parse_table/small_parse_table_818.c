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
	v->a[81800] = 1;
	v->a[81801] = aux_sym_number_token1;
	v->a[81802] = actions(4348);
	v->a[81803] = 1;
	v->a[81804] = aux_sym_number_token2;
	v->a[81805] = actions(4352);
	v->a[81806] = 1;
	v->a[81807] = anon_sym_DOLLAR_LPAREN;
	v->a[81808] = actions(4360);
	v->a[81809] = 1;
	v->a[81810] = sym_extglob_pattern;
	v->a[81811] = actions(4362);
	v->a[81812] = 1;
	v->a[81813] = sym__brace_start;
	v->a[81814] = actions(4364);
	v->a[81815] = 1;
	v->a[81816] = anon_sym_esac;
	v->a[81817] = actions(4548);
	v->a[81818] = 1;
	v->a[81819] = anon_sym_LPAREN;
	small_parse_table_4091(v);
}

void	small_parse_table_4091(t_small_parse_table_array *v)
{
	v->a[81820] = actions(4550);
	v->a[81821] = 1;
	v->a[81822] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81823] = actions(4552);
	v->a[81824] = 1;
	v->a[81825] = sym__special_character;
	v->a[81826] = actions(4554);
	v->a[81827] = 1;
	v->a[81828] = anon_sym_DQUOTE;
	v->a[81829] = actions(4556);
	v->a[81830] = 1;
	v->a[81831] = anon_sym_DOLLAR_LBRACE;
	v->a[81832] = actions(4558);
	v->a[81833] = 1;
	v->a[81834] = anon_sym_BQUOTE;
	v->a[81835] = actions(4560);
	v->a[81836] = 1;
	v->a[81837] = anon_sym_DOLLAR_BQUOTE;
	v->a[81838] = state(3393);
	v->a[81839] = 1;
	small_parse_table_4092(v);
}

void	small_parse_table_4092(t_small_parse_table_array *v)
{
	v->a[81840] = aux_sym__literal_repeat1;
	v->a[81841] = state(3867);
	v->a[81842] = 1;
	v->a[81843] = sym_last_case_item;
	v->a[81844] = actions(4358);
	v->a[81845] = 2;
	v->a[81846] = sym_test_operator;
	v->a[81847] = sym_raw_string;
	v->a[81848] = state(1747);
	v->a[81849] = 2;
	v->a[81850] = sym_case_item;
	v->a[81851] = aux_sym_case_statement_repeat1;
	v->a[81852] = state(3472);
	v->a[81853] = 2;
	v->a[81854] = sym_concatenation;
	v->a[81855] = sym__extglob_blob;
	v->a[81856] = state(3295);
	v->a[81857] = 7;
	v->a[81858] = sym_arithmetic_expansion;
	v->a[81859] = sym_brace_expression;
	small_parse_table_4093(v);
}

void	small_parse_table_4093(t_small_parse_table_array *v)
{
	v->a[81860] = sym_string;
	v->a[81861] = sym_number;
	v->a[81862] = sym_simple_expansion;
	v->a[81863] = sym_expansion;
	v->a[81864] = sym_command_substitution;
	v->a[81865] = 3;
	v->a[81866] = actions(3);
	v->a[81867] = 1;
	v->a[81868] = sym_comment;
	v->a[81869] = actions(3125);
	v->a[81870] = 5;
	v->a[81871] = sym_file_descriptor;
	v->a[81872] = sym__concat;
	v->a[81873] = sym_test_operator;
	v->a[81874] = sym__brace_start;
	v->a[81875] = aux_sym_heredoc_redirect_token1;
	v->a[81876] = actions(3123);
	v->a[81877] = 25;
	v->a[81878] = anon_sym_AMP_AMP;
	v->a[81879] = anon_sym_PIPE_PIPE;
	small_parse_table_4094(v);
}

void	small_parse_table_4094(t_small_parse_table_array *v)
{
	v->a[81880] = anon_sym_LT;
	v->a[81881] = anon_sym_GT;
	v->a[81882] = anon_sym_GT_GT;
	v->a[81883] = anon_sym_AMP_GT;
	v->a[81884] = anon_sym_AMP_GT_GT;
	v->a[81885] = anon_sym_LT_AMP;
	v->a[81886] = anon_sym_GT_AMP;
	v->a[81887] = anon_sym_GT_PIPE;
	v->a[81888] = anon_sym_LT_AMP_DASH;
	v->a[81889] = anon_sym_GT_AMP_DASH;
	v->a[81890] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81891] = aux_sym_concatenation_token1;
	v->a[81892] = anon_sym_DOLLAR;
	v->a[81893] = sym__special_character;
	v->a[81894] = anon_sym_DQUOTE;
	v->a[81895] = sym_raw_string;
	v->a[81896] = aux_sym_number_token1;
	v->a[81897] = aux_sym_number_token2;
	v->a[81898] = anon_sym_DOLLAR_LBRACE;
	v->a[81899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4095(v);
}

/* EOF small_parse_table_818.c */
