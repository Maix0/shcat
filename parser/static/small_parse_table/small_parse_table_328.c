/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_328.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1640(t_small_parse_table_array *v)
{
	v->a[32800] = anon_sym_DQUOTE;
	v->a[32801] = sym_raw_string;
	v->a[32802] = sym_number;
	v->a[32803] = anon_sym_DOLLAR_LBRACE;
	v->a[32804] = anon_sym_DOLLAR_LPAREN;
	v->a[32805] = sym_word;
	v->a[32806] = 4;
	v->a[32807] = actions(3);
	v->a[32808] = 1;
	v->a[32809] = sym_comment;
	v->a[32810] = actions(1042);
	v->a[32811] = 1;
	v->a[32812] = anon_sym_BQUOTE;
	v->a[32813] = actions(1044);
	v->a[32814] = 1;
	v->a[32815] = sym_variable_name;
	v->a[32816] = actions(1040);
	v->a[32817] = 19;
	v->a[32818] = anon_sym_for;
	v->a[32819] = anon_sym_while;
	small_parse_table_1641(v);
}

void	small_parse_table_1641(t_small_parse_table_array *v)
{
	v->a[32820] = anon_sym_until;
	v->a[32821] = anon_sym_if;
	v->a[32822] = anon_sym_case;
	v->a[32823] = anon_sym_LPAREN;
	v->a[32824] = anon_sym_LBRACE;
	v->a[32825] = anon_sym_BANG;
	v->a[32826] = anon_sym_LT;
	v->a[32827] = anon_sym_GT;
	v->a[32828] = anon_sym_GT_GT;
	v->a[32829] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32830] = anon_sym_DOLLAR;
	v->a[32831] = anon_sym_DQUOTE;
	v->a[32832] = sym_raw_string;
	v->a[32833] = sym_number;
	v->a[32834] = anon_sym_DOLLAR_LBRACE;
	v->a[32835] = anon_sym_DOLLAR_LPAREN;
	v->a[32836] = sym_word;
	v->a[32837] = 5;
	v->a[32838] = actions(3);
	v->a[32839] = 1;
	small_parse_table_1642(v);
}

void	small_parse_table_1642(t_small_parse_table_array *v)
{
	v->a[32840] = sym_comment;
	v->a[32841] = actions(865);
	v->a[32842] = 1;
	v->a[32843] = sym_variable_name;
	v->a[32844] = actions(863);
	v->a[32845] = 2;
	v->a[32846] = aux_sym__simple_variable_name_token1;
	v->a[32847] = aux_sym__multiline_variable_name_token1;
	v->a[32848] = actions(861);
	v->a[32849] = 8;
	v->a[32850] = anon_sym_BANG;
	v->a[32851] = anon_sym_DASH;
	v->a[32852] = anon_sym_STAR;
	v->a[32853] = anon_sym_QMARK;
	v->a[32854] = anon_sym_DOLLAR;
	v->a[32855] = anon_sym_POUND;
	v->a[32856] = anon_sym_AT;
	v->a[32857] = anon_sym_0;
	v->a[32858] = actions(343);
	v->a[32859] = 9;
	small_parse_table_1643(v);
}

void	small_parse_table_1643(t_small_parse_table_array *v)
{
	v->a[32860] = aux_sym_heredoc_redirect_token1;
	v->a[32861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32862] = anon_sym_DQUOTE;
	v->a[32863] = sym_raw_string;
	v->a[32864] = sym_number;
	v->a[32865] = anon_sym_DOLLAR_LBRACE;
	v->a[32866] = anon_sym_DOLLAR_LPAREN;
	v->a[32867] = anon_sym_BQUOTE;
	v->a[32868] = sym_word;
	v->a[32869] = 6;
	v->a[32870] = actions(3);
	v->a[32871] = 1;
	v->a[32872] = sym_comment;
	v->a[32873] = actions(921);
	v->a[32874] = 1;
	v->a[32875] = sym__bare_dollar;
	v->a[32876] = actions(1297);
	v->a[32877] = 1;
	v->a[32878] = aux_sym_concatenation_token1;
	v->a[32879] = actions(1340);
	small_parse_table_1644(v);
}

void	small_parse_table_1644(t_small_parse_table_array *v)
{
	v->a[32880] = 1;
	v->a[32881] = sym__concat;
	v->a[32882] = state(605);
	v->a[32883] = 1;
	v->a[32884] = aux_sym_concatenation_repeat1;
	v->a[32885] = actions(923);
	v->a[32886] = 16;
	v->a[32887] = anon_sym_PIPE;
	v->a[32888] = anon_sym_AMP_AMP;
	v->a[32889] = anon_sym_PIPE_PIPE;
	v->a[32890] = anon_sym_LT;
	v->a[32891] = anon_sym_GT;
	v->a[32892] = anon_sym_GT_GT;
	v->a[32893] = anon_sym_LT_LT;
	v->a[32894] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32895] = anon_sym_DOLLAR;
	v->a[32896] = anon_sym_DQUOTE;
	v->a[32897] = sym_raw_string;
	v->a[32898] = sym_number;
	v->a[32899] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1645(v);
}

/* EOF small_parse_table_328.c */
