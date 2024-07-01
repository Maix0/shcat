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
	v->a[33500] = 1;
	v->a[33501] = anon_sym_DOLLAR_LBRACE;
	v->a[33502] = actions(186);
	v->a[33503] = 1;
	v->a[33504] = anon_sym_DOLLAR_LPAREN;
	v->a[33505] = actions(188);
	v->a[33506] = 1;
	v->a[33507] = anon_sym_BQUOTE;
	v->a[33508] = actions(192);
	v->a[33509] = 1;
	v->a[33510] = sym_variable_name;
	v->a[33511] = actions(1256);
	v->a[33512] = 1;
	v->a[33513] = sym_file_descriptor;
	v->a[33514] = state(186);
	v->a[33515] = 1;
	v->a[33516] = sym_command_name;
	v->a[33517] = state(636);
	v->a[33518] = 1;
	v->a[33519] = sym_concatenation;
	small_parse_table_1676(v);
}

void	small_parse_table_1676(t_small_parse_table_array *v)
{
	v->a[33520] = state(676);
	v->a[33521] = 1;
	v->a[33522] = sym_variable_assignment;
	v->a[33523] = state(752);
	v->a[33524] = 1;
	v->a[33525] = aux_sym_command_repeat1;
	v->a[33526] = state(1383);
	v->a[33527] = 1;
	v->a[33528] = sym_subshell;
	v->a[33529] = state(1384);
	v->a[33530] = 1;
	v->a[33531] = sym_command;
	v->a[33532] = state(1385);
	v->a[33533] = 1;
	v->a[33534] = sym_file_redirect;
	v->a[33535] = actions(1254);
	v->a[33536] = 2;
	v->a[33537] = anon_sym_LT_AMP_DASH;
	v->a[33538] = anon_sym_GT_AMP_DASH;
	v->a[33539] = actions(182);
	small_parse_table_1677(v);
}

void	small_parse_table_1677(t_small_parse_table_array *v)
{
	v->a[33540] = 3;
	v->a[33541] = sym_raw_string;
	v->a[33542] = sym_number;
	v->a[33543] = sym_word;
	v->a[33544] = state(385);
	v->a[33545] = 5;
	v->a[33546] = sym_arithmetic_expansion;
	v->a[33547] = sym_string;
	v->a[33548] = sym_simple_expansion;
	v->a[33549] = sym_expansion;
	v->a[33550] = sym_command_substitution;
	v->a[33551] = actions(1252);
	v->a[33552] = 6;
	v->a[33553] = anon_sym_LT;
	v->a[33554] = anon_sym_GT;
	v->a[33555] = anon_sym_GT_GT;
	v->a[33556] = anon_sym_LT_AMP;
	v->a[33557] = anon_sym_GT_AMP;
	v->a[33558] = anon_sym_GT_PIPE;
	v->a[33559] = 3;
	small_parse_table_1678(v);
}

void	small_parse_table_1678(t_small_parse_table_array *v)
{
	v->a[33560] = actions(3);
	v->a[33561] = 1;
	v->a[33562] = sym_comment;
	v->a[33563] = actions(1009);
	v->a[33564] = 4;
	v->a[33565] = sym_file_descriptor;
	v->a[33566] = sym__concat;
	v->a[33567] = sym__bare_dollar;
	v->a[33568] = ts_builtin_sym_end;
	v->a[33569] = actions(1007);
	v->a[33570] = 28;
	v->a[33571] = anon_sym_LPAREN;
	v->a[33572] = anon_sym_PIPE;
	v->a[33573] = anon_sym_SEMI_SEMI;
	v->a[33574] = anon_sym_AMP_AMP;
	v->a[33575] = anon_sym_PIPE_PIPE;
	v->a[33576] = anon_sym_LT;
	v->a[33577] = anon_sym_GT;
	v->a[33578] = anon_sym_GT_GT;
	v->a[33579] = anon_sym_LT_AMP;
	small_parse_table_1679(v);
}

void	small_parse_table_1679(t_small_parse_table_array *v)
{
	v->a[33580] = anon_sym_GT_AMP;
	v->a[33581] = anon_sym_GT_PIPE;
	v->a[33582] = anon_sym_LT_AMP_DASH;
	v->a[33583] = anon_sym_GT_AMP_DASH;
	v->a[33584] = anon_sym_LT_LT;
	v->a[33585] = anon_sym_LT_LT_DASH;
	v->a[33586] = aux_sym_heredoc_redirect_token1;
	v->a[33587] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33588] = anon_sym_AMP;
	v->a[33589] = aux_sym_concatenation_token1;
	v->a[33590] = anon_sym_DOLLAR;
	v->a[33591] = anon_sym_DQUOTE;
	v->a[33592] = sym_raw_string;
	v->a[33593] = sym_number;
	v->a[33594] = anon_sym_DOLLAR_LBRACE;
	v->a[33595] = anon_sym_DOLLAR_LPAREN;
	v->a[33596] = anon_sym_BQUOTE;
	v->a[33597] = sym_word;
	v->a[33598] = anon_sym_SEMI;
	v->a[33599] = 3;
	small_parse_table_1680(v);
}

/* EOF small_parse_table_335.c */
