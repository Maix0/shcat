/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_335.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1675(t_small_parse_table_array *v)
{
	v->a[33500] = anon_sym_DQUOTE;
	v->a[33501] = sym_raw_string;
	v->a[33502] = sym_ansi_c_string;
	v->a[33503] = aux_sym_number_token1;
	v->a[33504] = aux_sym_number_token2;
	v->a[33505] = anon_sym_DOLLAR_LBRACE;
	v->a[33506] = anon_sym_DOLLAR_LPAREN;
	v->a[33507] = anon_sym_BQUOTE;
	v->a[33508] = anon_sym_DOLLAR_BQUOTE;
	v->a[33509] = anon_sym_LT_LPAREN;
	v->a[33510] = anon_sym_GT_LPAREN;
	v->a[33511] = sym_word;
	v->a[33512] = 13;
	v->a[33513] = actions(3);
	v->a[33514] = 1;
	v->a[33515] = sym_comment;
	v->a[33516] = actions(4686);
	v->a[33517] = 1;
	v->a[33518] = ts_builtin_sym_end;
	v->a[33519] = actions(4694);
	small_parse_table_1676(v);
}

void	small_parse_table_1676(t_small_parse_table_array *v)
{
	v->a[33520] = 1;
	v->a[33521] = aux_sym_heredoc_redirect_token1;
	v->a[33522] = actions(4696);
	v->a[33523] = 1;
	v->a[33524] = sym_variable_name;
	v->a[33525] = state(6757);
	v->a[33526] = 1;
	v->a[33527] = sym_subscript;
	v->a[33528] = actions(4253);
	v->a[33529] = 2;
	v->a[33530] = anon_sym_PIPE;
	v->a[33531] = anon_sym_PIPE_AMP;
	v->a[33532] = actions(4690);
	v->a[33533] = 2;
	v->a[33534] = anon_sym_PIPE_PIPE;
	v->a[33535] = anon_sym_AMP_AMP;
	v->a[33536] = actions(4692);
	v->a[33537] = 2;
	v->a[33538] = anon_sym_LT_LT;
	v->a[33539] = anon_sym_LT_LT_DASH;
	small_parse_table_1677(v);
}

void	small_parse_table_1677(t_small_parse_table_array *v)
{
	v->a[33540] = state(4574);
	v->a[33541] = 2;
	v->a[33542] = sym_variable_assignment;
	v->a[33543] = aux_sym_variable_assignments_repeat1;
	v->a[33544] = actions(4261);
	v->a[33545] = 3;
	v->a[33546] = sym_file_descriptor;
	v->a[33547] = sym_test_operator;
	v->a[33548] = sym__brace_start;
	v->a[33549] = actions(4688);
	v->a[33550] = 3;
	v->a[33551] = anon_sym_SEMI;
	v->a[33552] = anon_sym_AMP;
	v->a[33553] = anon_sym_SEMI_SEMI;
	v->a[33554] = state(4650);
	v->a[33555] = 3;
	v->a[33556] = sym_file_redirect;
	v->a[33557] = sym_heredoc_redirect;
	v->a[33558] = aux_sym_redirected_statement_repeat1;
	v->a[33559] = actions(4247);
	small_parse_table_1678(v);
}

void	small_parse_table_1678(t_small_parse_table_array *v)
{
	v->a[33560] = 28;
	v->a[33561] = anon_sym_LPAREN_LPAREN;
	v->a[33562] = anon_sym_LT;
	v->a[33563] = anon_sym_GT;
	v->a[33564] = anon_sym_GT_GT;
	v->a[33565] = anon_sym_AMP_GT;
	v->a[33566] = anon_sym_AMP_GT_GT;
	v->a[33567] = anon_sym_LT_AMP;
	v->a[33568] = anon_sym_GT_AMP;
	v->a[33569] = anon_sym_GT_PIPE;
	v->a[33570] = anon_sym_LT_AMP_DASH;
	v->a[33571] = anon_sym_GT_AMP_DASH;
	v->a[33572] = anon_sym_LT_LT_LT;
	v->a[33573] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33574] = anon_sym_DOLLAR_LBRACK;
	v->a[33575] = anon_sym_DOLLAR;
	v->a[33576] = sym__special_character;
	v->a[33577] = anon_sym_DQUOTE;
	v->a[33578] = sym_raw_string;
	v->a[33579] = sym_ansi_c_string;
	small_parse_table_1679(v);
}

void	small_parse_table_1679(t_small_parse_table_array *v)
{
	v->a[33580] = aux_sym_number_token1;
	v->a[33581] = aux_sym_number_token2;
	v->a[33582] = anon_sym_DOLLAR_LBRACE;
	v->a[33583] = anon_sym_DOLLAR_LPAREN;
	v->a[33584] = anon_sym_BQUOTE;
	v->a[33585] = anon_sym_DOLLAR_BQUOTE;
	v->a[33586] = anon_sym_LT_LPAREN;
	v->a[33587] = anon_sym_GT_LPAREN;
	v->a[33588] = sym_word;
	v->a[33589] = 3;
	v->a[33590] = actions(3);
	v->a[33591] = 1;
	v->a[33592] = sym_comment;
	v->a[33593] = actions(1322);
	v->a[33594] = 6;
	v->a[33595] = sym_file_descriptor;
	v->a[33596] = sym__concat;
	v->a[33597] = sym_test_operator;
	v->a[33598] = sym__bare_dollar;
	v->a[33599] = sym__brace_start;
	small_parse_table_1680(v);
}

/* EOF small_parse_table_335.c */
