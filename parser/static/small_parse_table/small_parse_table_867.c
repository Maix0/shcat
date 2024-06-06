/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_867.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4335(t_small_parse_table_array *v)
{
	v->a[86700] = actions(4608);
	v->a[86701] = 1;
	v->a[86702] = anon_sym_DOLLAR_BQUOTE;
	v->a[86703] = actions(4821);
	v->a[86704] = 1;
	v->a[86705] = aux_sym__simple_variable_name_token1;
	v->a[86706] = actions(4823);
	v->a[86707] = 1;
	v->a[86708] = sym_variable_name;
	v->a[86709] = state(1476);
	v->a[86710] = 1;
	v->a[86711] = sym__arithmetic_postfix_expression;
	v->a[86712] = state(1478);
	v->a[86713] = 1;
	v->a[86714] = sym__arithmetic_unary_expression;
	v->a[86715] = state(1490);
	v->a[86716] = 1;
	v->a[86717] = sym__arithmetic_ternary_expression;
	v->a[86718] = state(1511);
	v->a[86719] = 1;
	small_parse_table_4336(v);
}

void	small_parse_table_4336(t_small_parse_table_array *v)
{
	v->a[86720] = sym__arithmetic_binary_expression;
	v->a[86721] = actions(4588);
	v->a[86722] = 2;
	v->a[86723] = anon_sym_PLUS_PLUS;
	v->a[86724] = anon_sym_DASH_DASH;
	v->a[86725] = actions(4590);
	v->a[86726] = 2;
	v->a[86727] = anon_sym_DASH2;
	v->a[86728] = anon_sym_PLUS2;
	v->a[86729] = state(1507);
	v->a[86730] = 8;
	v->a[86731] = sym__arithmetic_expression;
	v->a[86732] = sym__arithmetic_literal;
	v->a[86733] = sym__arithmetic_parenthesized_expression;
	v->a[86734] = sym_string;
	v->a[86735] = sym_number;
	v->a[86736] = sym_simple_expansion;
	v->a[86737] = sym_expansion;
	v->a[86738] = sym_command_substitution;
	v->a[86739] = 21;
	small_parse_table_4337(v);
}

void	small_parse_table_4337(t_small_parse_table_array *v)
{
	v->a[86740] = actions(57);
	v->a[86741] = 1;
	v->a[86742] = sym_comment;
	v->a[86743] = actions(4328);
	v->a[86744] = 1;
	v->a[86745] = sym_word;
	v->a[86746] = actions(4340);
	v->a[86747] = 1;
	v->a[86748] = anon_sym_DOLLAR;
	v->a[86749] = actions(4346);
	v->a[86750] = 1;
	v->a[86751] = aux_sym_number_token1;
	v->a[86752] = actions(4348);
	v->a[86753] = 1;
	v->a[86754] = aux_sym_number_token2;
	v->a[86755] = actions(4352);
	v->a[86756] = 1;
	v->a[86757] = anon_sym_DOLLAR_LPAREN;
	v->a[86758] = actions(4360);
	v->a[86759] = 1;
	small_parse_table_4338(v);
}

void	small_parse_table_4338(t_small_parse_table_array *v)
{
	v->a[86760] = sym_extglob_pattern;
	v->a[86761] = actions(4362);
	v->a[86762] = 1;
	v->a[86763] = sym__brace_start;
	v->a[86764] = actions(4548);
	v->a[86765] = 1;
	v->a[86766] = anon_sym_LPAREN;
	v->a[86767] = actions(4550);
	v->a[86768] = 1;
	v->a[86769] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86770] = actions(4552);
	v->a[86771] = 1;
	v->a[86772] = sym__special_character;
	v->a[86773] = actions(4554);
	v->a[86774] = 1;
	v->a[86775] = anon_sym_DQUOTE;
	v->a[86776] = actions(4556);
	v->a[86777] = 1;
	v->a[86778] = anon_sym_DOLLAR_LBRACE;
	v->a[86779] = actions(4558);
	small_parse_table_4339(v);
}

void	small_parse_table_4339(t_small_parse_table_array *v)
{
	v->a[86780] = 1;
	v->a[86781] = anon_sym_BQUOTE;
	v->a[86782] = actions(4560);
	v->a[86783] = 1;
	v->a[86784] = anon_sym_DOLLAR_BQUOTE;
	v->a[86785] = state(3393);
	v->a[86786] = 1;
	v->a[86787] = aux_sym__literal_repeat1;
	v->a[86788] = state(3947);
	v->a[86789] = 1;
	v->a[86790] = sym_last_case_item;
	v->a[86791] = actions(4358);
	v->a[86792] = 2;
	v->a[86793] = sym_test_operator;
	v->a[86794] = sym_raw_string;
	v->a[86795] = state(1881);
	v->a[86796] = 2;
	v->a[86797] = sym_case_item;
	v->a[86798] = aux_sym_case_statement_repeat1;
	v->a[86799] = state(3472);
	small_parse_table_4340(v);
}

/* EOF small_parse_table_867.c */
