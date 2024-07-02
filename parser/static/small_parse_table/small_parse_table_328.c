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
	v->a[32800] = 26;
	v->a[32801] = anon_sym_PIPE;
	v->a[32802] = anon_sym_RPAREN;
	v->a[32803] = anon_sym_SEMI_SEMI;
	v->a[32804] = anon_sym_AMP_AMP;
	v->a[32805] = anon_sym_PIPE_PIPE;
	v->a[32806] = anon_sym_LT;
	v->a[32807] = anon_sym_GT;
	v->a[32808] = anon_sym_GT_GT;
	v->a[32809] = anon_sym_LT_AMP;
	v->a[32810] = anon_sym_GT_AMP;
	v->a[32811] = anon_sym_GT_PIPE;
	v->a[32812] = anon_sym_LT_GT;
	v->a[32813] = anon_sym_LT_LT;
	v->a[32814] = anon_sym_LT_LT_DASH;
	v->a[32815] = aux_sym_heredoc_redirect_token1;
	v->a[32816] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32817] = anon_sym_AMP;
	v->a[32818] = anon_sym_DOLLAR;
	v->a[32819] = anon_sym_DQUOTE;
	small_parse_table_1641(v);
}

void	small_parse_table_1641(t_small_parse_table_array *v)
{
	v->a[32820] = sym_raw_string;
	v->a[32821] = sym_number;
	v->a[32822] = anon_sym_DOLLAR_LBRACE;
	v->a[32823] = anon_sym_DOLLAR_LPAREN;
	v->a[32824] = anon_sym_BQUOTE;
	v->a[32825] = sym_word;
	v->a[32826] = anon_sym_SEMI;
	v->a[32827] = 6;
	v->a[32828] = actions(3);
	v->a[32829] = 1;
	v->a[32830] = sym_comment;
	v->a[32831] = actions(1174);
	v->a[32832] = 1;
	v->a[32833] = aux_sym_concatenation_token1;
	v->a[32834] = actions(1240);
	v->a[32835] = 1;
	v->a[32836] = sym__concat;
	v->a[32837] = state(382);
	v->a[32838] = 1;
	v->a[32839] = aux_sym_concatenation_repeat1;
	small_parse_table_1642(v);
}

void	small_parse_table_1642(t_small_parse_table_array *v)
{
	v->a[32840] = actions(1229);
	v->a[32841] = 3;
	v->a[32842] = sym_file_descriptor;
	v->a[32843] = sym__bare_dollar;
	v->a[32844] = ts_builtin_sym_end;
	v->a[32845] = actions(1227);
	v->a[32846] = 25;
	v->a[32847] = anon_sym_PIPE;
	v->a[32848] = anon_sym_SEMI_SEMI;
	v->a[32849] = anon_sym_AMP_AMP;
	v->a[32850] = anon_sym_PIPE_PIPE;
	v->a[32851] = anon_sym_LT;
	v->a[32852] = anon_sym_GT;
	v->a[32853] = anon_sym_GT_GT;
	v->a[32854] = anon_sym_LT_AMP;
	v->a[32855] = anon_sym_GT_AMP;
	v->a[32856] = anon_sym_GT_PIPE;
	v->a[32857] = anon_sym_LT_GT;
	v->a[32858] = anon_sym_LT_LT;
	v->a[32859] = anon_sym_LT_LT_DASH;
	small_parse_table_1643(v);
}

void	small_parse_table_1643(t_small_parse_table_array *v)
{
	v->a[32860] = aux_sym_heredoc_redirect_token1;
	v->a[32861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32862] = anon_sym_AMP;
	v->a[32863] = anon_sym_DOLLAR;
	v->a[32864] = anon_sym_DQUOTE;
	v->a[32865] = sym_raw_string;
	v->a[32866] = sym_number;
	v->a[32867] = anon_sym_DOLLAR_LBRACE;
	v->a[32868] = anon_sym_DOLLAR_LPAREN;
	v->a[32869] = anon_sym_BQUOTE;
	v->a[32870] = sym_word;
	v->a[32871] = anon_sym_SEMI;
	v->a[32872] = 14;
	v->a[32873] = actions(3);
	v->a[32874] = 1;
	v->a[32875] = sym_comment;
	v->a[32876] = actions(547);
	v->a[32877] = 1;
	v->a[32878] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32879] = actions(550);
	small_parse_table_1644(v);
}

void	small_parse_table_1644(t_small_parse_table_array *v)
{
	v->a[32880] = 1;
	v->a[32881] = anon_sym_DOLLAR;
	v->a[32882] = actions(553);
	v->a[32883] = 1;
	v->a[32884] = anon_sym_DQUOTE;
	v->a[32885] = actions(556);
	v->a[32886] = 1;
	v->a[32887] = anon_sym_DOLLAR_LBRACE;
	v->a[32888] = actions(559);
	v->a[32889] = 1;
	v->a[32890] = anon_sym_DOLLAR_LPAREN;
	v->a[32891] = actions(562);
	v->a[32892] = 1;
	v->a[32893] = anon_sym_BQUOTE;
	v->a[32894] = actions(565);
	v->a[32895] = 1;
	v->a[32896] = sym_file_descriptor;
	v->a[32897] = actions(567);
	v->a[32898] = 1;
	v->a[32899] = sym__bare_dollar;
	small_parse_table_1645(v);
}

/* EOF small_parse_table_328.c */
