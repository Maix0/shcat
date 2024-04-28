/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2147.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10735(t_small_parse_table_array *v)
{
	v->a[214700] = sym_raw_string;
	v->a[214701] = sym_ansi_c_string;
	v->a[214702] = state(5461);
	v->a[214703] = 9;
	v->a[214704] = sym_arithmetic_expansion;
	v->a[214705] = sym_brace_expression;
	v->a[214706] = sym_string;
	v->a[214707] = sym_translated_string;
	v->a[214708] = sym_number;
	v->a[214709] = sym_simple_expansion;
	v->a[214710] = sym_expansion;
	v->a[214711] = sym_command_substitution;
	v->a[214712] = sym_process_substitution;
	v->a[214713] = 18;
	v->a[214714] = actions(3);
	v->a[214715] = 1;
	v->a[214716] = sym_comment;
	v->a[214717] = actions(1593);
	v->a[214718] = 1;
	v->a[214719] = aux_sym_number_token1;
	small_parse_table_10736(v);
}

void	small_parse_table_10736(t_small_parse_table_array *v)
{
	v->a[214720] = actions(1595);
	v->a[214721] = 1;
	v->a[214722] = aux_sym_number_token2;
	v->a[214723] = actions(1599);
	v->a[214724] = 1;
	v->a[214725] = anon_sym_DOLLAR_LPAREN;
	v->a[214726] = actions(1611);
	v->a[214727] = 1;
	v->a[214728] = sym__brace_start;
	v->a[214729] = actions(9240);
	v->a[214730] = 1;
	v->a[214731] = anon_sym_DOLLAR_LBRACK;
	v->a[214732] = actions(9244);
	v->a[214733] = 1;
	v->a[214734] = anon_sym_DQUOTE;
	v->a[214735] = actions(9248);
	v->a[214736] = 1;
	v->a[214737] = anon_sym_DOLLAR_LBRACE;
	v->a[214738] = actions(9250);
	v->a[214739] = 1;
	small_parse_table_10737(v);
}

void	small_parse_table_10737(t_small_parse_table_array *v)
{
	v->a[214740] = anon_sym_BQUOTE;
	v->a[214741] = actions(9252);
	v->a[214742] = 1;
	v->a[214743] = anon_sym_DOLLAR_BQUOTE;
	v->a[214744] = actions(10094);
	v->a[214745] = 1;
	v->a[214746] = sym_word;
	v->a[214747] = actions(10102);
	v->a[214748] = 1;
	v->a[214749] = sym__comment_word;
	v->a[214750] = actions(10244);
	v->a[214751] = 1;
	v->a[214752] = anon_sym_DOLLAR;
	v->a[214753] = actions(9238);
	v->a[214754] = 2;
	v->a[214755] = anon_sym_LPAREN_LPAREN;
	v->a[214756] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[214757] = actions(9254);
	v->a[214758] = 2;
	v->a[214759] = anon_sym_LT_LPAREN;
	small_parse_table_10738(v);
}

void	small_parse_table_10738(t_small_parse_table_array *v)
{
	v->a[214760] = anon_sym_GT_LPAREN;
	v->a[214761] = actions(10098);
	v->a[214762] = 2;
	v->a[214763] = sym_test_operator;
	v->a[214764] = sym__special_character;
	v->a[214765] = actions(10100);
	v->a[214766] = 3;
	v->a[214767] = sym__bare_dollar;
	v->a[214768] = sym_raw_string;
	v->a[214769] = sym_ansi_c_string;
	v->a[214770] = state(1293);
	v->a[214771] = 9;
	v->a[214772] = sym_arithmetic_expansion;
	v->a[214773] = sym_brace_expression;
	v->a[214774] = sym_string;
	v->a[214775] = sym_translated_string;
	v->a[214776] = sym_number;
	v->a[214777] = sym_simple_expansion;
	v->a[214778] = sym_expansion;
	v->a[214779] = sym_command_substitution;
	small_parse_table_10739(v);
}

void	small_parse_table_10739(t_small_parse_table_array *v)
{
	v->a[214780] = sym_process_substitution;
	v->a[214781] = 18;
	v->a[214782] = actions(3);
	v->a[214783] = 1;
	v->a[214784] = sym_comment;
	v->a[214785] = actions(2610);
	v->a[214786] = 1;
	v->a[214787] = aux_sym_number_token1;
	v->a[214788] = actions(2612);
	v->a[214789] = 1;
	v->a[214790] = aux_sym_number_token2;
	v->a[214791] = actions(2616);
	v->a[214792] = 1;
	v->a[214793] = anon_sym_DOLLAR_LPAREN;
	v->a[214794] = actions(2626);
	v->a[214795] = 1;
	v->a[214796] = sym__brace_start;
	v->a[214797] = actions(8962);
	v->a[214798] = 1;
	v->a[214799] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10740(v);
}

/* EOF small_parse_table_2147.c */
