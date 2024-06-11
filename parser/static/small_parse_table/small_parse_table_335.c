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
	v->a[33500] = anon_sym_GT_PIPE;
	v->a[33501] = anon_sym_LT_AMP_DASH;
	v->a[33502] = anon_sym_GT_AMP_DASH;
	v->a[33503] = anon_sym_LT_LT;
	v->a[33504] = anon_sym_LT_LT_DASH;
	v->a[33505] = aux_sym_heredoc_redirect_token1;
	v->a[33506] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33507] = anon_sym_AMP;
	v->a[33508] = aux_sym_concatenation_token1;
	v->a[33509] = anon_sym_DOLLAR;
	v->a[33510] = anon_sym_DQUOTE;
	v->a[33511] = sym_raw_string;
	v->a[33512] = sym_number;
	v->a[33513] = anon_sym_DOLLAR_LBRACE;
	v->a[33514] = anon_sym_DOLLAR_LPAREN;
	v->a[33515] = anon_sym_BQUOTE;
	v->a[33516] = sym_word;
	v->a[33517] = anon_sym_SEMI;
	v->a[33518] = 21;
	v->a[33519] = actions(3);
	small_parse_table_1676(v);
}

void	small_parse_table_1676(t_small_parse_table_array *v)
{
	v->a[33520] = 1;
	v->a[33521] = sym_comment;
	v->a[33522] = actions(335);
	v->a[33523] = 1;
	v->a[33524] = anon_sym_LPAREN;
	v->a[33525] = actions(345);
	v->a[33526] = 1;
	v->a[33527] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33528] = actions(347);
	v->a[33529] = 1;
	v->a[33530] = anon_sym_DOLLAR;
	v->a[33531] = actions(349);
	v->a[33532] = 1;
	v->a[33533] = anon_sym_DQUOTE;
	v->a[33534] = actions(353);
	v->a[33535] = 1;
	v->a[33536] = anon_sym_DOLLAR_LBRACE;
	v->a[33537] = actions(355);
	v->a[33538] = 1;
	v->a[33539] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1677(v);
}

void	small_parse_table_1677(t_small_parse_table_array *v)
{
	v->a[33540] = actions(357);
	v->a[33541] = 1;
	v->a[33542] = anon_sym_BQUOTE;
	v->a[33543] = actions(361);
	v->a[33544] = 1;
	v->a[33545] = sym_variable_name;
	v->a[33546] = actions(1201);
	v->a[33547] = 1;
	v->a[33548] = sym_file_descriptor;
	v->a[33549] = state(298);
	v->a[33550] = 1;
	v->a[33551] = sym_command_name;
	v->a[33552] = state(665);
	v->a[33553] = 1;
	v->a[33554] = aux_sym_command_repeat1;
	v->a[33555] = state(1070);
	v->a[33556] = 1;
	v->a[33557] = sym_concatenation;
	v->a[33558] = state(1090);
	v->a[33559] = 1;
	small_parse_table_1678(v);
}

void	small_parse_table_1678(t_small_parse_table_array *v)
{
	v->a[33560] = sym_variable_assignment;
	v->a[33561] = state(1477);
	v->a[33562] = 1;
	v->a[33563] = sym_file_redirect;
	v->a[33564] = state(1727);
	v->a[33565] = 1;
	v->a[33566] = sym_subshell;
	v->a[33567] = state(1729);
	v->a[33568] = 1;
	v->a[33569] = sym_command;
	v->a[33570] = actions(1199);
	v->a[33571] = 2;
	v->a[33572] = anon_sym_LT_AMP_DASH;
	v->a[33573] = anon_sym_GT_AMP_DASH;
	v->a[33574] = actions(351);
	v->a[33575] = 3;
	v->a[33576] = sym_raw_string;
	v->a[33577] = sym_number;
	v->a[33578] = sym_word;
	v->a[33579] = state(903);
	small_parse_table_1679(v);
}

void	small_parse_table_1679(t_small_parse_table_array *v)
{
	v->a[33580] = 5;
	v->a[33581] = sym_arithmetic_expansion;
	v->a[33582] = sym_string;
	v->a[33583] = sym_simple_expansion;
	v->a[33584] = sym_expansion;
	v->a[33585] = sym_command_substitution;
	v->a[33586] = actions(1197);
	v->a[33587] = 8;
	v->a[33588] = anon_sym_LT;
	v->a[33589] = anon_sym_GT;
	v->a[33590] = anon_sym_GT_GT;
	v->a[33591] = anon_sym_AMP_GT;
	v->a[33592] = anon_sym_AMP_GT_GT;
	v->a[33593] = anon_sym_LT_AMP;
	v->a[33594] = anon_sym_GT_AMP;
	v->a[33595] = anon_sym_GT_PIPE;
	v->a[33596] = 3;
	v->a[33597] = actions(3);
	v->a[33598] = 1;
	v->a[33599] = sym_comment;
	small_parse_table_1680(v);
}

/* EOF small_parse_table_335.c */
