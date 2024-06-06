/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1155.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5775(t_small_parse_table_array *v)
{
	v->a[115500] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115501] = actions(3270);
	v->a[115502] = 1;
	v->a[115503] = anon_sym_DQUOTE;
	v->a[115504] = actions(3274);
	v->a[115505] = 1;
	v->a[115506] = aux_sym_number_token1;
	v->a[115507] = actions(3276);
	v->a[115508] = 1;
	v->a[115509] = aux_sym_number_token2;
	v->a[115510] = actions(3278);
	v->a[115511] = 1;
	v->a[115512] = anon_sym_DOLLAR_LBRACE;
	v->a[115513] = actions(3280);
	v->a[115514] = 1;
	v->a[115515] = anon_sym_DOLLAR_LPAREN;
	v->a[115516] = actions(3282);
	v->a[115517] = 1;
	v->a[115518] = anon_sym_BQUOTE;
	v->a[115519] = actions(3284);
	small_parse_table_5776(v);
}

void	small_parse_table_5776(t_small_parse_table_array *v)
{
	v->a[115520] = 1;
	v->a[115521] = anon_sym_DOLLAR_BQUOTE;
	v->a[115522] = actions(3286);
	v->a[115523] = 1;
	v->a[115524] = sym__brace_start;
	v->a[115525] = actions(6763);
	v->a[115526] = 1;
	v->a[115527] = sym_word;
	v->a[115528] = actions(6765);
	v->a[115529] = 1;
	v->a[115530] = anon_sym_DOLLAR;
	v->a[115531] = actions(6767);
	v->a[115532] = 1;
	v->a[115533] = sym__special_character;
	v->a[115534] = actions(6771);
	v->a[115535] = 1;
	v->a[115536] = sym__comment_word;
	v->a[115537] = actions(6769);
	v->a[115538] = 3;
	v->a[115539] = sym_test_operator;
	small_parse_table_5777(v);
}

void	small_parse_table_5777(t_small_parse_table_array *v)
{
	v->a[115540] = sym__bare_dollar;
	v->a[115541] = sym_raw_string;
	v->a[115542] = state(1603);
	v->a[115543] = 7;
	v->a[115544] = sym_arithmetic_expansion;
	v->a[115545] = sym_brace_expression;
	v->a[115546] = sym_string;
	v->a[115547] = sym_number;
	v->a[115548] = sym_simple_expansion;
	v->a[115549] = sym_expansion;
	v->a[115550] = sym_command_substitution;
	v->a[115551] = 16;
	v->a[115552] = actions(3);
	v->a[115553] = 1;
	v->a[115554] = sym_comment;
	v->a[115555] = actions(3264);
	v->a[115556] = 1;
	v->a[115557] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115558] = actions(3270);
	v->a[115559] = 1;
	small_parse_table_5778(v);
}

void	small_parse_table_5778(t_small_parse_table_array *v)
{
	v->a[115560] = anon_sym_DQUOTE;
	v->a[115561] = actions(3274);
	v->a[115562] = 1;
	v->a[115563] = aux_sym_number_token1;
	v->a[115564] = actions(3276);
	v->a[115565] = 1;
	v->a[115566] = aux_sym_number_token2;
	v->a[115567] = actions(3278);
	v->a[115568] = 1;
	v->a[115569] = anon_sym_DOLLAR_LBRACE;
	v->a[115570] = actions(3280);
	v->a[115571] = 1;
	v->a[115572] = anon_sym_DOLLAR_LPAREN;
	v->a[115573] = actions(3282);
	v->a[115574] = 1;
	v->a[115575] = anon_sym_BQUOTE;
	v->a[115576] = actions(3284);
	v->a[115577] = 1;
	v->a[115578] = anon_sym_DOLLAR_BQUOTE;
	v->a[115579] = actions(3286);
	small_parse_table_5779(v);
}

void	small_parse_table_5779(t_small_parse_table_array *v)
{
	v->a[115580] = 1;
	v->a[115581] = sym__brace_start;
	v->a[115582] = actions(6763);
	v->a[115583] = 1;
	v->a[115584] = sym_word;
	v->a[115585] = actions(6767);
	v->a[115586] = 1;
	v->a[115587] = sym__special_character;
	v->a[115588] = actions(6771);
	v->a[115589] = 1;
	v->a[115590] = sym__comment_word;
	v->a[115591] = actions(6773);
	v->a[115592] = 1;
	v->a[115593] = anon_sym_DOLLAR;
	v->a[115594] = actions(6769);
	v->a[115595] = 3;
	v->a[115596] = sym_test_operator;
	v->a[115597] = sym__bare_dollar;
	v->a[115598] = sym_raw_string;
	v->a[115599] = state(1603);
	small_parse_table_5780(v);
}

/* EOF small_parse_table_1155.c */
