/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2307.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11535(t_small_parse_table_array *v)
{
	v->a[230700] = actions(3209);
	v->a[230701] = 1;
	v->a[230702] = sym__brace_start;
	v->a[230703] = actions(9674);
	v->a[230704] = 1;
	v->a[230705] = sym_word;
	v->a[230706] = actions(9678);
	v->a[230707] = 1;
	v->a[230708] = anon_sym_DOLLAR_LBRACK;
	v->a[230709] = actions(9682);
	v->a[230710] = 1;
	v->a[230711] = anon_sym_DQUOTE;
	v->a[230712] = actions(9686);
	v->a[230713] = 1;
	v->a[230714] = anon_sym_DOLLAR_LBRACE;
	v->a[230715] = actions(9688);
	v->a[230716] = 1;
	v->a[230717] = anon_sym_BQUOTE;
	v->a[230718] = actions(9690);
	v->a[230719] = 1;
	small_parse_table_11536(v);
}

void	small_parse_table_11536(t_small_parse_table_array *v)
{
	v->a[230720] = anon_sym_DOLLAR_BQUOTE;
	v->a[230721] = actions(9694);
	v->a[230722] = 1;
	v->a[230723] = sym__comment_word;
	v->a[230724] = actions(10910);
	v->a[230725] = 1;
	v->a[230726] = anon_sym_DOLLAR;
	v->a[230727] = actions(9676);
	v->a[230728] = 2;
	v->a[230729] = anon_sym_LPAREN_LPAREN;
	v->a[230730] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[230731] = actions(9680);
	v->a[230732] = 2;
	v->a[230733] = sym_test_operator;
	v->a[230734] = sym__special_character;
	v->a[230735] = actions(9692);
	v->a[230736] = 2;
	v->a[230737] = anon_sym_LT_LPAREN;
	v->a[230738] = anon_sym_GT_LPAREN;
	v->a[230739] = actions(9684);
	small_parse_table_11537(v);
}

void	small_parse_table_11537(t_small_parse_table_array *v)
{
	v->a[230740] = 3;
	v->a[230741] = sym__bare_dollar;
	v->a[230742] = sym_raw_string;
	v->a[230743] = sym_ansi_c_string;
	v->a[230744] = state(1733);
	v->a[230745] = 9;
	v->a[230746] = sym_arithmetic_expansion;
	v->a[230747] = sym_brace_expression;
	v->a[230748] = sym_string;
	v->a[230749] = sym_translated_string;
	v->a[230750] = sym_number;
	v->a[230751] = sym_simple_expansion;
	v->a[230752] = sym_expansion;
	v->a[230753] = sym_command_substitution;
	v->a[230754] = sym_process_substitution;
	v->a[230755] = 18;
	v->a[230756] = actions(3);
	v->a[230757] = 1;
	v->a[230758] = sym_comment;
	v->a[230759] = actions(5876);
	small_parse_table_11538(v);
}

void	small_parse_table_11538(t_small_parse_table_array *v)
{
	v->a[230760] = 1;
	v->a[230761] = aux_sym_number_token1;
	v->a[230762] = actions(5878);
	v->a[230763] = 1;
	v->a[230764] = aux_sym_number_token2;
	v->a[230765] = actions(5882);
	v->a[230766] = 1;
	v->a[230767] = anon_sym_DOLLAR_LPAREN;
	v->a[230768] = actions(5892);
	v->a[230769] = 1;
	v->a[230770] = sym__brace_start;
	v->a[230771] = actions(9546);
	v->a[230772] = 1;
	v->a[230773] = anon_sym_DOLLAR_LBRACK;
	v->a[230774] = actions(9550);
	v->a[230775] = 1;
	v->a[230776] = anon_sym_DQUOTE;
	v->a[230777] = actions(9554);
	v->a[230778] = 1;
	v->a[230779] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11539(v);
}

void	small_parse_table_11539(t_small_parse_table_array *v)
{
	v->a[230780] = actions(9556);
	v->a[230781] = 1;
	v->a[230782] = anon_sym_BQUOTE;
	v->a[230783] = actions(9558);
	v->a[230784] = 1;
	v->a[230785] = anon_sym_DOLLAR_BQUOTE;
	v->a[230786] = actions(10300);
	v->a[230787] = 1;
	v->a[230788] = sym_word;
	v->a[230789] = actions(10306);
	v->a[230790] = 1;
	v->a[230791] = sym__comment_word;
	v->a[230792] = actions(10912);
	v->a[230793] = 1;
	v->a[230794] = anon_sym_DOLLAR;
	v->a[230795] = actions(9544);
	v->a[230796] = 2;
	v->a[230797] = anon_sym_LPAREN_LPAREN;
	v->a[230798] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[230799] = actions(9560);
	small_parse_table_11540(v);
}

/* EOF small_parse_table_2307.c */
