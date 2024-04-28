/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1200.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6000(t_small_parse_table_array *v)
{
	v->a[120000] = aux_sym_number_token2;
	v->a[120001] = anon_sym_DOLLAR_LPAREN;
	v->a[120002] = anon_sym_BQUOTE;
	v->a[120003] = sym_word;
	v->a[120004] = actions(1288);
	v->a[120005] = 25;
	v->a[120006] = sym_file_descriptor;
	v->a[120007] = sym_variable_name;
	v->a[120008] = sym_test_operator;
	v->a[120009] = sym__brace_start;
	v->a[120010] = anon_sym_LPAREN_LPAREN;
	v->a[120011] = anon_sym_PIPE_PIPE;
	v->a[120012] = anon_sym_AMP_AMP;
	v->a[120013] = anon_sym_GT_GT;
	v->a[120014] = anon_sym_PIPE_AMP;
	v->a[120015] = anon_sym_RBRACK;
	v->a[120016] = anon_sym_AMP_GT_GT;
	v->a[120017] = anon_sym_GT_PIPE;
	v->a[120018] = anon_sym_LT_AMP_DASH;
	v->a[120019] = anon_sym_GT_AMP_DASH;
	small_parse_table_6001(v);
}

void	small_parse_table_6001(t_small_parse_table_array *v)
{
	v->a[120020] = anon_sym_LT_LT_DASH;
	v->a[120021] = anon_sym_LT_LT_LT;
	v->a[120022] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120023] = anon_sym_DOLLAR_LBRACK;
	v->a[120024] = anon_sym_DQUOTE;
	v->a[120025] = sym_raw_string;
	v->a[120026] = sym_ansi_c_string;
	v->a[120027] = anon_sym_DOLLAR_LBRACE;
	v->a[120028] = anon_sym_DOLLAR_BQUOTE;
	v->a[120029] = anon_sym_LT_LPAREN;
	v->a[120030] = anon_sym_GT_LPAREN;
	v->a[120031] = 3;
	v->a[120032] = actions(71);
	v->a[120033] = 1;
	v->a[120034] = sym_comment;
	v->a[120035] = actions(1300);
	v->a[120036] = 15;
	v->a[120037] = anon_sym_PIPE;
	v->a[120038] = anon_sym_EQ_EQ;
	v->a[120039] = anon_sym_LT;
	small_parse_table_6002(v);
}

void	small_parse_table_6002(t_small_parse_table_array *v)
{
	v->a[120040] = anon_sym_GT;
	v->a[120041] = anon_sym_LT_LT;
	v->a[120042] = anon_sym_EQ_TILDE;
	v->a[120043] = anon_sym_AMP_GT;
	v->a[120044] = anon_sym_LT_AMP;
	v->a[120045] = anon_sym_GT_AMP;
	v->a[120046] = anon_sym_DOLLAR;
	v->a[120047] = aux_sym_number_token1;
	v->a[120048] = aux_sym_number_token2;
	v->a[120049] = anon_sym_DOLLAR_LPAREN;
	v->a[120050] = anon_sym_BQUOTE;
	v->a[120051] = sym_word;
	v->a[120052] = actions(1302);
	v->a[120053] = 27;
	v->a[120054] = sym_file_descriptor;
	v->a[120055] = sym__concat;
	v->a[120056] = sym_test_operator;
	v->a[120057] = sym__bare_dollar;
	v->a[120058] = sym__brace_start;
	v->a[120059] = anon_sym_LPAREN_LPAREN;
	small_parse_table_6003(v);
}

void	small_parse_table_6003(t_small_parse_table_array *v)
{
	v->a[120060] = anon_sym_PIPE_PIPE;
	v->a[120061] = anon_sym_AMP_AMP;
	v->a[120062] = anon_sym_GT_GT;
	v->a[120063] = anon_sym_PIPE_AMP;
	v->a[120064] = anon_sym_AMP_GT_GT;
	v->a[120065] = anon_sym_GT_PIPE;
	v->a[120066] = anon_sym_LT_AMP_DASH;
	v->a[120067] = anon_sym_GT_AMP_DASH;
	v->a[120068] = anon_sym_LT_LT_DASH;
	v->a[120069] = anon_sym_LT_LT_LT;
	v->a[120070] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120071] = anon_sym_DOLLAR_LBRACK;
	v->a[120072] = aux_sym_concatenation_token1;
	v->a[120073] = sym__special_character;
	v->a[120074] = anon_sym_DQUOTE;
	v->a[120075] = sym_raw_string;
	v->a[120076] = sym_ansi_c_string;
	v->a[120077] = anon_sym_DOLLAR_LBRACE;
	v->a[120078] = anon_sym_DOLLAR_BQUOTE;
	v->a[120079] = anon_sym_LT_LPAREN;
	small_parse_table_6004(v);
}

void	small_parse_table_6004(t_small_parse_table_array *v)
{
	v->a[120080] = anon_sym_GT_LPAREN;
	v->a[120081] = 3;
	v->a[120082] = actions(71);
	v->a[120083] = 1;
	v->a[120084] = sym_comment;
	v->a[120085] = actions(1304);
	v->a[120086] = 15;
	v->a[120087] = anon_sym_PIPE;
	v->a[120088] = anon_sym_EQ_EQ;
	v->a[120089] = anon_sym_LT;
	v->a[120090] = anon_sym_GT;
	v->a[120091] = anon_sym_LT_LT;
	v->a[120092] = anon_sym_EQ_TILDE;
	v->a[120093] = anon_sym_AMP_GT;
	v->a[120094] = anon_sym_LT_AMP;
	v->a[120095] = anon_sym_GT_AMP;
	v->a[120096] = anon_sym_DOLLAR;
	v->a[120097] = aux_sym_number_token1;
	v->a[120098] = aux_sym_number_token2;
	v->a[120099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6005(v);
}

/* EOF small_parse_table_1200.c */
