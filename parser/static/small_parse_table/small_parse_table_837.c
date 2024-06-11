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
	v->a[83700] = actions(3152);
	v->a[83701] = 1;
	v->a[83702] = sym__bare_dollar;
	v->a[83703] = actions(3150);
	v->a[83704] = 5;
	v->a[83705] = aux_sym_concatenation_token1;
	v->a[83706] = sym_raw_string;
	v->a[83707] = sym_number;
	v->a[83708] = sym__comment_word;
	v->a[83709] = sym_word;
	v->a[83710] = state(326);
	v->a[83711] = 5;
	v->a[83712] = sym_arithmetic_expansion;
	v->a[83713] = sym_string;
	v->a[83714] = sym_simple_expansion;
	v->a[83715] = sym_expansion;
	v->a[83716] = sym_command_substitution;
	v->a[83717] = 10;
	v->a[83718] = actions(3);
	v->a[83719] = 1;
	small_parse_table_4186(v);
}

void	small_parse_table_4186(t_small_parse_table_array *v)
{
	v->a[83720] = sym_comment;
	v->a[83721] = actions(3156);
	v->a[83722] = 1;
	v->a[83723] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83724] = actions(3158);
	v->a[83725] = 1;
	v->a[83726] = anon_sym_DOLLAR;
	v->a[83727] = actions(3160);
	v->a[83728] = 1;
	v->a[83729] = anon_sym_DQUOTE;
	v->a[83730] = actions(3162);
	v->a[83731] = 1;
	v->a[83732] = anon_sym_DOLLAR_LBRACE;
	v->a[83733] = actions(3164);
	v->a[83734] = 1;
	v->a[83735] = anon_sym_DOLLAR_LPAREN;
	v->a[83736] = actions(3166);
	v->a[83737] = 1;
	v->a[83738] = anon_sym_BQUOTE;
	v->a[83739] = actions(3168);
	small_parse_table_4187(v);
}

void	small_parse_table_4187(t_small_parse_table_array *v)
{
	v->a[83740] = 1;
	v->a[83741] = sym__bare_dollar;
	v->a[83742] = actions(3154);
	v->a[83743] = 5;
	v->a[83744] = aux_sym_concatenation_token1;
	v->a[83745] = sym_raw_string;
	v->a[83746] = sym_number;
	v->a[83747] = sym__comment_word;
	v->a[83748] = sym_word;
	v->a[83749] = state(1113);
	v->a[83750] = 5;
	v->a[83751] = sym_arithmetic_expansion;
	v->a[83752] = sym_string;
	v->a[83753] = sym_simple_expansion;
	v->a[83754] = sym_expansion;
	v->a[83755] = sym_command_substitution;
	v->a[83756] = 12;
	v->a[83757] = actions(3);
	v->a[83758] = 1;
	v->a[83759] = sym_comment;
	small_parse_table_4188(v);
}

void	small_parse_table_4188(t_small_parse_table_array *v)
{
	v->a[83760] = actions(3172);
	v->a[83761] = 1;
	v->a[83762] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83763] = actions(3174);
	v->a[83764] = 1;
	v->a[83765] = anon_sym_DOLLAR;
	v->a[83766] = actions(3176);
	v->a[83767] = 1;
	v->a[83768] = anon_sym_DQUOTE;
	v->a[83769] = actions(3178);
	v->a[83770] = 1;
	v->a[83771] = anon_sym_DOLLAR_LBRACE;
	v->a[83772] = actions(3180);
	v->a[83773] = 1;
	v->a[83774] = anon_sym_DOLLAR_LPAREN;
	v->a[83775] = actions(3182);
	v->a[83776] = 1;
	v->a[83777] = anon_sym_BQUOTE;
	v->a[83778] = actions(3184);
	v->a[83779] = 1;
	small_parse_table_4189(v);
}

void	small_parse_table_4189(t_small_parse_table_array *v)
{
	v->a[83780] = sym__comment_word;
	v->a[83781] = actions(3186);
	v->a[83782] = 1;
	v->a[83783] = sym__empty_value;
	v->a[83784] = state(696);
	v->a[83785] = 1;
	v->a[83786] = sym_concatenation;
	v->a[83787] = actions(3170);
	v->a[83788] = 3;
	v->a[83789] = sym_raw_string;
	v->a[83790] = sym_number;
	v->a[83791] = sym_word;
	v->a[83792] = state(544);
	v->a[83793] = 5;
	v->a[83794] = sym_arithmetic_expansion;
	v->a[83795] = sym_string;
	v->a[83796] = sym_simple_expansion;
	v->a[83797] = sym_expansion;
	v->a[83798] = sym_command_substitution;
	v->a[83799] = 10;
	small_parse_table_4190(v);
}

/* EOF small_parse_table_837.c */
