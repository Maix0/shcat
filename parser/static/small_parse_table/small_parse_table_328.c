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
	v->a[32802] = actions(682);
	v->a[32803] = 1;
	v->a[32804] = anon_sym_PIPE;
	v->a[32805] = actions(690);
	v->a[32806] = 1;
	v->a[32807] = sym_file_descriptor;
	v->a[32808] = actions(926);
	v->a[32809] = 1;
	v->a[32810] = sym_variable_name;
	v->a[32811] = state(1298);
	v->a[32812] = 2;
	v->a[32813] = sym_variable_assignment;
	v->a[32814] = aux_sym__variable_assignments_repeat1;
	v->a[32815] = state(1268);
	v->a[32816] = 3;
	v->a[32817] = sym_file_redirect;
	v->a[32818] = sym_heredoc_redirect;
	v->a[32819] = aux_sym_redirected_statement_repeat1;
	small_parse_table_1641(v);
}

void	small_parse_table_1641(t_small_parse_table_array *v)
{
	v->a[32820] = actions(935);
	v->a[32821] = 8;
	v->a[32822] = anon_sym_SEMI_SEMI;
	v->a[32823] = anon_sym_AMP_AMP;
	v->a[32824] = anon_sym_PIPE_PIPE;
	v->a[32825] = anon_sym_LT_LT;
	v->a[32826] = anon_sym_LT_LT_DASH;
	v->a[32827] = aux_sym_heredoc_redirect_token1;
	v->a[32828] = anon_sym_AMP;
	v->a[32829] = anon_sym_SEMI;
	v->a[32830] = actions(678);
	v->a[32831] = 17;
	v->a[32832] = anon_sym_LT;
	v->a[32833] = anon_sym_GT;
	v->a[32834] = anon_sym_GT_GT;
	v->a[32835] = anon_sym_LT_AMP;
	v->a[32836] = anon_sym_GT_AMP;
	v->a[32837] = anon_sym_GT_PIPE;
	v->a[32838] = anon_sym_LT_AMP_DASH;
	v->a[32839] = anon_sym_GT_AMP_DASH;
	small_parse_table_1642(v);
}

void	small_parse_table_1642(t_small_parse_table_array *v)
{
	v->a[32840] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32841] = anon_sym_DOLLAR;
	v->a[32842] = anon_sym_DQUOTE;
	v->a[32843] = sym_raw_string;
	v->a[32844] = sym_number;
	v->a[32845] = anon_sym_DOLLAR_LBRACE;
	v->a[32846] = anon_sym_DOLLAR_LPAREN;
	v->a[32847] = anon_sym_BQUOTE;
	v->a[32848] = sym_word;
	v->a[32849] = 6;
	v->a[32850] = actions(3);
	v->a[32851] = 1;
	v->a[32852] = sym_comment;
	v->a[32853] = actions(1230);
	v->a[32854] = 1;
	v->a[32855] = aux_sym_concatenation_token1;
	v->a[32856] = actions(1232);
	v->a[32857] = 1;
	v->a[32858] = sym__concat;
	v->a[32859] = state(440);
	small_parse_table_1643(v);
}

void	small_parse_table_1643(t_small_parse_table_array *v)
{
	v->a[32860] = 1;
	v->a[32861] = aux_sym_concatenation_repeat1;
	v->a[32862] = actions(602);
	v->a[32863] = 2;
	v->a[32864] = sym_file_descriptor;
	v->a[32865] = sym_variable_name;
	v->a[32866] = actions(604);
	v->a[32867] = 27;
	v->a[32868] = anon_sym_PIPE;
	v->a[32869] = anon_sym_RPAREN;
	v->a[32870] = anon_sym_SEMI_SEMI;
	v->a[32871] = anon_sym_AMP_AMP;
	v->a[32872] = anon_sym_PIPE_PIPE;
	v->a[32873] = anon_sym_LT;
	v->a[32874] = anon_sym_GT;
	v->a[32875] = anon_sym_GT_GT;
	v->a[32876] = anon_sym_LT_AMP;
	v->a[32877] = anon_sym_GT_AMP;
	v->a[32878] = anon_sym_GT_PIPE;
	v->a[32879] = anon_sym_LT_AMP_DASH;
	small_parse_table_1644(v);
}

void	small_parse_table_1644(t_small_parse_table_array *v)
{
	v->a[32880] = anon_sym_GT_AMP_DASH;
	v->a[32881] = anon_sym_LT_LT;
	v->a[32882] = anon_sym_LT_LT_DASH;
	v->a[32883] = aux_sym_heredoc_redirect_token1;
	v->a[32884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32885] = anon_sym_AMP;
	v->a[32886] = anon_sym_DOLLAR;
	v->a[32887] = anon_sym_DQUOTE;
	v->a[32888] = sym_raw_string;
	v->a[32889] = sym_number;
	v->a[32890] = anon_sym_DOLLAR_LBRACE;
	v->a[32891] = anon_sym_DOLLAR_LPAREN;
	v->a[32892] = anon_sym_BQUOTE;
	v->a[32893] = sym_word;
	v->a[32894] = anon_sym_SEMI;
	v->a[32895] = 6;
	v->a[32896] = actions(3);
	v->a[32897] = 1;
	v->a[32898] = sym_comment;
	v->a[32899] = actions(1236);
	small_parse_table_1645(v);
}

/* EOF small_parse_table_328.c */
