/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_115.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_575(t_small_parse_table_array *v)
{
	v->a[11500] = sym_command;
	v->a[11501] = sym_variable_assignments;
	v->a[11502] = 34;
	v->a[11503] = actions(3);
	v->a[11504] = 1;
	v->a[11505] = sym_comment;
	v->a[11506] = actions(9);
	v->a[11507] = 1;
	v->a[11508] = anon_sym_for;
	v->a[11509] = actions(13);
	v->a[11510] = 1;
	v->a[11511] = anon_sym_if;
	v->a[11512] = actions(15);
	v->a[11513] = 1;
	v->a[11514] = anon_sym_case;
	v->a[11515] = actions(17);
	v->a[11516] = 1;
	v->a[11517] = anon_sym_LPAREN;
	v->a[11518] = actions(19);
	v->a[11519] = 1;
	small_parse_table_576(v);
}

void	small_parse_table_576(t_small_parse_table_array *v)
{
	v->a[11520] = anon_sym_LBRACE;
	v->a[11521] = actions(63);
	v->a[11522] = 1;
	v->a[11523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11524] = actions(65);
	v->a[11525] = 1;
	v->a[11526] = anon_sym_DOLLAR;
	v->a[11527] = actions(67);
	v->a[11528] = 1;
	v->a[11529] = anon_sym_DQUOTE;
	v->a[11530] = actions(69);
	v->a[11531] = 1;
	v->a[11532] = sym_raw_string;
	v->a[11533] = actions(71);
	v->a[11534] = 1;
	v->a[11535] = aux_sym_number_token1;
	v->a[11536] = actions(73);
	v->a[11537] = 1;
	v->a[11538] = aux_sym_number_token2;
	v->a[11539] = actions(75);
	small_parse_table_577(v);
}

void	small_parse_table_577(t_small_parse_table_array *v)
{
	v->a[11540] = 1;
	v->a[11541] = anon_sym_DOLLAR_LBRACE;
	v->a[11542] = actions(77);
	v->a[11543] = 1;
	v->a[11544] = anon_sym_DOLLAR_LPAREN;
	v->a[11545] = actions(79);
	v->a[11546] = 1;
	v->a[11547] = anon_sym_BQUOTE;
	v->a[11548] = actions(81);
	v->a[11549] = 1;
	v->a[11550] = sym_file_descriptor;
	v->a[11551] = actions(83);
	v->a[11552] = 1;
	v->a[11553] = sym_variable_name;
	v->a[11554] = actions(238);
	v->a[11555] = 1;
	v->a[11556] = sym_word;
	v->a[11557] = actions(240);
	v->a[11558] = 1;
	v->a[11559] = anon_sym_BANG;
	small_parse_table_578(v);
}

void	small_parse_table_578(t_small_parse_table_array *v)
{
	v->a[11560] = state(132);
	v->a[11561] = 1;
	v->a[11562] = aux_sym__statements_repeat1;
	v->a[11563] = state(185);
	v->a[11564] = 1;
	v->a[11565] = sym_command_name;
	v->a[11566] = state(297);
	v->a[11567] = 1;
	v->a[11568] = sym_variable_assignment;
	v->a[11569] = state(582);
	v->a[11570] = 1;
	v->a[11571] = sym_concatenation;
	v->a[11572] = state(614);
	v->a[11573] = 1;
	v->a[11574] = aux_sym_command_repeat1;
	v->a[11575] = state(769);
	v->a[11576] = 1;
	v->a[11577] = sym_file_redirect;
	v->a[11578] = state(1133);
	v->a[11579] = 1;
	small_parse_table_579(v);
}

void	small_parse_table_579(t_small_parse_table_array *v)
{
	v->a[11580] = aux_sym_redirected_statement_repeat2;
	v->a[11581] = state(1142);
	v->a[11582] = 1;
	v->a[11583] = sym_pipeline;
	v->a[11584] = state(2041);
	v->a[11585] = 1;
	v->a[11586] = sym__statement_not_pipeline;
	v->a[11587] = state(2177);
	v->a[11588] = 1;
	v->a[11589] = sym__statements;
	v->a[11590] = actions(11);
	v->a[11591] = 2;
	v->a[11592] = anon_sym_while;
	v->a[11593] = anon_sym_until;
	v->a[11594] = actions(61);
	v->a[11595] = 2;
	v->a[11596] = anon_sym_LT_AMP_DASH;
	v->a[11597] = anon_sym_GT_AMP_DASH;
	v->a[11598] = state(397);
	v->a[11599] = 6;
	small_parse_table_580(v);
}

/* EOF small_parse_table_115.c */
