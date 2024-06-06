/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_345.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1725(t_small_parse_table_array *v)
{
	v->a[34500] = 5;
	v->a[34501] = sym_file_descriptor;
	v->a[34502] = sym_variable_name;
	v->a[34503] = sym_test_operator;
	v->a[34504] = sym__brace_start;
	v->a[34505] = aux_sym_heredoc_redirect_token1;
	v->a[34506] = actions(3250);
	v->a[34507] = 33;
	v->a[34508] = anon_sym_PIPE;
	v->a[34509] = anon_sym_SEMI_SEMI;
	v->a[34510] = anon_sym_SEMI_AMP;
	v->a[34511] = anon_sym_SEMI_SEMI_AMP;
	v->a[34512] = anon_sym_PIPE_AMP;
	v->a[34513] = anon_sym_AMP_AMP;
	v->a[34514] = anon_sym_PIPE_PIPE;
	v->a[34515] = anon_sym_LT;
	v->a[34516] = anon_sym_GT;
	v->a[34517] = anon_sym_GT_GT;
	v->a[34518] = anon_sym_AMP_GT;
	v->a[34519] = anon_sym_AMP_GT_GT;
	small_parse_table_1726(v);
}

void	small_parse_table_1726(t_small_parse_table_array *v)
{
	v->a[34520] = anon_sym_LT_AMP;
	v->a[34521] = anon_sym_GT_AMP;
	v->a[34522] = anon_sym_GT_PIPE;
	v->a[34523] = anon_sym_LT_AMP_DASH;
	v->a[34524] = anon_sym_GT_AMP_DASH;
	v->a[34525] = anon_sym_LT_LT;
	v->a[34526] = anon_sym_LT_LT_DASH;
	v->a[34527] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34528] = anon_sym_AMP;
	v->a[34529] = anon_sym_DOLLAR;
	v->a[34530] = anon_sym_DQUOTE;
	v->a[34531] = sym_raw_string;
	v->a[34532] = aux_sym_number_token1;
	v->a[34533] = aux_sym_number_token2;
	v->a[34534] = anon_sym_DOLLAR_LBRACE;
	v->a[34535] = anon_sym_DOLLAR_LPAREN;
	v->a[34536] = anon_sym_BQUOTE;
	v->a[34537] = anon_sym_DOLLAR_BQUOTE;
	v->a[34538] = aux_sym__simple_variable_name_token1;
	v->a[34539] = sym_word;
	small_parse_table_1727(v);
}

void	small_parse_table_1727(t_small_parse_table_array *v)
{
	v->a[34540] = anon_sym_SEMI;
	v->a[34541] = 6;
	v->a[34542] = actions(3);
	v->a[34543] = 1;
	v->a[34544] = sym_comment;
	v->a[34545] = actions(3450);
	v->a[34546] = 1;
	v->a[34547] = aux_sym_concatenation_token1;
	v->a[34548] = actions(3452);
	v->a[34549] = 1;
	v->a[34550] = sym__concat;
	v->a[34551] = state(895);
	v->a[34552] = 1;
	v->a[34553] = aux_sym_concatenation_repeat1;
	v->a[34554] = actions(3040);
	v->a[34555] = 6;
	v->a[34556] = sym_file_descriptor;
	v->a[34557] = sym_test_operator;
	v->a[34558] = sym__bare_dollar;
	v->a[34559] = sym__brace_start;
	small_parse_table_1728(v);
}

void	small_parse_table_1728(t_small_parse_table_array *v)
{
	v->a[34560] = ts_builtin_sym_end;
	v->a[34561] = aux_sym_heredoc_redirect_token1;
	v->a[34562] = actions(3038);
	v->a[34563] = 31;
	v->a[34564] = anon_sym_PIPE;
	v->a[34565] = anon_sym_SEMI_SEMI;
	v->a[34566] = anon_sym_PIPE_AMP;
	v->a[34567] = anon_sym_AMP_AMP;
	v->a[34568] = anon_sym_PIPE_PIPE;
	v->a[34569] = anon_sym_LT;
	v->a[34570] = anon_sym_GT;
	v->a[34571] = anon_sym_GT_GT;
	v->a[34572] = anon_sym_AMP_GT;
	v->a[34573] = anon_sym_AMP_GT_GT;
	v->a[34574] = anon_sym_LT_AMP;
	v->a[34575] = anon_sym_GT_AMP;
	v->a[34576] = anon_sym_GT_PIPE;
	v->a[34577] = anon_sym_LT_AMP_DASH;
	v->a[34578] = anon_sym_GT_AMP_DASH;
	v->a[34579] = anon_sym_LT_LT;
	small_parse_table_1729(v);
}

void	small_parse_table_1729(t_small_parse_table_array *v)
{
	v->a[34580] = anon_sym_LT_LT_DASH;
	v->a[34581] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34582] = anon_sym_AMP;
	v->a[34583] = anon_sym_DOLLAR;
	v->a[34584] = sym__special_character;
	v->a[34585] = anon_sym_DQUOTE;
	v->a[34586] = sym_raw_string;
	v->a[34587] = aux_sym_number_token1;
	v->a[34588] = aux_sym_number_token2;
	v->a[34589] = anon_sym_DOLLAR_LBRACE;
	v->a[34590] = anon_sym_DOLLAR_LPAREN;
	v->a[34591] = anon_sym_BQUOTE;
	v->a[34592] = anon_sym_DOLLAR_BQUOTE;
	v->a[34593] = sym_word;
	v->a[34594] = anon_sym_SEMI;
	v->a[34595] = 6;
	v->a[34596] = actions(3);
	v->a[34597] = 1;
	v->a[34598] = sym_comment;
	v->a[34599] = actions(3454);
	small_parse_table_1730(v);
}

/* EOF small_parse_table_345.c */
