/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_858.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4290(t_small_parse_table_array *v)
{
	v->a[85800] = state(500);
	v->a[85801] = 5;
	v->a[85802] = sym_arithmetic_expansion;
	v->a[85803] = sym_string;
	v->a[85804] = sym_simple_expansion;
	v->a[85805] = sym_expansion;
	v->a[85806] = sym_command_substitution;
	v->a[85807] = 10;
	v->a[85808] = actions(3);
	v->a[85809] = 1;
	v->a[85810] = sym_comment;
	v->a[85811] = actions(459);
	v->a[85812] = 1;
	v->a[85813] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85814] = actions(463);
	v->a[85815] = 1;
	v->a[85816] = anon_sym_DQUOTE;
	v->a[85817] = actions(465);
	v->a[85818] = 1;
	v->a[85819] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4291(v);
}

void	small_parse_table_4291(t_small_parse_table_array *v)
{
	v->a[85820] = actions(467);
	v->a[85821] = 1;
	v->a[85822] = anon_sym_DOLLAR_LPAREN;
	v->a[85823] = actions(469);
	v->a[85824] = 1;
	v->a[85825] = anon_sym_BQUOTE;
	v->a[85826] = actions(3260);
	v->a[85827] = 1;
	v->a[85828] = sym__bare_dollar;
	v->a[85829] = actions(3457);
	v->a[85830] = 1;
	v->a[85831] = anon_sym_DOLLAR;
	v->a[85832] = actions(3258);
	v->a[85833] = 5;
	v->a[85834] = aux_sym_concatenation_token1;
	v->a[85835] = sym_raw_string;
	v->a[85836] = sym_number;
	v->a[85837] = sym__comment_word;
	v->a[85838] = sym_word;
	v->a[85839] = state(446);
	small_parse_table_4292(v);
}

void	small_parse_table_4292(t_small_parse_table_array *v)
{
	v->a[85840] = 5;
	v->a[85841] = sym_arithmetic_expansion;
	v->a[85842] = sym_string;
	v->a[85843] = sym_simple_expansion;
	v->a[85844] = sym_expansion;
	v->a[85845] = sym_command_substitution;
	v->a[85846] = 10;
	v->a[85847] = actions(3);
	v->a[85848] = 1;
	v->a[85849] = sym_comment;
	v->a[85850] = actions(3308);
	v->a[85851] = 1;
	v->a[85852] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85853] = actions(3312);
	v->a[85854] = 1;
	v->a[85855] = anon_sym_DQUOTE;
	v->a[85856] = actions(3314);
	v->a[85857] = 1;
	v->a[85858] = anon_sym_DOLLAR_LBRACE;
	v->a[85859] = actions(3316);
	small_parse_table_4293(v);
}

void	small_parse_table_4293(t_small_parse_table_array *v)
{
	v->a[85860] = 1;
	v->a[85861] = anon_sym_DOLLAR_LPAREN;
	v->a[85862] = actions(3318);
	v->a[85863] = 1;
	v->a[85864] = anon_sym_BQUOTE;
	v->a[85865] = actions(3320);
	v->a[85866] = 1;
	v->a[85867] = sym__bare_dollar;
	v->a[85868] = actions(3459);
	v->a[85869] = 1;
	v->a[85870] = anon_sym_DOLLAR;
	v->a[85871] = actions(3306);
	v->a[85872] = 5;
	v->a[85873] = aux_sym_concatenation_token1;
	v->a[85874] = sym_raw_string;
	v->a[85875] = sym_number;
	v->a[85876] = sym__comment_word;
	v->a[85877] = sym_word;
	v->a[85878] = state(1197);
	v->a[85879] = 5;
	small_parse_table_4294(v);
}

void	small_parse_table_4294(t_small_parse_table_array *v)
{
	v->a[85880] = sym_arithmetic_expansion;
	v->a[85881] = sym_string;
	v->a[85882] = sym_simple_expansion;
	v->a[85883] = sym_expansion;
	v->a[85884] = sym_command_substitution;
	v->a[85885] = 12;
	v->a[85886] = actions(3);
	v->a[85887] = 1;
	v->a[85888] = sym_comment;
	v->a[85889] = actions(3200);
	v->a[85890] = 1;
	v->a[85891] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85892] = actions(3202);
	v->a[85893] = 1;
	v->a[85894] = anon_sym_DOLLAR;
	v->a[85895] = actions(3204);
	v->a[85896] = 1;
	v->a[85897] = anon_sym_DQUOTE;
	v->a[85898] = actions(3206);
	v->a[85899] = 1;
	small_parse_table_4295(v);
}

/* EOF small_parse_table_858.c */
