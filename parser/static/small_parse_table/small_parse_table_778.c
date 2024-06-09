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
	v->a[77801] = sym_comment;
	v->a[77802] = actions(905);
	v->a[77803] = 1;
	v->a[77804] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77805] = actions(909);
	v->a[77806] = 1;
	v->a[77807] = anon_sym_DQUOTE;
	v->a[77808] = actions(911);
	v->a[77809] = 1;
	v->a[77810] = aux_sym_number_token1;
	v->a[77811] = actions(913);
	v->a[77812] = 1;
	v->a[77813] = aux_sym_number_token2;
	v->a[77814] = actions(915);
	v->a[77815] = 1;
	v->a[77816] = anon_sym_DOLLAR_LBRACE;
	v->a[77817] = actions(917);
	v->a[77818] = 1;
	v->a[77819] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3891(v);
}

void	small_parse_table_3891(t_small_parse_table_array *v)
{
	v->a[77820] = actions(919);
	v->a[77821] = 1;
	v->a[77822] = anon_sym_BQUOTE;
	v->a[77823] = actions(3077);
	v->a[77824] = 1;
	v->a[77825] = sym__bare_dollar;
	v->a[77826] = actions(3162);
	v->a[77827] = 1;
	v->a[77828] = anon_sym_DOLLAR;
	v->a[77829] = actions(3075);
	v->a[77830] = 3;
	v->a[77831] = sym_raw_string;
	v->a[77832] = sym__comment_word;
	v->a[77833] = sym_word;
	v->a[77834] = state(981);
	v->a[77835] = 6;
	v->a[77836] = sym_arithmetic_expansion;
	v->a[77837] = sym_string;
	v->a[77838] = sym_number;
	v->a[77839] = sym_simple_expansion;
	small_parse_table_3892(v);
}

void	small_parse_table_3892(t_small_parse_table_array *v)
{
	v->a[77840] = sym_expansion;
	v->a[77841] = sym_command_substitution;
	v->a[77842] = 12;
	v->a[77843] = actions(3);
	v->a[77844] = 1;
	v->a[77845] = sym_comment;
	v->a[77846] = actions(63);
	v->a[77847] = 1;
	v->a[77848] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77849] = actions(67);
	v->a[77850] = 1;
	v->a[77851] = anon_sym_DQUOTE;
	v->a[77852] = actions(71);
	v->a[77853] = 1;
	v->a[77854] = aux_sym_number_token1;
	v->a[77855] = actions(73);
	v->a[77856] = 1;
	v->a[77857] = aux_sym_number_token2;
	v->a[77858] = actions(75);
	v->a[77859] = 1;
	small_parse_table_3893(v);
}

void	small_parse_table_3893(t_small_parse_table_array *v)
{
	v->a[77860] = anon_sym_DOLLAR_LBRACE;
	v->a[77861] = actions(77);
	v->a[77862] = 1;
	v->a[77863] = anon_sym_DOLLAR_LPAREN;
	v->a[77864] = actions(79);
	v->a[77865] = 1;
	v->a[77866] = anon_sym_BQUOTE;
	v->a[77867] = actions(3160);
	v->a[77868] = 1;
	v->a[77869] = sym__bare_dollar;
	v->a[77870] = actions(3164);
	v->a[77871] = 1;
	v->a[77872] = anon_sym_DOLLAR;
	v->a[77873] = actions(3158);
	v->a[77874] = 3;
	v->a[77875] = sym_raw_string;
	v->a[77876] = sym__comment_word;
	v->a[77877] = sym_word;
	v->a[77878] = state(354);
	v->a[77879] = 6;
	small_parse_table_3894(v);
}

void	small_parse_table_3894(t_small_parse_table_array *v)
{
	v->a[77880] = sym_arithmetic_expansion;
	v->a[77881] = sym_string;
	v->a[77882] = sym_number;
	v->a[77883] = sym_simple_expansion;
	v->a[77884] = sym_expansion;
	v->a[77885] = sym_command_substitution;
	v->a[77886] = 12;
	v->a[77887] = actions(3);
	v->a[77888] = 1;
	v->a[77889] = sym_comment;
	v->a[77890] = actions(779);
	v->a[77891] = 1;
	v->a[77892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77893] = actions(781);
	v->a[77894] = 1;
	v->a[77895] = anon_sym_DOLLAR;
	v->a[77896] = actions(783);
	v->a[77897] = 1;
	v->a[77898] = anon_sym_DQUOTE;
	v->a[77899] = actions(785);
	small_parse_table_3895(v);
}

/* EOF small_parse_table_778.c */
