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
	v->a[32800] = 1;
	v->a[32801] = sym_comment;
	v->a[32802] = actions(483);
	v->a[32803] = 2;
	v->a[32804] = sym__concat;
	v->a[32805] = ts_builtin_sym_end;
	v->a[32806] = actions(481);
	v->a[32807] = 25;
	v->a[32808] = anon_sym_PIPE;
	v->a[32809] = anon_sym_SEMI_SEMI;
	v->a[32810] = anon_sym_AMP_AMP;
	v->a[32811] = anon_sym_PIPE_PIPE;
	v->a[32812] = anon_sym_LT;
	v->a[32813] = anon_sym_GT;
	v->a[32814] = anon_sym_GT_GT;
	v->a[32815] = anon_sym_LT_AMP;
	v->a[32816] = anon_sym_GT_AMP;
	v->a[32817] = anon_sym_GT_PIPE;
	v->a[32818] = anon_sym_LT_GT;
	v->a[32819] = anon_sym_LT_LT;
	small_parse_table_1641(v);
}

void	small_parse_table_1641(t_small_parse_table_array *v)
{
	v->a[32820] = anon_sym_LT_LT_DASH;
	v->a[32821] = aux_sym_heredoc_redirect_token1;
	v->a[32822] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32823] = aux_sym_concatenation_token1;
	v->a[32824] = anon_sym_DOLLAR;
	v->a[32825] = anon_sym_DQUOTE;
	v->a[32826] = sym_raw_string;
	v->a[32827] = sym_number;
	v->a[32828] = anon_sym_DOLLAR_LBRACE;
	v->a[32829] = anon_sym_DOLLAR_LPAREN;
	v->a[32830] = anon_sym_BQUOTE;
	v->a[32831] = sym_word;
	v->a[32832] = anon_sym_SEMI;
	v->a[32833] = 3;
	v->a[32834] = actions(3);
	v->a[32835] = 1;
	v->a[32836] = sym_comment;
	v->a[32837] = actions(441);
	v->a[32838] = 2;
	v->a[32839] = sym__concat;
	small_parse_table_1642(v);
}

void	small_parse_table_1642(t_small_parse_table_array *v)
{
	v->a[32840] = ts_builtin_sym_end;
	v->a[32841] = actions(439);
	v->a[32842] = 25;
	v->a[32843] = anon_sym_PIPE;
	v->a[32844] = anon_sym_SEMI_SEMI;
	v->a[32845] = anon_sym_AMP_AMP;
	v->a[32846] = anon_sym_PIPE_PIPE;
	v->a[32847] = anon_sym_LT;
	v->a[32848] = anon_sym_GT;
	v->a[32849] = anon_sym_GT_GT;
	v->a[32850] = anon_sym_LT_AMP;
	v->a[32851] = anon_sym_GT_AMP;
	v->a[32852] = anon_sym_GT_PIPE;
	v->a[32853] = anon_sym_LT_GT;
	v->a[32854] = anon_sym_LT_LT;
	v->a[32855] = anon_sym_LT_LT_DASH;
	v->a[32856] = aux_sym_heredoc_redirect_token1;
	v->a[32857] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32858] = aux_sym_concatenation_token1;
	v->a[32859] = anon_sym_DOLLAR;
	small_parse_table_1643(v);
}

void	small_parse_table_1643(t_small_parse_table_array *v)
{
	v->a[32860] = anon_sym_DQUOTE;
	v->a[32861] = sym_raw_string;
	v->a[32862] = sym_number;
	v->a[32863] = anon_sym_DOLLAR_LBRACE;
	v->a[32864] = anon_sym_DOLLAR_LPAREN;
	v->a[32865] = anon_sym_BQUOTE;
	v->a[32866] = sym_word;
	v->a[32867] = anon_sym_SEMI;
	v->a[32868] = 5;
	v->a[32869] = actions(3);
	v->a[32870] = 1;
	v->a[32871] = sym_comment;
	v->a[32872] = actions(1255);
	v->a[32873] = 1;
	v->a[32874] = sym_variable_name;
	v->a[32875] = actions(1253);
	v->a[32876] = 2;
	v->a[32877] = aux_sym__simple_variable_name_token1;
	v->a[32878] = aux_sym__multiline_variable_name_token1;
	v->a[32879] = actions(1251);
	small_parse_table_1644(v);
}

void	small_parse_table_1644(t_small_parse_table_array *v)
{
	v->a[32880] = 8;
	v->a[32881] = anon_sym_BANG;
	v->a[32882] = anon_sym_DASH;
	v->a[32883] = anon_sym_STAR;
	v->a[32884] = anon_sym_QMARK;
	v->a[32885] = anon_sym_DOLLAR;
	v->a[32886] = anon_sym_POUND;
	v->a[32887] = anon_sym_AT;
	v->a[32888] = anon_sym_0;
	v->a[32889] = actions(345);
	v->a[32890] = 16;
	v->a[32891] = anon_sym_PIPE;
	v->a[32892] = anon_sym_SEMI_SEMI;
	v->a[32893] = anon_sym_AMP_AMP;
	v->a[32894] = anon_sym_PIPE_PIPE;
	v->a[32895] = anon_sym_LT;
	v->a[32896] = anon_sym_GT;
	v->a[32897] = anon_sym_GT_GT;
	v->a[32898] = anon_sym_LT_AMP;
	v->a[32899] = anon_sym_GT_AMP;
	small_parse_table_1645(v);
}

/* EOF small_parse_table_328.c */
