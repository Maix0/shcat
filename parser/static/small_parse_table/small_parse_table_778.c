/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_778.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3890(t_small_parse_table_array *v)
{
	v->a[77800] = 1;
	v->a[77801] = anon_sym_DOLLAR;
	v->a[77802] = actions(2647);
	v->a[77803] = 1;
	v->a[77804] = anon_sym_DQUOTE;
	v->a[77805] = actions(2649);
	v->a[77806] = 1;
	v->a[77807] = anon_sym_DOLLAR_LBRACE;
	v->a[77808] = actions(2651);
	v->a[77809] = 1;
	v->a[77810] = anon_sym_DOLLAR_LPAREN;
	v->a[77811] = actions(2653);
	v->a[77812] = 1;
	v->a[77813] = anon_sym_BQUOTE;
	v->a[77814] = actions(2737);
	v->a[77815] = 1;
	v->a[77816] = sym__bare_dollar;
	v->a[77817] = actions(2733);
	v->a[77818] = 5;
	v->a[77819] = aux_sym_concatenation_token1;
	small_parse_table_3891(v);
}

void	small_parse_table_3891(t_small_parse_table_array *v)
{
	v->a[77820] = sym_raw_string;
	v->a[77821] = sym_number;
	v->a[77822] = sym__comment_word;
	v->a[77823] = sym_word;
	v->a[77824] = state(1214);
	v->a[77825] = 5;
	v->a[77826] = sym_arithmetic_expansion;
	v->a[77827] = sym_string;
	v->a[77828] = sym_simple_expansion;
	v->a[77829] = sym_expansion;
	v->a[77830] = sym_command_substitution;
	v->a[77831] = 10;
	v->a[77832] = actions(3);
	v->a[77833] = 1;
	v->a[77834] = sym_comment;
	v->a[77835] = actions(910);
	v->a[77836] = 1;
	v->a[77837] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77838] = actions(914);
	v->a[77839] = 1;
	small_parse_table_3892(v);
}

void	small_parse_table_3892(t_small_parse_table_array *v)
{
	v->a[77840] = anon_sym_DQUOTE;
	v->a[77841] = actions(916);
	v->a[77842] = 1;
	v->a[77843] = anon_sym_DOLLAR_LBRACE;
	v->a[77844] = actions(918);
	v->a[77845] = 1;
	v->a[77846] = anon_sym_DOLLAR_LPAREN;
	v->a[77847] = actions(920);
	v->a[77848] = 1;
	v->a[77849] = anon_sym_BQUOTE;
	v->a[77850] = actions(2577);
	v->a[77851] = 1;
	v->a[77852] = sym__bare_dollar;
	v->a[77853] = actions(2996);
	v->a[77854] = 1;
	v->a[77855] = anon_sym_DOLLAR;
	v->a[77856] = actions(2573);
	v->a[77857] = 5;
	v->a[77858] = aux_sym_concatenation_token1;
	v->a[77859] = sym_raw_string;
	small_parse_table_3893(v);
}

void	small_parse_table_3893(t_small_parse_table_array *v)
{
	v->a[77860] = sym_number;
	v->a[77861] = sym__comment_word;
	v->a[77862] = sym_word;
	v->a[77863] = state(1040);
	v->a[77864] = 5;
	v->a[77865] = sym_arithmetic_expansion;
	v->a[77866] = sym_string;
	v->a[77867] = sym_simple_expansion;
	v->a[77868] = sym_expansion;
	v->a[77869] = sym_command_substitution;
	v->a[77870] = 12;
	v->a[77871] = actions(3);
	v->a[77872] = 1;
	v->a[77873] = sym_comment;
	v->a[77874] = actions(2627);
	v->a[77875] = 1;
	v->a[77876] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77877] = actions(2631);
	v->a[77878] = 1;
	v->a[77879] = anon_sym_DQUOTE;
	small_parse_table_3894(v);
}

void	small_parse_table_3894(t_small_parse_table_array *v)
{
	v->a[77880] = actions(2633);
	v->a[77881] = 1;
	v->a[77882] = anon_sym_DOLLAR_LBRACE;
	v->a[77883] = actions(2635);
	v->a[77884] = 1;
	v->a[77885] = anon_sym_DOLLAR_LPAREN;
	v->a[77886] = actions(2637);
	v->a[77887] = 1;
	v->a[77888] = anon_sym_BQUOTE;
	v->a[77889] = actions(2958);
	v->a[77890] = 1;
	v->a[77891] = anon_sym_DOLLAR;
	v->a[77892] = actions(3000);
	v->a[77893] = 1;
	v->a[77894] = sym__comment_word;
	v->a[77895] = actions(3002);
	v->a[77896] = 1;
	v->a[77897] = sym__empty_value;
	v->a[77898] = state(1324);
	v->a[77899] = 1;
	small_parse_table_3895(v);
}

/* EOF small_parse_table_778.c */
