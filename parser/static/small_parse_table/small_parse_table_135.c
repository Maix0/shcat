/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_135.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_675(t_small_parse_table_array *v)
{
	v->a[13500] = 7;
	v->a[13501] = anon_sym_LT;
	v->a[13502] = anon_sym_GT;
	v->a[13503] = anon_sym_GT_GT;
	v->a[13504] = anon_sym_LT_AMP;
	v->a[13505] = anon_sym_GT_AMP;
	v->a[13506] = anon_sym_GT_PIPE;
	v->a[13507] = anon_sym_LT_GT;
	v->a[13508] = 29;
	v->a[13509] = actions(3);
	v->a[13510] = 1;
	v->a[13511] = sym_comment;
	v->a[13512] = actions(9);
	v->a[13513] = 1;
	v->a[13514] = anon_sym_for;
	v->a[13515] = actions(13);
	v->a[13516] = 1;
	v->a[13517] = anon_sym_if;
	v->a[13518] = actions(15);
	v->a[13519] = 1;
	small_parse_table_676(v);
}

void	small_parse_table_676(t_small_parse_table_array *v)
{
	v->a[13520] = anon_sym_case;
	v->a[13521] = actions(17);
	v->a[13522] = 1;
	v->a[13523] = anon_sym_LPAREN;
	v->a[13524] = actions(19);
	v->a[13525] = 1;
	v->a[13526] = anon_sym_LBRACE;
	v->a[13527] = actions(41);
	v->a[13528] = 1;
	v->a[13529] = sym_word;
	v->a[13530] = actions(49);
	v->a[13531] = 1;
	v->a[13532] = anon_sym_BANG;
	v->a[13533] = actions(53);
	v->a[13534] = 1;
	v->a[13535] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13536] = actions(55);
	v->a[13537] = 1;
	v->a[13538] = anon_sym_DOLLAR;
	v->a[13539] = actions(57);
	small_parse_table_677(v);
}

void	small_parse_table_677(t_small_parse_table_array *v)
{
	v->a[13540] = 1;
	v->a[13541] = anon_sym_DQUOTE;
	v->a[13542] = actions(61);
	v->a[13543] = 1;
	v->a[13544] = anon_sym_DOLLAR_LBRACE;
	v->a[13545] = actions(63);
	v->a[13546] = 1;
	v->a[13547] = anon_sym_DOLLAR_LPAREN;
	v->a[13548] = actions(65);
	v->a[13549] = 1;
	v->a[13550] = anon_sym_BQUOTE;
	v->a[13551] = actions(67);
	v->a[13552] = 1;
	v->a[13553] = sym_variable_name;
	v->a[13554] = state(35);
	v->a[13555] = 1;
	v->a[13556] = aux_sym__terminated_statement;
	v->a[13557] = state(271);
	v->a[13558] = 1;
	v->a[13559] = sym_command_name;
	small_parse_table_678(v);
}

void	small_parse_table_678(t_small_parse_table_array *v)
{
	v->a[13560] = state(284);
	v->a[13561] = 1;
	v->a[13562] = sym_variable_assignment;
	v->a[13563] = state(482);
	v->a[13564] = 1;
	v->a[13565] = aux_sym_command_repeat1;
	v->a[13566] = state(600);
	v->a[13567] = 1;
	v->a[13568] = sym_file_redirect;
	v->a[13569] = state(602);
	v->a[13570] = 1;
	v->a[13571] = sym_concatenation;
	v->a[13572] = state(1005);
	v->a[13573] = 1;
	v->a[13574] = sym_pipeline;
	v->a[13575] = state(1068);
	v->a[13576] = 1;
	v->a[13577] = aux_sym_redirected_statement_repeat2;
	v->a[13578] = state(1609);
	v->a[13579] = 1;
	small_parse_table_679(v);
}

void	small_parse_table_679(t_small_parse_table_array *v)
{
	v->a[13580] = sym__statement_not_pipeline;
	v->a[13581] = actions(11);
	v->a[13582] = 2;
	v->a[13583] = anon_sym_while;
	v->a[13584] = anon_sym_until;
	v->a[13585] = actions(59);
	v->a[13586] = 2;
	v->a[13587] = sym_raw_string;
	v->a[13588] = sym_number;
	v->a[13589] = state(425);
	v->a[13590] = 5;
	v->a[13591] = sym_arithmetic_expansion;
	v->a[13592] = sym_string;
	v->a[13593] = sym_simple_expansion;
	v->a[13594] = sym_expansion;
	v->a[13595] = sym_command_substitution;
	v->a[13596] = actions(51);
	v->a[13597] = 7;
	v->a[13598] = anon_sym_LT;
	v->a[13599] = anon_sym_GT;
	small_parse_table_680(v);
}

/* EOF small_parse_table_135.c */
