/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2187.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10935(t_small_parse_table_array *v)
{
	v->a[218700] = sym_word;
	v->a[218701] = actions(10314);
	v->a[218702] = 1;
	v->a[218703] = sym__comment_word;
	v->a[218704] = actions(10418);
	v->a[218705] = 1;
	v->a[218706] = anon_sym_DOLLAR;
	v->a[218707] = actions(449);
	v->a[218708] = 2;
	v->a[218709] = anon_sym_LPAREN_LPAREN;
	v->a[218710] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[218711] = actions(473);
	v->a[218712] = 2;
	v->a[218713] = anon_sym_LT_LPAREN;
	v->a[218714] = anon_sym_GT_LPAREN;
	v->a[218715] = actions(10310);
	v->a[218716] = 2;
	v->a[218717] = sym_test_operator;
	v->a[218718] = sym__special_character;
	v->a[218719] = actions(10312);
	small_parse_table_10936(v);
}

void	small_parse_table_10936(t_small_parse_table_array *v)
{
	v->a[218720] = 3;
	v->a[218721] = sym__bare_dollar;
	v->a[218722] = sym_raw_string;
	v->a[218723] = sym_ansi_c_string;
	v->a[218724] = state(866);
	v->a[218725] = 9;
	v->a[218726] = sym_arithmetic_expansion;
	v->a[218727] = sym_brace_expression;
	v->a[218728] = sym_string;
	v->a[218729] = sym_translated_string;
	v->a[218730] = sym_number;
	v->a[218731] = sym_simple_expansion;
	v->a[218732] = sym_expansion;
	v->a[218733] = sym_command_substitution;
	v->a[218734] = sym_process_substitution;
	v->a[218735] = 18;
	v->a[218736] = actions(3);
	v->a[218737] = 1;
	v->a[218738] = sym_comment;
	v->a[218739] = actions(2269);
	small_parse_table_10937(v);
}

void	small_parse_table_10937(t_small_parse_table_array *v)
{
	v->a[218740] = 1;
	v->a[218741] = aux_sym_number_token1;
	v->a[218742] = actions(2271);
	v->a[218743] = 1;
	v->a[218744] = aux_sym_number_token2;
	v->a[218745] = actions(2275);
	v->a[218746] = 1;
	v->a[218747] = anon_sym_DOLLAR_LPAREN;
	v->a[218748] = actions(2289);
	v->a[218749] = 1;
	v->a[218750] = sym__brace_start;
	v->a[218751] = actions(8066);
	v->a[218752] = 1;
	v->a[218753] = anon_sym_DOLLAR_LBRACK;
	v->a[218754] = actions(8070);
	v->a[218755] = 1;
	v->a[218756] = anon_sym_DQUOTE;
	v->a[218757] = actions(8074);
	v->a[218758] = 1;
	v->a[218759] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10938(v);
}

void	small_parse_table_10938(t_small_parse_table_array *v)
{
	v->a[218760] = actions(8076);
	v->a[218761] = 1;
	v->a[218762] = anon_sym_BQUOTE;
	v->a[218763] = actions(8078);
	v->a[218764] = 1;
	v->a[218765] = anon_sym_DOLLAR_BQUOTE;
	v->a[218766] = actions(9580);
	v->a[218767] = 1;
	v->a[218768] = sym_word;
	v->a[218769] = actions(9588);
	v->a[218770] = 1;
	v->a[218771] = sym__comment_word;
	v->a[218772] = actions(10420);
	v->a[218773] = 1;
	v->a[218774] = anon_sym_DOLLAR;
	v->a[218775] = actions(8062);
	v->a[218776] = 2;
	v->a[218777] = anon_sym_LPAREN_LPAREN;
	v->a[218778] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[218779] = actions(8080);
	small_parse_table_10939(v);
}

void	small_parse_table_10939(t_small_parse_table_array *v)
{
	v->a[218780] = 2;
	v->a[218781] = anon_sym_LT_LPAREN;
	v->a[218782] = anon_sym_GT_LPAREN;
	v->a[218783] = actions(9584);
	v->a[218784] = 2;
	v->a[218785] = sym_test_operator;
	v->a[218786] = sym__special_character;
	v->a[218787] = actions(9586);
	v->a[218788] = 3;
	v->a[218789] = sym__bare_dollar;
	v->a[218790] = sym_raw_string;
	v->a[218791] = sym_ansi_c_string;
	v->a[218792] = state(1623);
	v->a[218793] = 9;
	v->a[218794] = sym_arithmetic_expansion;
	v->a[218795] = sym_brace_expression;
	v->a[218796] = sym_string;
	v->a[218797] = sym_translated_string;
	v->a[218798] = sym_number;
	v->a[218799] = sym_simple_expansion;
	small_parse_table_10940(v);
}

/* EOF small_parse_table_2187.c */
