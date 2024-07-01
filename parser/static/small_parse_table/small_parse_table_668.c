/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_668.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3340(t_small_parse_table_array *v)
{
	v->a[66800] = actions(2524);
	v->a[66801] = 3;
	v->a[66802] = sym_raw_string;
	v->a[66803] = sym_number;
	v->a[66804] = sym_word;
	v->a[66805] = state(446);
	v->a[66806] = 5;
	v->a[66807] = sym_arithmetic_expansion;
	v->a[66808] = sym_string;
	v->a[66809] = sym_simple_expansion;
	v->a[66810] = sym_expansion;
	v->a[66811] = sym_command_substitution;
	v->a[66812] = 10;
	v->a[66813] = actions(3);
	v->a[66814] = 1;
	v->a[66815] = sym_comment;
	v->a[66816] = actions(2400);
	v->a[66817] = 1;
	v->a[66818] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66819] = actions(2404);
	small_parse_table_3341(v);
}

void	small_parse_table_3341(t_small_parse_table_array *v)
{
	v->a[66820] = 1;
	v->a[66821] = anon_sym_DQUOTE;
	v->a[66822] = actions(2406);
	v->a[66823] = 1;
	v->a[66824] = anon_sym_DOLLAR_LBRACE;
	v->a[66825] = actions(2408);
	v->a[66826] = 1;
	v->a[66827] = anon_sym_DOLLAR_LPAREN;
	v->a[66828] = actions(2410);
	v->a[66829] = 1;
	v->a[66830] = anon_sym_BQUOTE;
	v->a[66831] = actions(2412);
	v->a[66832] = 1;
	v->a[66833] = sym__bare_dollar;
	v->a[66834] = actions(2532);
	v->a[66835] = 1;
	v->a[66836] = anon_sym_DOLLAR;
	v->a[66837] = actions(2398);
	v->a[66838] = 5;
	v->a[66839] = aux_sym_concatenation_token1;
	small_parse_table_3342(v);
}

void	small_parse_table_3342(t_small_parse_table_array *v)
{
	v->a[66840] = sym_raw_string;
	v->a[66841] = sym_number;
	v->a[66842] = sym__comment_word;
	v->a[66843] = sym_word;
	v->a[66844] = state(454);
	v->a[66845] = 5;
	v->a[66846] = sym_arithmetic_expansion;
	v->a[66847] = sym_string;
	v->a[66848] = sym_simple_expansion;
	v->a[66849] = sym_expansion;
	v->a[66850] = sym_command_substitution;
	v->a[66851] = 10;
	v->a[66852] = actions(3);
	v->a[66853] = 1;
	v->a[66854] = sym_comment;
	v->a[66855] = actions(2324);
	v->a[66856] = 1;
	v->a[66857] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66858] = actions(2328);
	v->a[66859] = 1;
	small_parse_table_3343(v);
}

void	small_parse_table_3343(t_small_parse_table_array *v)
{
	v->a[66860] = anon_sym_DQUOTE;
	v->a[66861] = actions(2330);
	v->a[66862] = 1;
	v->a[66863] = anon_sym_DOLLAR_LBRACE;
	v->a[66864] = actions(2332);
	v->a[66865] = 1;
	v->a[66866] = anon_sym_DOLLAR_LPAREN;
	v->a[66867] = actions(2334);
	v->a[66868] = 1;
	v->a[66869] = anon_sym_BQUOTE;
	v->a[66870] = actions(2336);
	v->a[66871] = 1;
	v->a[66872] = sym__bare_dollar;
	v->a[66873] = actions(2534);
	v->a[66874] = 1;
	v->a[66875] = anon_sym_DOLLAR;
	v->a[66876] = actions(2322);
	v->a[66877] = 5;
	v->a[66878] = aux_sym_concatenation_token1;
	v->a[66879] = sym_raw_string;
	small_parse_table_3344(v);
}

void	small_parse_table_3344(t_small_parse_table_array *v)
{
	v->a[66880] = sym_number;
	v->a[66881] = sym__comment_word;
	v->a[66882] = sym_word;
	v->a[66883] = state(909);
	v->a[66884] = 5;
	v->a[66885] = sym_arithmetic_expansion;
	v->a[66886] = sym_string;
	v->a[66887] = sym_simple_expansion;
	v->a[66888] = sym_expansion;
	v->a[66889] = sym_command_substitution;
	v->a[66890] = 10;
	v->a[66891] = actions(3);
	v->a[66892] = 1;
	v->a[66893] = sym_comment;
	v->a[66894] = actions(871);
	v->a[66895] = 1;
	v->a[66896] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66897] = actions(873);
	v->a[66898] = 1;
	v->a[66899] = anon_sym_DOLLAR;
	small_parse_table_3345(v);
}

/* EOF small_parse_table_668.c */
