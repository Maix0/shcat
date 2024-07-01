/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_375.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1875(t_small_parse_table_array *v)
{
	v->a[37500] = sym_number;
	v->a[37501] = anon_sym_DOLLAR_LBRACE;
	v->a[37502] = anon_sym_DOLLAR_LPAREN;
	v->a[37503] = anon_sym_BQUOTE;
	v->a[37504] = sym_word;
	v->a[37505] = anon_sym_SEMI;
	v->a[37506] = 3;
	v->a[37507] = actions(3);
	v->a[37508] = 1;
	v->a[37509] = sym_comment;
	v->a[37510] = actions(1264);
	v->a[37511] = 3;
	v->a[37512] = sym_file_descriptor;
	v->a[37513] = sym__concat;
	v->a[37514] = sym__bare_dollar;
	v->a[37515] = actions(1266);
	v->a[37516] = 28;
	v->a[37517] = anon_sym_PIPE;
	v->a[37518] = anon_sym_RPAREN;
	v->a[37519] = anon_sym_SEMI_SEMI;
	small_parse_table_1876(v);
}

void	small_parse_table_1876(t_small_parse_table_array *v)
{
	v->a[37520] = anon_sym_AMP_AMP;
	v->a[37521] = anon_sym_PIPE_PIPE;
	v->a[37522] = anon_sym_LT;
	v->a[37523] = anon_sym_GT;
	v->a[37524] = anon_sym_GT_GT;
	v->a[37525] = anon_sym_LT_AMP;
	v->a[37526] = anon_sym_GT_AMP;
	v->a[37527] = anon_sym_GT_PIPE;
	v->a[37528] = anon_sym_LT_AMP_DASH;
	v->a[37529] = anon_sym_GT_AMP_DASH;
	v->a[37530] = anon_sym_LT_LT;
	v->a[37531] = anon_sym_LT_LT_DASH;
	v->a[37532] = aux_sym_heredoc_redirect_token1;
	v->a[37533] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37534] = anon_sym_AMP;
	v->a[37535] = aux_sym_concatenation_token1;
	v->a[37536] = anon_sym_DOLLAR;
	v->a[37537] = anon_sym_DQUOTE;
	v->a[37538] = sym_raw_string;
	v->a[37539] = sym_number;
	small_parse_table_1877(v);
}

void	small_parse_table_1877(t_small_parse_table_array *v)
{
	v->a[37540] = anon_sym_DOLLAR_LBRACE;
	v->a[37541] = anon_sym_DOLLAR_LPAREN;
	v->a[37542] = anon_sym_BQUOTE;
	v->a[37543] = sym_word;
	v->a[37544] = anon_sym_SEMI;
	v->a[37545] = 6;
	v->a[37546] = actions(3);
	v->a[37547] = 1;
	v->a[37548] = sym_comment;
	v->a[37549] = actions(1230);
	v->a[37550] = 1;
	v->a[37551] = aux_sym_concatenation_token1;
	v->a[37552] = actions(1232);
	v->a[37553] = 1;
	v->a[37554] = sym__concat;
	v->a[37555] = state(572);
	v->a[37556] = 1;
	v->a[37557] = aux_sym_concatenation_repeat1;
	v->a[37558] = actions(602);
	v->a[37559] = 2;
	small_parse_table_1878(v);
}

void	small_parse_table_1878(t_small_parse_table_array *v)
{
	v->a[37560] = sym_file_descriptor;
	v->a[37561] = sym_variable_name;
	v->a[37562] = actions(604);
	v->a[37563] = 26;
	v->a[37564] = anon_sym_PIPE;
	v->a[37565] = anon_sym_SEMI_SEMI;
	v->a[37566] = anon_sym_AMP_AMP;
	v->a[37567] = anon_sym_PIPE_PIPE;
	v->a[37568] = anon_sym_LT;
	v->a[37569] = anon_sym_GT;
	v->a[37570] = anon_sym_GT_GT;
	v->a[37571] = anon_sym_LT_AMP;
	v->a[37572] = anon_sym_GT_AMP;
	v->a[37573] = anon_sym_GT_PIPE;
	v->a[37574] = anon_sym_LT_AMP_DASH;
	v->a[37575] = anon_sym_GT_AMP_DASH;
	v->a[37576] = anon_sym_LT_LT;
	v->a[37577] = anon_sym_LT_LT_DASH;
	v->a[37578] = aux_sym_heredoc_redirect_token1;
	v->a[37579] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1879(v);
}

void	small_parse_table_1879(t_small_parse_table_array *v)
{
	v->a[37580] = anon_sym_AMP;
	v->a[37581] = anon_sym_DOLLAR;
	v->a[37582] = anon_sym_DQUOTE;
	v->a[37583] = sym_raw_string;
	v->a[37584] = sym_number;
	v->a[37585] = anon_sym_DOLLAR_LBRACE;
	v->a[37586] = anon_sym_DOLLAR_LPAREN;
	v->a[37587] = anon_sym_BQUOTE;
	v->a[37588] = sym_word;
	v->a[37589] = anon_sym_SEMI;
	v->a[37590] = 6;
	v->a[37591] = actions(3);
	v->a[37592] = 1;
	v->a[37593] = sym_comment;
	v->a[37594] = actions(379);
	v->a[37595] = 1;
	v->a[37596] = sym_file_descriptor;
	v->a[37597] = actions(1381);
	v->a[37598] = 1;
	v->a[37599] = sym_variable_name;
	small_parse_table_1880(v);
}

/* EOF small_parse_table_375.c */
