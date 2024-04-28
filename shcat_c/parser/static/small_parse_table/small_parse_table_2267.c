/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2267.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11335(t_small_parse_table_array *v)
{
	v->a[226700] = 2;
	v->a[226701] = anon_sym_LT_LPAREN;
	v->a[226702] = anon_sym_GT_LPAREN;
	v->a[226703] = actions(9684);
	v->a[226704] = 3;
	v->a[226705] = sym__bare_dollar;
	v->a[226706] = sym_raw_string;
	v->a[226707] = sym_ansi_c_string;
	v->a[226708] = state(1733);
	v->a[226709] = 9;
	v->a[226710] = sym_arithmetic_expansion;
	v->a[226711] = sym_brace_expression;
	v->a[226712] = sym_string;
	v->a[226713] = sym_translated_string;
	v->a[226714] = sym_number;
	v->a[226715] = sym_simple_expansion;
	v->a[226716] = sym_expansion;
	v->a[226717] = sym_command_substitution;
	v->a[226718] = sym_process_substitution;
	v->a[226719] = 20;
	small_parse_table_11336(v);
}

void	small_parse_table_11336(t_small_parse_table_array *v)
{
	v->a[226720] = actions(71);
	v->a[226721] = 1;
	v->a[226722] = sym_comment;
	v->a[226723] = actions(4080);
	v->a[226724] = 1;
	v->a[226725] = anon_sym_DOLLAR;
	v->a[226726] = actions(4086);
	v->a[226727] = 1;
	v->a[226728] = aux_sym_number_token1;
	v->a[226729] = actions(4088);
	v->a[226730] = 1;
	v->a[226731] = aux_sym_number_token2;
	v->a[226732] = actions(4092);
	v->a[226733] = 1;
	v->a[226734] = anon_sym_DOLLAR_LPAREN;
	v->a[226735] = actions(4102);
	v->a[226736] = 1;
	v->a[226737] = sym__brace_start;
	v->a[226738] = actions(9310);
	v->a[226739] = 1;
	small_parse_table_11337(v);
}

void	small_parse_table_11337(t_small_parse_table_array *v)
{
	v->a[226740] = anon_sym_DOLLAR_LBRACK;
	v->a[226741] = actions(9316);
	v->a[226742] = 1;
	v->a[226743] = anon_sym_DQUOTE;
	v->a[226744] = actions(9320);
	v->a[226745] = 1;
	v->a[226746] = anon_sym_DOLLAR_LBRACE;
	v->a[226747] = actions(9322);
	v->a[226748] = 1;
	v->a[226749] = anon_sym_BQUOTE;
	v->a[226750] = actions(9324);
	v->a[226751] = 1;
	v->a[226752] = anon_sym_DOLLAR_BQUOTE;
	v->a[226753] = actions(10762);
	v->a[226754] = 1;
	v->a[226755] = sym__special_character;
	v->a[226756] = actions(10772);
	v->a[226757] = 1;
	v->a[226758] = sym_word;
	v->a[226759] = actions(10776);
	small_parse_table_11338(v);
}

void	small_parse_table_11338(t_small_parse_table_array *v)
{
	v->a[226760] = 1;
	v->a[226761] = sym_test_operator;
	v->a[226762] = state(4421);
	v->a[226763] = 1;
	v->a[226764] = aux_sym__literal_repeat1;
	v->a[226765] = state(4869);
	v->a[226766] = 1;
	v->a[226767] = sym_concatenation;
	v->a[226768] = actions(9308);
	v->a[226769] = 2;
	v->a[226770] = anon_sym_LPAREN_LPAREN;
	v->a[226771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[226772] = actions(9326);
	v->a[226773] = 2;
	v->a[226774] = anon_sym_LT_LPAREN;
	v->a[226775] = anon_sym_GT_LPAREN;
	v->a[226776] = actions(10774);
	v->a[226777] = 2;
	v->a[226778] = sym_raw_string;
	v->a[226779] = sym_ansi_c_string;
	small_parse_table_11339(v);
}

void	small_parse_table_11339(t_small_parse_table_array *v)
{
	v->a[226780] = state(4699);
	v->a[226781] = 9;
	v->a[226782] = sym_arithmetic_expansion;
	v->a[226783] = sym_brace_expression;
	v->a[226784] = sym_string;
	v->a[226785] = sym_translated_string;
	v->a[226786] = sym_number;
	v->a[226787] = sym_simple_expansion;
	v->a[226788] = sym_expansion;
	v->a[226789] = sym_command_substitution;
	v->a[226790] = sym_process_substitution;
	v->a[226791] = 21;
	v->a[226792] = actions(71);
	v->a[226793] = 1;
	v->a[226794] = sym_comment;
	v->a[226795] = actions(3602);
	v->a[226796] = 1;
	v->a[226797] = sym_variable_name;
	v->a[226798] = actions(9898);
	v->a[226799] = 1;
	small_parse_table_11340(v);
}

/* EOF small_parse_table_2267.c */
