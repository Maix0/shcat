/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2087.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10435(t_small_parse_table_array *v)
{
	v->a[208700] = sym_arithmetic_expansion;
	v->a[208701] = sym_brace_expression;
	v->a[208702] = sym_string;
	v->a[208703] = sym_translated_string;
	v->a[208704] = sym_number;
	v->a[208705] = sym_simple_expansion;
	v->a[208706] = sym_expansion;
	v->a[208707] = sym_command_substitution;
	v->a[208708] = sym_process_substitution;
	v->a[208709] = 20;
	v->a[208710] = actions(71);
	v->a[208711] = 1;
	v->a[208712] = sym_comment;
	v->a[208713] = actions(3367);
	v->a[208714] = 1;
	v->a[208715] = anon_sym_DOLLAR;
	v->a[208716] = actions(3373);
	v->a[208717] = 1;
	v->a[208718] = aux_sym_number_token1;
	v->a[208719] = actions(3375);
	small_parse_table_10436(v);
}

void	small_parse_table_10436(t_small_parse_table_array *v)
{
	v->a[208720] = 1;
	v->a[208721] = aux_sym_number_token2;
	v->a[208722] = actions(3379);
	v->a[208723] = 1;
	v->a[208724] = anon_sym_DOLLAR_LPAREN;
	v->a[208725] = actions(3389);
	v->a[208726] = 1;
	v->a[208727] = sym__brace_start;
	v->a[208728] = actions(9802);
	v->a[208729] = 1;
	v->a[208730] = anon_sym_DOLLAR_LBRACK;
	v->a[208731] = actions(9804);
	v->a[208732] = 1;
	v->a[208733] = sym__special_character;
	v->a[208734] = actions(9806);
	v->a[208735] = 1;
	v->a[208736] = anon_sym_DQUOTE;
	v->a[208737] = actions(9810);
	v->a[208738] = 1;
	v->a[208739] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10437(v);
}

void	small_parse_table_10437(t_small_parse_table_array *v)
{
	v->a[208740] = actions(9812);
	v->a[208741] = 1;
	v->a[208742] = anon_sym_BQUOTE;
	v->a[208743] = actions(9814);
	v->a[208744] = 1;
	v->a[208745] = anon_sym_DOLLAR_BQUOTE;
	v->a[208746] = actions(9830);
	v->a[208747] = 1;
	v->a[208748] = sym_word;
	v->a[208749] = actions(9834);
	v->a[208750] = 1;
	v->a[208751] = sym_test_operator;
	v->a[208752] = state(4462);
	v->a[208753] = 1;
	v->a[208754] = aux_sym__literal_repeat1;
	v->a[208755] = state(4888);
	v->a[208756] = 1;
	v->a[208757] = sym_concatenation;
	v->a[208758] = actions(9800);
	v->a[208759] = 2;
	small_parse_table_10438(v);
}

void	small_parse_table_10438(t_small_parse_table_array *v)
{
	v->a[208760] = anon_sym_LPAREN_LPAREN;
	v->a[208761] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[208762] = actions(9816);
	v->a[208763] = 2;
	v->a[208764] = anon_sym_LT_LPAREN;
	v->a[208765] = anon_sym_GT_LPAREN;
	v->a[208766] = actions(9832);
	v->a[208767] = 2;
	v->a[208768] = sym_raw_string;
	v->a[208769] = sym_ansi_c_string;
	v->a[208770] = state(4270);
	v->a[208771] = 9;
	v->a[208772] = sym_arithmetic_expansion;
	v->a[208773] = sym_brace_expression;
	v->a[208774] = sym_string;
	v->a[208775] = sym_translated_string;
	v->a[208776] = sym_number;
	v->a[208777] = sym_simple_expansion;
	v->a[208778] = sym_expansion;
	v->a[208779] = sym_command_substitution;
	small_parse_table_10439(v);
}

void	small_parse_table_10439(t_small_parse_table_array *v)
{
	v->a[208780] = sym_process_substitution;
	v->a[208781] = 21;
	v->a[208782] = actions(71);
	v->a[208783] = 1;
	v->a[208784] = sym_comment;
	v->a[208785] = actions(9364);
	v->a[208786] = 1;
	v->a[208787] = anon_sym_LPAREN;
	v->a[208788] = actions(9366);
	v->a[208789] = 1;
	v->a[208790] = anon_sym_BANG;
	v->a[208791] = actions(9372);
	v->a[208792] = 1;
	v->a[208793] = anon_sym_TILDE;
	v->a[208794] = actions(9374);
	v->a[208795] = 1;
	v->a[208796] = anon_sym_DOLLAR;
	v->a[208797] = actions(9376);
	v->a[208798] = 1;
	v->a[208799] = anon_sym_DQUOTE;
	small_parse_table_10440(v);
}

/* EOF small_parse_table_2087.c */
