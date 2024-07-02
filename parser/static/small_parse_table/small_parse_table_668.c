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
	v->a[66800] = 10;
	v->a[66801] = actions(3);
	v->a[66802] = 1;
	v->a[66803] = sym_comment;
	v->a[66804] = actions(463);
	v->a[66805] = 1;
	v->a[66806] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66807] = actions(467);
	v->a[66808] = 1;
	v->a[66809] = anon_sym_DQUOTE;
	v->a[66810] = actions(469);
	v->a[66811] = 1;
	v->a[66812] = anon_sym_DOLLAR_LBRACE;
	v->a[66813] = actions(471);
	v->a[66814] = 1;
	v->a[66815] = anon_sym_DOLLAR_LPAREN;
	v->a[66816] = actions(473);
	v->a[66817] = 1;
	v->a[66818] = anon_sym_BQUOTE;
	v->a[66819] = actions(2404);
	small_parse_table_3341(v);
}

void	small_parse_table_3341(t_small_parse_table_array *v)
{
	v->a[66820] = 1;
	v->a[66821] = sym__bare_dollar;
	v->a[66822] = actions(2545);
	v->a[66823] = 1;
	v->a[66824] = anon_sym_DOLLAR;
	v->a[66825] = actions(2402);
	v->a[66826] = 5;
	v->a[66827] = aux_sym_concatenation_token1;
	v->a[66828] = sym_raw_string;
	v->a[66829] = sym_number;
	v->a[66830] = sym__comment_word;
	v->a[66831] = sym_word;
	v->a[66832] = state(533);
	v->a[66833] = 5;
	v->a[66834] = sym_arithmetic_expansion;
	v->a[66835] = sym_string;
	v->a[66836] = sym_simple_expansion;
	v->a[66837] = sym_expansion;
	v->a[66838] = sym_command_substitution;
	v->a[66839] = 10;
	small_parse_table_3342(v);
}

void	small_parse_table_3342(t_small_parse_table_array *v)
{
	v->a[66840] = actions(3);
	v->a[66841] = 1;
	v->a[66842] = sym_comment;
	v->a[66843] = actions(2444);
	v->a[66844] = 1;
	v->a[66845] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66846] = actions(2448);
	v->a[66847] = 1;
	v->a[66848] = anon_sym_DQUOTE;
	v->a[66849] = actions(2450);
	v->a[66850] = 1;
	v->a[66851] = anon_sym_DOLLAR_LBRACE;
	v->a[66852] = actions(2452);
	v->a[66853] = 1;
	v->a[66854] = anon_sym_DOLLAR_LPAREN;
	v->a[66855] = actions(2454);
	v->a[66856] = 1;
	v->a[66857] = anon_sym_BQUOTE;
	v->a[66858] = actions(2456);
	v->a[66859] = 1;
	small_parse_table_3343(v);
}

void	small_parse_table_3343(t_small_parse_table_array *v)
{
	v->a[66860] = sym__bare_dollar;
	v->a[66861] = actions(2547);
	v->a[66862] = 1;
	v->a[66863] = anon_sym_DOLLAR;
	v->a[66864] = actions(2442);
	v->a[66865] = 5;
	v->a[66866] = aux_sym_concatenation_token1;
	v->a[66867] = sym_raw_string;
	v->a[66868] = sym_number;
	v->a[66869] = sym__comment_word;
	v->a[66870] = sym_word;
	v->a[66871] = state(501);
	v->a[66872] = 5;
	v->a[66873] = sym_arithmetic_expansion;
	v->a[66874] = sym_string;
	v->a[66875] = sym_simple_expansion;
	v->a[66876] = sym_expansion;
	v->a[66877] = sym_command_substitution;
	v->a[66878] = 10;
	v->a[66879] = actions(3);
	small_parse_table_3344(v);
}

void	small_parse_table_3344(t_small_parse_table_array *v)
{
	v->a[66880] = 1;
	v->a[66881] = sym_comment;
	v->a[66882] = actions(1067);
	v->a[66883] = 1;
	v->a[66884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66885] = actions(1069);
	v->a[66886] = 1;
	v->a[66887] = anon_sym_DOLLAR;
	v->a[66888] = actions(1071);
	v->a[66889] = 1;
	v->a[66890] = anon_sym_DQUOTE;
	v->a[66891] = actions(1073);
	v->a[66892] = 1;
	v->a[66893] = anon_sym_DOLLAR_LBRACE;
	v->a[66894] = actions(1075);
	v->a[66895] = 1;
	v->a[66896] = anon_sym_DOLLAR_LPAREN;
	v->a[66897] = actions(1077);
	v->a[66898] = 1;
	v->a[66899] = anon_sym_BQUOTE;
	small_parse_table_3345(v);
}

/* EOF small_parse_table_668.c */
