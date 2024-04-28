/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_268.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1340(t_small_parse_table_array *v)
{
	v->a[26800] = anon_sym_DOLLAR;
	v->a[26801] = sym__special_character;
	v->a[26802] = anon_sym_DQUOTE;
	v->a[26803] = sym_raw_string;
	v->a[26804] = sym_ansi_c_string;
	v->a[26805] = aux_sym_number_token1;
	v->a[26806] = aux_sym_number_token2;
	v->a[26807] = anon_sym_DOLLAR_LBRACE;
	v->a[26808] = anon_sym_DOLLAR_LPAREN;
	v->a[26809] = anon_sym_BQUOTE;
	v->a[26810] = anon_sym_DOLLAR_BQUOTE;
	v->a[26811] = anon_sym_LT_LPAREN;
	v->a[26812] = anon_sym_GT_LPAREN;
	v->a[26813] = sym_word;
	v->a[26814] = 22;
	v->a[26815] = actions(71);
	v->a[26816] = 1;
	v->a[26817] = sym_comment;
	v->a[26818] = actions(4290);
	v->a[26819] = 1;
	small_parse_table_1341(v);
}

void	small_parse_table_1341(t_small_parse_table_array *v)
{
	v->a[26820] = sym_word;
	v->a[26821] = actions(4296);
	v->a[26822] = 1;
	v->a[26823] = anon_sym_DOLLAR_LBRACK;
	v->a[26824] = actions(4299);
	v->a[26825] = 1;
	v->a[26826] = anon_sym_DOLLAR;
	v->a[26827] = actions(4302);
	v->a[26828] = 1;
	v->a[26829] = sym__special_character;
	v->a[26830] = actions(4305);
	v->a[26831] = 1;
	v->a[26832] = anon_sym_DQUOTE;
	v->a[26833] = actions(4311);
	v->a[26834] = 1;
	v->a[26835] = aux_sym_number_token1;
	v->a[26836] = actions(4314);
	v->a[26837] = 1;
	v->a[26838] = aux_sym_number_token2;
	v->a[26839] = actions(4317);
	small_parse_table_1342(v);
}

void	small_parse_table_1342(t_small_parse_table_array *v)
{
	v->a[26840] = 1;
	v->a[26841] = anon_sym_DOLLAR_LBRACE;
	v->a[26842] = actions(4320);
	v->a[26843] = 1;
	v->a[26844] = anon_sym_DOLLAR_LPAREN;
	v->a[26845] = actions(4323);
	v->a[26846] = 1;
	v->a[26847] = anon_sym_BQUOTE;
	v->a[26848] = actions(4326);
	v->a[26849] = 1;
	v->a[26850] = anon_sym_DOLLAR_BQUOTE;
	v->a[26851] = actions(4332);
	v->a[26852] = 1;
	v->a[26853] = sym_test_operator;
	v->a[26854] = actions(4335);
	v->a[26855] = 1;
	v->a[26856] = sym__brace_start;
	v->a[26857] = state(2457);
	v->a[26858] = 1;
	v->a[26859] = aux_sym__literal_repeat1;
	small_parse_table_1343(v);
}

void	small_parse_table_1343(t_small_parse_table_array *v)
{
	v->a[26860] = actions(4293);
	v->a[26861] = 2;
	v->a[26862] = anon_sym_LPAREN_LPAREN;
	v->a[26863] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26864] = actions(4308);
	v->a[26865] = 2;
	v->a[26866] = sym_raw_string;
	v->a[26867] = sym_ansi_c_string;
	v->a[26868] = actions(4329);
	v->a[26869] = 2;
	v->a[26870] = anon_sym_LT_LPAREN;
	v->a[26871] = anon_sym_GT_LPAREN;
	v->a[26872] = state(817);
	v->a[26873] = 2;
	v->a[26874] = sym_concatenation;
	v->a[26875] = aux_sym_for_statement_repeat1;
	v->a[26876] = actions(2214);
	v->a[26877] = 7;
	v->a[26878] = anon_sym_PIPE;
	v->a[26879] = anon_sym_LT;
	small_parse_table_1344(v);
}

void	small_parse_table_1344(t_small_parse_table_array *v)
{
	v->a[26880] = anon_sym_GT;
	v->a[26881] = anon_sym_LT_LT;
	v->a[26882] = anon_sym_AMP_GT;
	v->a[26883] = anon_sym_LT_AMP;
	v->a[26884] = anon_sym_GT_AMP;
	v->a[26885] = state(2271);
	v->a[26886] = 9;
	v->a[26887] = sym_arithmetic_expansion;
	v->a[26888] = sym_brace_expression;
	v->a[26889] = sym_string;
	v->a[26890] = sym_translated_string;
	v->a[26891] = sym_number;
	v->a[26892] = sym_simple_expansion;
	v->a[26893] = sym_expansion;
	v->a[26894] = sym_command_substitution;
	v->a[26895] = sym_process_substitution;
	v->a[26896] = actions(2216);
	v->a[26897] = 13;
	v->a[26898] = sym_file_descriptor;
	v->a[26899] = sym_variable_name;
	small_parse_table_1345(v);
}

/* EOF small_parse_table_268.c */
