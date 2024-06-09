/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_762.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3810(t_small_parse_table_array *v)
{
	v->a[76200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76201] = actions(2785);
	v->a[76202] = 1;
	v->a[76203] = anon_sym_DQUOTE;
	v->a[76204] = actions(2787);
	v->a[76205] = 1;
	v->a[76206] = aux_sym_number_token1;
	v->a[76207] = actions(2789);
	v->a[76208] = 1;
	v->a[76209] = aux_sym_number_token2;
	v->a[76210] = actions(2791);
	v->a[76211] = 1;
	v->a[76212] = anon_sym_DOLLAR_LBRACE;
	v->a[76213] = actions(2793);
	v->a[76214] = 1;
	v->a[76215] = anon_sym_DOLLAR_LPAREN;
	v->a[76216] = actions(2795);
	v->a[76217] = 1;
	v->a[76218] = anon_sym_BQUOTE;
	v->a[76219] = actions(3083);
	small_parse_table_3811(v);
}

void	small_parse_table_3811(t_small_parse_table_array *v)
{
	v->a[76220] = 1;
	v->a[76221] = anon_sym_DOLLAR;
	v->a[76222] = actions(3085);
	v->a[76223] = 1;
	v->a[76224] = sym__bare_dollar;
	v->a[76225] = actions(3081);
	v->a[76226] = 3;
	v->a[76227] = sym_raw_string;
	v->a[76228] = sym__comment_word;
	v->a[76229] = sym_word;
	v->a[76230] = state(1320);
	v->a[76231] = 6;
	v->a[76232] = sym_arithmetic_expansion;
	v->a[76233] = sym_string;
	v->a[76234] = sym_number;
	v->a[76235] = sym_simple_expansion;
	v->a[76236] = sym_expansion;
	v->a[76237] = sym_command_substitution;
	v->a[76238] = 12;
	v->a[76239] = actions(3);
	small_parse_table_3812(v);
}

void	small_parse_table_3812(t_small_parse_table_array *v)
{
	v->a[76240] = 1;
	v->a[76241] = sym_comment;
	v->a[76242] = actions(2803);
	v->a[76243] = 1;
	v->a[76244] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76245] = actions(2805);
	v->a[76246] = 1;
	v->a[76247] = anon_sym_DOLLAR;
	v->a[76248] = actions(2807);
	v->a[76249] = 1;
	v->a[76250] = anon_sym_DQUOTE;
	v->a[76251] = actions(2809);
	v->a[76252] = 1;
	v->a[76253] = aux_sym_number_token1;
	v->a[76254] = actions(2811);
	v->a[76255] = 1;
	v->a[76256] = aux_sym_number_token2;
	v->a[76257] = actions(2813);
	v->a[76258] = 1;
	v->a[76259] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3813(v);
}

void	small_parse_table_3813(t_small_parse_table_array *v)
{
	v->a[76260] = actions(2815);
	v->a[76261] = 1;
	v->a[76262] = anon_sym_DOLLAR_LPAREN;
	v->a[76263] = actions(2817);
	v->a[76264] = 1;
	v->a[76265] = anon_sym_BQUOTE;
	v->a[76266] = actions(3079);
	v->a[76267] = 2;
	v->a[76268] = sym_raw_string;
	v->a[76269] = sym_word;
	v->a[76270] = state(197);
	v->a[76271] = 2;
	v->a[76272] = sym_concatenation;
	v->a[76273] = aux_sym_for_statement_repeat1;
	v->a[76274] = state(329);
	v->a[76275] = 6;
	v->a[76276] = sym_arithmetic_expansion;
	v->a[76277] = sym_string;
	v->a[76278] = sym_number;
	v->a[76279] = sym_simple_expansion;
	small_parse_table_3814(v);
}

void	small_parse_table_3814(t_small_parse_table_array *v)
{
	v->a[76280] = sym_expansion;
	v->a[76281] = sym_command_substitution;
	v->a[76282] = 12;
	v->a[76283] = actions(3);
	v->a[76284] = 1;
	v->a[76285] = sym_comment;
	v->a[76286] = actions(27);
	v->a[76287] = 1;
	v->a[76288] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76289] = actions(29);
	v->a[76290] = 1;
	v->a[76291] = anon_sym_DOLLAR;
	v->a[76292] = actions(31);
	v->a[76293] = 1;
	v->a[76294] = anon_sym_DQUOTE;
	v->a[76295] = actions(35);
	v->a[76296] = 1;
	v->a[76297] = aux_sym_number_token1;
	v->a[76298] = actions(37);
	v->a[76299] = 1;
	small_parse_table_3815(v);
}

/* EOF small_parse_table_762.c */
