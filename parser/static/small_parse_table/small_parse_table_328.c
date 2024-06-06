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
	v->a[32800] = aux_sym_concatenation_token1;
	v->a[32801] = anon_sym_DOLLAR;
	v->a[32802] = sym__special_character;
	v->a[32803] = anon_sym_DQUOTE;
	v->a[32804] = sym_raw_string;
	v->a[32805] = aux_sym_number_token1;
	v->a[32806] = aux_sym_number_token2;
	v->a[32807] = anon_sym_DOLLAR_LBRACE;
	v->a[32808] = anon_sym_DOLLAR_LPAREN;
	v->a[32809] = anon_sym_BQUOTE;
	v->a[32810] = anon_sym_DOLLAR_BQUOTE;
	v->a[32811] = sym_word;
	v->a[32812] = anon_sym_SEMI;
	v->a[32813] = 3;
	v->a[32814] = actions(3);
	v->a[32815] = 1;
	v->a[32816] = sym_comment;
	v->a[32817] = actions(3125);
	v->a[32818] = 6;
	v->a[32819] = sym_file_descriptor;
	small_parse_table_1641(v);
}

void	small_parse_table_1641(t_small_parse_table_array *v)
{
	v->a[32820] = sym__concat;
	v->a[32821] = sym_variable_name;
	v->a[32822] = sym_test_operator;
	v->a[32823] = sym__brace_start;
	v->a[32824] = aux_sym_heredoc_redirect_token1;
	v->a[32825] = actions(3123);
	v->a[32826] = 35;
	v->a[32827] = anon_sym_esac;
	v->a[32828] = anon_sym_PIPE;
	v->a[32829] = anon_sym_SEMI_SEMI;
	v->a[32830] = anon_sym_SEMI_AMP;
	v->a[32831] = anon_sym_SEMI_SEMI_AMP;
	v->a[32832] = anon_sym_PIPE_AMP;
	v->a[32833] = anon_sym_AMP_AMP;
	v->a[32834] = anon_sym_PIPE_PIPE;
	v->a[32835] = anon_sym_LT;
	v->a[32836] = anon_sym_GT;
	v->a[32837] = anon_sym_GT_GT;
	v->a[32838] = anon_sym_AMP_GT;
	v->a[32839] = anon_sym_AMP_GT_GT;
	small_parse_table_1642(v);
}

void	small_parse_table_1642(t_small_parse_table_array *v)
{
	v->a[32840] = anon_sym_LT_AMP;
	v->a[32841] = anon_sym_GT_AMP;
	v->a[32842] = anon_sym_GT_PIPE;
	v->a[32843] = anon_sym_LT_AMP_DASH;
	v->a[32844] = anon_sym_GT_AMP_DASH;
	v->a[32845] = anon_sym_LT_LT;
	v->a[32846] = anon_sym_LT_LT_DASH;
	v->a[32847] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32848] = anon_sym_AMP;
	v->a[32849] = aux_sym_concatenation_token1;
	v->a[32850] = anon_sym_DOLLAR;
	v->a[32851] = sym__special_character;
	v->a[32852] = anon_sym_DQUOTE;
	v->a[32853] = sym_raw_string;
	v->a[32854] = aux_sym_number_token1;
	v->a[32855] = aux_sym_number_token2;
	v->a[32856] = anon_sym_DOLLAR_LBRACE;
	v->a[32857] = anon_sym_DOLLAR_LPAREN;
	v->a[32858] = anon_sym_BQUOTE;
	v->a[32859] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1643(v);
}

void	small_parse_table_1643(t_small_parse_table_array *v)
{
	v->a[32860] = sym_word;
	v->a[32861] = anon_sym_SEMI;
	v->a[32862] = 8;
	v->a[32863] = actions(3);
	v->a[32864] = 1;
	v->a[32865] = sym_comment;
	v->a[32866] = actions(3368);
	v->a[32867] = 1;
	v->a[32868] = sym_variable_name;
	v->a[32869] = actions(2526);
	v->a[32870] = 2;
	v->a[32871] = sym_test_operator;
	v->a[32872] = sym__brace_start;
	v->a[32873] = actions(2638);
	v->a[32874] = 2;
	v->a[32875] = sym_file_descriptor;
	v->a[32876] = aux_sym_heredoc_redirect_token1;
	v->a[32877] = state(2139);
	v->a[32878] = 2;
	v->a[32879] = sym_variable_assignment;
	small_parse_table_1644(v);
}

void	small_parse_table_1644(t_small_parse_table_array *v)
{
	v->a[32880] = aux_sym_variable_assignments_repeat1;
	v->a[32881] = state(2140);
	v->a[32882] = 3;
	v->a[32883] = sym_file_redirect;
	v->a[32884] = sym_heredoc_redirect;
	v->a[32885] = aux_sym_redirected_statement_repeat1;
	v->a[32886] = actions(2512);
	v->a[32887] = 11;
	v->a[32888] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32889] = anon_sym_DOLLAR;
	v->a[32890] = sym__special_character;
	v->a[32891] = anon_sym_DQUOTE;
	v->a[32892] = sym_raw_string;
	v->a[32893] = aux_sym_number_token1;
	v->a[32894] = aux_sym_number_token2;
	v->a[32895] = anon_sym_DOLLAR_LBRACE;
	v->a[32896] = anon_sym_DOLLAR_LPAREN;
	v->a[32897] = anon_sym_DOLLAR_BQUOTE;
	v->a[32898] = sym_word;
	v->a[32899] = actions(2516);
	small_parse_table_1645(v);
}

/* EOF small_parse_table_328.c */
