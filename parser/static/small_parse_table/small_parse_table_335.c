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
	v->a[33500] = sym_word;
	v->a[33501] = 20;
	v->a[33502] = actions(3);
	v->a[33503] = 1;
	v->a[33504] = sym_comment;
	v->a[33505] = actions(17);
	v->a[33506] = 1;
	v->a[33507] = anon_sym_LPAREN;
	v->a[33508] = actions(55);
	v->a[33509] = 1;
	v->a[33510] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33511] = actions(57);
	v->a[33512] = 1;
	v->a[33513] = anon_sym_DOLLAR;
	v->a[33514] = actions(59);
	v->a[33515] = 1;
	v->a[33516] = anon_sym_DQUOTE;
	v->a[33517] = actions(63);
	v->a[33518] = 1;
	v->a[33519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1676(v);
}

void	small_parse_table_1676(t_small_parse_table_array *v)
{
	v->a[33520] = actions(65);
	v->a[33521] = 1;
	v->a[33522] = anon_sym_DOLLAR_LPAREN;
	v->a[33523] = actions(67);
	v->a[33524] = 1;
	v->a[33525] = anon_sym_BQUOTE;
	v->a[33526] = actions(357);
	v->a[33527] = 1;
	v->a[33528] = sym_variable_name;
	v->a[33529] = actions(1164);
	v->a[33530] = 1;
	v->a[33531] = sym_file_descriptor;
	v->a[33532] = state(322);
	v->a[33533] = 1;
	v->a[33534] = sym_command_name;
	v->a[33535] = state(584);
	v->a[33536] = 1;
	v->a[33537] = sym_concatenation;
	v->a[33538] = state(625);
	v->a[33539] = 1;
	small_parse_table_1677(v);
}

void	small_parse_table_1677(t_small_parse_table_array *v)
{
	v->a[33540] = aux_sym_command_repeat1;
	v->a[33541] = state(640);
	v->a[33542] = 1;
	v->a[33543] = sym_variable_assignment;
	v->a[33544] = state(1109);
	v->a[33545] = 1;
	v->a[33546] = sym_subshell;
	v->a[33547] = state(1113);
	v->a[33548] = 1;
	v->a[33549] = sym_command;
	v->a[33550] = state(1218);
	v->a[33551] = 1;
	v->a[33552] = sym_file_redirect;
	v->a[33553] = actions(353);
	v->a[33554] = 3;
	v->a[33555] = sym_raw_string;
	v->a[33556] = sym_number;
	v->a[33557] = sym_word;
	v->a[33558] = state(628);
	v->a[33559] = 5;
	small_parse_table_1678(v);
}

void	small_parse_table_1678(t_small_parse_table_array *v)
{
	v->a[33560] = sym_arithmetic_expansion;
	v->a[33561] = sym_string;
	v->a[33562] = sym_simple_expansion;
	v->a[33563] = sym_expansion;
	v->a[33564] = sym_command_substitution;
	v->a[33565] = actions(1162);
	v->a[33566] = 7;
	v->a[33567] = anon_sym_LT;
	v->a[33568] = anon_sym_GT;
	v->a[33569] = anon_sym_GT_GT;
	v->a[33570] = anon_sym_LT_AMP;
	v->a[33571] = anon_sym_GT_AMP;
	v->a[33572] = anon_sym_GT_PIPE;
	v->a[33573] = anon_sym_LT_GT;
	v->a[33574] = 3;
	v->a[33575] = actions(3);
	v->a[33576] = 1;
	v->a[33577] = sym_comment;
	v->a[33578] = actions(839);
	v->a[33579] = 3;
	small_parse_table_1679(v);
}

void	small_parse_table_1679(t_small_parse_table_array *v)
{
	v->a[33580] = sym_file_descriptor;
	v->a[33581] = sym__concat;
	v->a[33582] = sym__bare_dollar;
	v->a[33583] = actions(837);
	v->a[33584] = 28;
	v->a[33585] = anon_sym_LPAREN;
	v->a[33586] = anon_sym_PIPE;
	v->a[33587] = anon_sym_RPAREN;
	v->a[33588] = anon_sym_SEMI_SEMI;
	v->a[33589] = anon_sym_AMP_AMP;
	v->a[33590] = anon_sym_PIPE_PIPE;
	v->a[33591] = anon_sym_LT;
	v->a[33592] = anon_sym_GT;
	v->a[33593] = anon_sym_GT_GT;
	v->a[33594] = anon_sym_LT_AMP;
	v->a[33595] = anon_sym_GT_AMP;
	v->a[33596] = anon_sym_GT_PIPE;
	v->a[33597] = anon_sym_LT_GT;
	v->a[33598] = anon_sym_LT_LT;
	v->a[33599] = anon_sym_LT_LT_DASH;
	small_parse_table_1680(v);
}

/* EOF small_parse_table_335.c */
