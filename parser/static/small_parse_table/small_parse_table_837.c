/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_837.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4185(t_small_parse_table_array *v)
{
	v->a[83700] = anon_sym_LPAREN;
	v->a[83701] = actions(4550);
	v->a[83702] = 1;
	v->a[83703] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83704] = actions(4552);
	v->a[83705] = 1;
	v->a[83706] = sym__special_character;
	v->a[83707] = actions(4554);
	v->a[83708] = 1;
	v->a[83709] = anon_sym_DQUOTE;
	v->a[83710] = actions(4556);
	v->a[83711] = 1;
	v->a[83712] = anon_sym_DOLLAR_LBRACE;
	v->a[83713] = actions(4558);
	v->a[83714] = 1;
	v->a[83715] = anon_sym_BQUOTE;
	v->a[83716] = actions(4560);
	v->a[83717] = 1;
	v->a[83718] = anon_sym_DOLLAR_BQUOTE;
	v->a[83719] = state(3393);
	small_parse_table_4186(v);
}

void	small_parse_table_4186(t_small_parse_table_array *v)
{
	v->a[83720] = 1;
	v->a[83721] = aux_sym__literal_repeat1;
	v->a[83722] = state(3855);
	v->a[83723] = 1;
	v->a[83724] = sym_last_case_item;
	v->a[83725] = actions(4358);
	v->a[83726] = 2;
	v->a[83727] = sym_test_operator;
	v->a[83728] = sym_raw_string;
	v->a[83729] = state(1881);
	v->a[83730] = 2;
	v->a[83731] = sym_case_item;
	v->a[83732] = aux_sym_case_statement_repeat1;
	v->a[83733] = state(3472);
	v->a[83734] = 2;
	v->a[83735] = sym_concatenation;
	v->a[83736] = sym__extglob_blob;
	v->a[83737] = state(3295);
	v->a[83738] = 7;
	v->a[83739] = sym_arithmetic_expansion;
	small_parse_table_4187(v);
}

void	small_parse_table_4187(t_small_parse_table_array *v)
{
	v->a[83740] = sym_brace_expression;
	v->a[83741] = sym_string;
	v->a[83742] = sym_number;
	v->a[83743] = sym_simple_expansion;
	v->a[83744] = sym_expansion;
	v->a[83745] = sym_command_substitution;
	v->a[83746] = 21;
	v->a[83747] = actions(57);
	v->a[83748] = 1;
	v->a[83749] = sym_comment;
	v->a[83750] = actions(4328);
	v->a[83751] = 1;
	v->a[83752] = sym_word;
	v->a[83753] = actions(4340);
	v->a[83754] = 1;
	v->a[83755] = anon_sym_DOLLAR;
	v->a[83756] = actions(4346);
	v->a[83757] = 1;
	v->a[83758] = aux_sym_number_token1;
	v->a[83759] = actions(4348);
	small_parse_table_4188(v);
}

void	small_parse_table_4188(t_small_parse_table_array *v)
{
	v->a[83760] = 1;
	v->a[83761] = aux_sym_number_token2;
	v->a[83762] = actions(4352);
	v->a[83763] = 1;
	v->a[83764] = anon_sym_DOLLAR_LPAREN;
	v->a[83765] = actions(4360);
	v->a[83766] = 1;
	v->a[83767] = sym_extglob_pattern;
	v->a[83768] = actions(4362);
	v->a[83769] = 1;
	v->a[83770] = sym__brace_start;
	v->a[83771] = actions(4548);
	v->a[83772] = 1;
	v->a[83773] = anon_sym_LPAREN;
	v->a[83774] = actions(4550);
	v->a[83775] = 1;
	v->a[83776] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83777] = actions(4552);
	v->a[83778] = 1;
	v->a[83779] = sym__special_character;
	small_parse_table_4189(v);
}

void	small_parse_table_4189(t_small_parse_table_array *v)
{
	v->a[83780] = actions(4554);
	v->a[83781] = 1;
	v->a[83782] = anon_sym_DQUOTE;
	v->a[83783] = actions(4556);
	v->a[83784] = 1;
	v->a[83785] = anon_sym_DOLLAR_LBRACE;
	v->a[83786] = actions(4558);
	v->a[83787] = 1;
	v->a[83788] = anon_sym_BQUOTE;
	v->a[83789] = actions(4560);
	v->a[83790] = 1;
	v->a[83791] = anon_sym_DOLLAR_BQUOTE;
	v->a[83792] = state(3393);
	v->a[83793] = 1;
	v->a[83794] = aux_sym__literal_repeat1;
	v->a[83795] = state(3834);
	v->a[83796] = 1;
	v->a[83797] = sym_last_case_item;
	v->a[83798] = actions(4358);
	v->a[83799] = 2;
	small_parse_table_4190(v);
}

/* EOF small_parse_table_837.c */
