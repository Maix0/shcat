/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_7.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_35(t_small_parse_table_array *v)
{
	v->a[700] = sym_subshell;
	v->a[701] = sym_list;
	v->a[702] = sym_negated_command;
	v->a[703] = sym_command;
	v->a[704] = sym_variable_assignments;
	v->a[705] = 38;
	v->a[706] = actions(3);
	v->a[707] = 1;
	v->a[708] = sym_comment;
	v->a[709] = actions(9);
	v->a[710] = 1;
	v->a[711] = anon_sym_for;
	v->a[712] = actions(13);
	v->a[713] = 1;
	v->a[714] = anon_sym_if;
	v->a[715] = actions(15);
	v->a[716] = 1;
	v->a[717] = anon_sym_case;
	v->a[718] = actions(17);
	v->a[719] = 1;
	small_parse_table_36(v);
}

void	small_parse_table_36(t_small_parse_table_array *v)
{
	v->a[720] = anon_sym_LPAREN;
	v->a[721] = actions(19);
	v->a[722] = 1;
	v->a[723] = anon_sym_LBRACE;
	v->a[724] = actions(49);
	v->a[725] = 1;
	v->a[726] = sym_word;
	v->a[727] = actions(53);
	v->a[728] = 1;
	v->a[729] = anon_sym_elif;
	v->a[730] = actions(55);
	v->a[731] = 1;
	v->a[732] = anon_sym_else;
	v->a[733] = actions(57);
	v->a[734] = 1;
	v->a[735] = anon_sym_BANG;
	v->a[736] = actions(63);
	v->a[737] = 1;
	v->a[738] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[739] = actions(65);
	small_parse_table_37(v);
}

void	small_parse_table_37(t_small_parse_table_array *v)
{
	v->a[740] = 1;
	v->a[741] = anon_sym_DOLLAR;
	v->a[742] = actions(67);
	v->a[743] = 1;
	v->a[744] = anon_sym_DQUOTE;
	v->a[745] = actions(69);
	v->a[746] = 1;
	v->a[747] = sym_raw_string;
	v->a[748] = actions(71);
	v->a[749] = 1;
	v->a[750] = aux_sym_number_token1;
	v->a[751] = actions(73);
	v->a[752] = 1;
	v->a[753] = aux_sym_number_token2;
	v->a[754] = actions(75);
	v->a[755] = 1;
	v->a[756] = anon_sym_DOLLAR_LBRACE;
	v->a[757] = actions(77);
	v->a[758] = 1;
	v->a[759] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_38(v);
}

void	small_parse_table_38(t_small_parse_table_array *v)
{
	v->a[760] = actions(79);
	v->a[761] = 1;
	v->a[762] = anon_sym_BQUOTE;
	v->a[763] = actions(81);
	v->a[764] = 1;
	v->a[765] = sym_file_descriptor;
	v->a[766] = actions(83);
	v->a[767] = 1;
	v->a[768] = sym_variable_name;
	v->a[769] = actions(93);
	v->a[770] = 1;
	v->a[771] = anon_sym_fi;
	v->a[772] = state(6);
	v->a[773] = 1;
	v->a[774] = aux_sym__terminated_statement;
	v->a[775] = state(190);
	v->a[776] = 1;
	v->a[777] = sym_command_name;
	v->a[778] = state(299);
	v->a[779] = 1;
	small_parse_table_39(v);
}

void	small_parse_table_39(t_small_parse_table_array *v)
{
	v->a[780] = sym_variable_assignment;
	v->a[781] = state(582);
	v->a[782] = 1;
	v->a[783] = sym_concatenation;
	v->a[784] = state(587);
	v->a[785] = 1;
	v->a[786] = aux_sym_command_repeat1;
	v->a[787] = state(718);
	v->a[788] = 1;
	v->a[789] = sym_file_redirect;
	v->a[790] = state(1212);
	v->a[791] = 1;
	v->a[792] = sym_pipeline;
	v->a[793] = state(1213);
	v->a[794] = 1;
	v->a[795] = aux_sym_redirected_statement_repeat2;
	v->a[796] = state(2035);
	v->a[797] = 1;
	v->a[798] = sym__statement_not_pipeline;
	v->a[799] = state(2258);
	small_parse_table_40(v);
}

/* EOF small_parse_table_7.c */
