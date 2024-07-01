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
	v->a[76200] = 1;
	v->a[76201] = anon_sym_DOLLAR_LBRACE;
	v->a[76202] = actions(2895);
	v->a[76203] = 1;
	v->a[76204] = anon_sym_DOLLAR_LPAREN;
	v->a[76205] = actions(2898);
	v->a[76206] = 1;
	v->a[76207] = anon_sym_BQUOTE;
	v->a[76208] = state(1480);
	v->a[76209] = 1;
	v->a[76210] = aux_sym__heredoc_command;
	v->a[76211] = state(1937);
	v->a[76212] = 1;
	v->a[76213] = sym_concatenation;
	v->a[76214] = actions(2878);
	v->a[76215] = 3;
	v->a[76216] = sym_raw_string;
	v->a[76217] = sym_number;
	v->a[76218] = sym_word;
	v->a[76219] = state(1774);
	small_parse_table_3811(v);
}

void	small_parse_table_3811(t_small_parse_table_array *v)
{
	v->a[76220] = 5;
	v->a[76221] = sym_arithmetic_expansion;
	v->a[76222] = sym_string;
	v->a[76223] = sym_simple_expansion;
	v->a[76224] = sym_expansion;
	v->a[76225] = sym_command_substitution;
	v->a[76226] = 12;
	v->a[76227] = actions(3);
	v->a[76228] = 1;
	v->a[76229] = sym_comment;
	v->a[76230] = actions(2587);
	v->a[76231] = 1;
	v->a[76232] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76233] = actions(2591);
	v->a[76234] = 1;
	v->a[76235] = anon_sym_DQUOTE;
	v->a[76236] = actions(2593);
	v->a[76237] = 1;
	v->a[76238] = anon_sym_DOLLAR_LBRACE;
	v->a[76239] = actions(2595);
	small_parse_table_3812(v);
}

void	small_parse_table_3812(t_small_parse_table_array *v)
{
	v->a[76240] = 1;
	v->a[76241] = anon_sym_DOLLAR_LPAREN;
	v->a[76242] = actions(2597);
	v->a[76243] = 1;
	v->a[76244] = anon_sym_BQUOTE;
	v->a[76245] = actions(2741);
	v->a[76246] = 1;
	v->a[76247] = anon_sym_DOLLAR;
	v->a[76248] = actions(2743);
	v->a[76249] = 1;
	v->a[76250] = sym__comment_word;
	v->a[76251] = actions(2745);
	v->a[76252] = 1;
	v->a[76253] = sym__empty_value;
	v->a[76254] = state(720);
	v->a[76255] = 1;
	v->a[76256] = sym_concatenation;
	v->a[76257] = actions(2901);
	v->a[76258] = 3;
	v->a[76259] = sym_raw_string;
	small_parse_table_3813(v);
}

void	small_parse_table_3813(t_small_parse_table_array *v)
{
	v->a[76260] = sym_number;
	v->a[76261] = sym_word;
	v->a[76262] = state(451);
	v->a[76263] = 5;
	v->a[76264] = sym_arithmetic_expansion;
	v->a[76265] = sym_string;
	v->a[76266] = sym_simple_expansion;
	v->a[76267] = sym_expansion;
	v->a[76268] = sym_command_substitution;
	v->a[76269] = 10;
	v->a[76270] = actions(3);
	v->a[76271] = 1;
	v->a[76272] = sym_comment;
	v->a[76273] = actions(717);
	v->a[76274] = 1;
	v->a[76275] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76276] = actions(721);
	v->a[76277] = 1;
	v->a[76278] = anon_sym_DQUOTE;
	v->a[76279] = actions(723);
	small_parse_table_3814(v);
}

void	small_parse_table_3814(t_small_parse_table_array *v)
{
	v->a[76280] = 1;
	v->a[76281] = anon_sym_DOLLAR_LBRACE;
	v->a[76282] = actions(725);
	v->a[76283] = 1;
	v->a[76284] = anon_sym_DOLLAR_LPAREN;
	v->a[76285] = actions(727);
	v->a[76286] = 1;
	v->a[76287] = anon_sym_BQUOTE;
	v->a[76288] = actions(2623);
	v->a[76289] = 1;
	v->a[76290] = sym__bare_dollar;
	v->a[76291] = actions(2903);
	v->a[76292] = 1;
	v->a[76293] = anon_sym_DOLLAR;
	v->a[76294] = actions(2621);
	v->a[76295] = 5;
	v->a[76296] = aux_sym_concatenation_token1;
	v->a[76297] = sym_raw_string;
	v->a[76298] = sym_number;
	v->a[76299] = sym__comment_word;
	small_parse_table_3815(v);
}

/* EOF small_parse_table_762.c */
