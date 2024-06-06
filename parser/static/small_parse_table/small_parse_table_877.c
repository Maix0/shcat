/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_877.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4385(t_small_parse_table_array *v)
{
	v->a[87700] = sym_comment;
	v->a[87701] = actions(4584);
	v->a[87702] = 1;
	v->a[87703] = anon_sym_LPAREN;
	v->a[87704] = actions(4586);
	v->a[87705] = 1;
	v->a[87706] = anon_sym_BANG;
	v->a[87707] = actions(4592);
	v->a[87708] = 1;
	v->a[87709] = anon_sym_TILDE;
	v->a[87710] = actions(4594);
	v->a[87711] = 1;
	v->a[87712] = anon_sym_DOLLAR;
	v->a[87713] = actions(4596);
	v->a[87714] = 1;
	v->a[87715] = anon_sym_DQUOTE;
	v->a[87716] = actions(4598);
	v->a[87717] = 1;
	v->a[87718] = aux_sym_number_token1;
	v->a[87719] = actions(4600);
	small_parse_table_4386(v);
}

void	small_parse_table_4386(t_small_parse_table_array *v)
{
	v->a[87720] = 1;
	v->a[87721] = aux_sym_number_token2;
	v->a[87722] = actions(4602);
	v->a[87723] = 1;
	v->a[87724] = anon_sym_DOLLAR_LBRACE;
	v->a[87725] = actions(4604);
	v->a[87726] = 1;
	v->a[87727] = anon_sym_DOLLAR_LPAREN;
	v->a[87728] = actions(4606);
	v->a[87729] = 1;
	v->a[87730] = anon_sym_BQUOTE;
	v->a[87731] = actions(4608);
	v->a[87732] = 1;
	v->a[87733] = anon_sym_DOLLAR_BQUOTE;
	v->a[87734] = actions(4865);
	v->a[87735] = 1;
	v->a[87736] = aux_sym__simple_variable_name_token1;
	v->a[87737] = actions(4867);
	v->a[87738] = 1;
	v->a[87739] = sym_variable_name;
	small_parse_table_4387(v);
}

void	small_parse_table_4387(t_small_parse_table_array *v)
{
	v->a[87740] = state(1476);
	v->a[87741] = 1;
	v->a[87742] = sym__arithmetic_postfix_expression;
	v->a[87743] = state(1478);
	v->a[87744] = 1;
	v->a[87745] = sym__arithmetic_unary_expression;
	v->a[87746] = state(1490);
	v->a[87747] = 1;
	v->a[87748] = sym__arithmetic_ternary_expression;
	v->a[87749] = state(1511);
	v->a[87750] = 1;
	v->a[87751] = sym__arithmetic_binary_expression;
	v->a[87752] = actions(4588);
	v->a[87753] = 2;
	v->a[87754] = anon_sym_PLUS_PLUS;
	v->a[87755] = anon_sym_DASH_DASH;
	v->a[87756] = actions(4590);
	v->a[87757] = 2;
	v->a[87758] = anon_sym_DASH2;
	v->a[87759] = anon_sym_PLUS2;
	small_parse_table_4388(v);
}

void	small_parse_table_4388(t_small_parse_table_array *v)
{
	v->a[87760] = state(1516);
	v->a[87761] = 8;
	v->a[87762] = sym__arithmetic_expression;
	v->a[87763] = sym__arithmetic_literal;
	v->a[87764] = sym__arithmetic_parenthesized_expression;
	v->a[87765] = sym_string;
	v->a[87766] = sym_number;
	v->a[87767] = sym_simple_expansion;
	v->a[87768] = sym_expansion;
	v->a[87769] = sym_command_substitution;
	v->a[87770] = 21;
	v->a[87771] = actions(57);
	v->a[87772] = 1;
	v->a[87773] = sym_comment;
	v->a[87774] = actions(4328);
	v->a[87775] = 1;
	v->a[87776] = sym_word;
	v->a[87777] = actions(4340);
	v->a[87778] = 1;
	v->a[87779] = anon_sym_DOLLAR;
	small_parse_table_4389(v);
}

void	small_parse_table_4389(t_small_parse_table_array *v)
{
	v->a[87780] = actions(4346);
	v->a[87781] = 1;
	v->a[87782] = aux_sym_number_token1;
	v->a[87783] = actions(4348);
	v->a[87784] = 1;
	v->a[87785] = aux_sym_number_token2;
	v->a[87786] = actions(4352);
	v->a[87787] = 1;
	v->a[87788] = anon_sym_DOLLAR_LPAREN;
	v->a[87789] = actions(4360);
	v->a[87790] = 1;
	v->a[87791] = sym_extglob_pattern;
	v->a[87792] = actions(4362);
	v->a[87793] = 1;
	v->a[87794] = sym__brace_start;
	v->a[87795] = actions(4548);
	v->a[87796] = 1;
	v->a[87797] = anon_sym_LPAREN;
	v->a[87798] = actions(4550);
	v->a[87799] = 1;
	small_parse_table_4390(v);
}

/* EOF small_parse_table_877.c */
