/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2057.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10285(t_small_parse_table_array *v)
{
	v->a[205700] = 1;
	v->a[205701] = anon_sym_BQUOTE;
	v->a[205702] = actions(9558);
	v->a[205703] = 1;
	v->a[205704] = anon_sym_DOLLAR_BQUOTE;
	v->a[205705] = actions(9562);
	v->a[205706] = 1;
	v->a[205707] = sym_test_operator;
	v->a[205708] = state(5651);
	v->a[205709] = 1;
	v->a[205710] = aux_sym__literal_repeat1;
	v->a[205711] = state(5744);
	v->a[205712] = 1;
	v->a[205713] = sym_concatenation;
	v->a[205714] = actions(9544);
	v->a[205715] = 2;
	v->a[205716] = anon_sym_LPAREN_LPAREN;
	v->a[205717] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[205718] = actions(9552);
	v->a[205719] = 2;
	small_parse_table_10286(v);
}

void	small_parse_table_10286(t_small_parse_table_array *v)
{
	v->a[205720] = sym_raw_string;
	v->a[205721] = sym_ansi_c_string;
	v->a[205722] = actions(9560);
	v->a[205723] = 2;
	v->a[205724] = anon_sym_LT_LPAREN;
	v->a[205725] = anon_sym_GT_LPAREN;
	v->a[205726] = state(5616);
	v->a[205727] = 9;
	v->a[205728] = sym_arithmetic_expansion;
	v->a[205729] = sym_brace_expression;
	v->a[205730] = sym_string;
	v->a[205731] = sym_translated_string;
	v->a[205732] = sym_number;
	v->a[205733] = sym_simple_expansion;
	v->a[205734] = sym_expansion;
	v->a[205735] = sym_command_substitution;
	v->a[205736] = sym_process_substitution;
	v->a[205737] = 20;
	v->a[205738] = actions(71);
	v->a[205739] = 1;
	small_parse_table_10287(v);
}

void	small_parse_table_10287(t_small_parse_table_array *v)
{
	v->a[205740] = sym_comment;
	v->a[205741] = actions(5870);
	v->a[205742] = 1;
	v->a[205743] = anon_sym_DOLLAR;
	v->a[205744] = actions(5876);
	v->a[205745] = 1;
	v->a[205746] = aux_sym_number_token1;
	v->a[205747] = actions(5878);
	v->a[205748] = 1;
	v->a[205749] = aux_sym_number_token2;
	v->a[205750] = actions(5882);
	v->a[205751] = 1;
	v->a[205752] = anon_sym_DOLLAR_LPAREN;
	v->a[205753] = actions(5892);
	v->a[205754] = 1;
	v->a[205755] = sym__brace_start;
	v->a[205756] = actions(9546);
	v->a[205757] = 1;
	v->a[205758] = anon_sym_DOLLAR_LBRACK;
	v->a[205759] = actions(9548);
	small_parse_table_10288(v);
}

void	small_parse_table_10288(t_small_parse_table_array *v)
{
	v->a[205760] = 1;
	v->a[205761] = sym__special_character;
	v->a[205762] = actions(9550);
	v->a[205763] = 1;
	v->a[205764] = anon_sym_DQUOTE;
	v->a[205765] = actions(9554);
	v->a[205766] = 1;
	v->a[205767] = anon_sym_DOLLAR_LBRACE;
	v->a[205768] = actions(9556);
	v->a[205769] = 1;
	v->a[205770] = anon_sym_BQUOTE;
	v->a[205771] = actions(9558);
	v->a[205772] = 1;
	v->a[205773] = anon_sym_DOLLAR_BQUOTE;
	v->a[205774] = actions(9564);
	v->a[205775] = 1;
	v->a[205776] = sym_word;
	v->a[205777] = actions(9568);
	v->a[205778] = 1;
	v->a[205779] = sym_test_operator;
	small_parse_table_10289(v);
}

void	small_parse_table_10289(t_small_parse_table_array *v)
{
	v->a[205780] = state(5643);
	v->a[205781] = 1;
	v->a[205782] = aux_sym__literal_repeat1;
	v->a[205783] = state(5747);
	v->a[205784] = 1;
	v->a[205785] = sym_concatenation;
	v->a[205786] = actions(9544);
	v->a[205787] = 2;
	v->a[205788] = anon_sym_LPAREN_LPAREN;
	v->a[205789] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[205790] = actions(9560);
	v->a[205791] = 2;
	v->a[205792] = anon_sym_LT_LPAREN;
	v->a[205793] = anon_sym_GT_LPAREN;
	v->a[205794] = actions(9566);
	v->a[205795] = 2;
	v->a[205796] = sym_raw_string;
	v->a[205797] = sym_ansi_c_string;
	v->a[205798] = state(5605);
	v->a[205799] = 9;
	small_parse_table_10290(v);
}

/* EOF small_parse_table_2057.c */
