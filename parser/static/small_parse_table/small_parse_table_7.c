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
	v->a[700] = 1;
	v->a[701] = sym_file_descriptor;
	v->a[702] = actions(71);
	v->a[703] = 1;
	v->a[704] = sym_variable_name;
	v->a[705] = actions(81);
	v->a[706] = 1;
	v->a[707] = anon_sym_fi;
	v->a[708] = state(3);
	v->a[709] = 1;
	v->a[710] = aux_sym__terminated_statement;
	v->a[711] = state(182);
	v->a[712] = 1;
	v->a[713] = sym_command_name;
	v->a[714] = state(342);
	v->a[715] = 1;
	v->a[716] = sym_variable_assignment;
	v->a[717] = state(584);
	v->a[718] = 1;
	v->a[719] = sym_concatenation;
	small_parse_table_36(v);
}

void	small_parse_table_36(t_small_parse_table_array *v)
{
	v->a[720] = state(620);
	v->a[721] = 1;
	v->a[722] = sym_file_redirect;
	v->a[723] = state(623);
	v->a[724] = 1;
	v->a[725] = aux_sym_command_repeat1;
	v->a[726] = state(1122);
	v->a[727] = 1;
	v->a[728] = sym_pipeline;
	v->a[729] = state(1201);
	v->a[730] = 1;
	v->a[731] = aux_sym_redirected_statement_repeat2;
	v->a[732] = state(1911);
	v->a[733] = 1;
	v->a[734] = sym__statement_not_pipeline;
	v->a[735] = state(1988);
	v->a[736] = 1;
	v->a[737] = sym_else_clause;
	v->a[738] = actions(11);
	v->a[739] = 2;
	small_parse_table_37(v);
}

void	small_parse_table_37(t_small_parse_table_array *v)
{
	v->a[740] = anon_sym_while;
	v->a[741] = anon_sym_until;
	v->a[742] = actions(61);
	v->a[743] = 2;
	v->a[744] = sym_raw_string;
	v->a[745] = sym_number;
	v->a[746] = state(1786);
	v->a[747] = 2;
	v->a[748] = sym_elif_clause;
	v->a[749] = aux_sym_if_statement_repeat1;
	v->a[750] = state(433);
	v->a[751] = 5;
	v->a[752] = sym_arithmetic_expansion;
	v->a[753] = sym_string;
	v->a[754] = sym_simple_expansion;
	v->a[755] = sym_expansion;
	v->a[756] = sym_command_substitution;
	v->a[757] = actions(53);
	v->a[758] = 7;
	v->a[759] = anon_sym_LT;
	small_parse_table_38(v);
}

void	small_parse_table_38(t_small_parse_table_array *v)
{
	v->a[760] = anon_sym_GT;
	v->a[761] = anon_sym_GT_GT;
	v->a[762] = anon_sym_LT_AMP;
	v->a[763] = anon_sym_GT_AMP;
	v->a[764] = anon_sym_GT_PIPE;
	v->a[765] = anon_sym_LT_GT;
	v->a[766] = state(1090);
	v->a[767] = 12;
	v->a[768] = sym_redirected_statement;
	v->a[769] = sym_for_statement;
	v->a[770] = sym_while_statement;
	v->a[771] = sym_if_statement;
	v->a[772] = sym_case_statement;
	v->a[773] = sym_function_definition;
	v->a[774] = sym_compound_statement;
	v->a[775] = sym_subshell;
	v->a[776] = sym_list;
	v->a[777] = sym_negated_command;
	v->a[778] = sym_command;
	v->a[779] = sym__variable_assignments;
	small_parse_table_39(v);
}

void	small_parse_table_39(t_small_parse_table_array *v)
{
	v->a[780] = 33;
	v->a[781] = actions(3);
	v->a[782] = 1;
	v->a[783] = sym_comment;
	v->a[784] = actions(83);
	v->a[785] = 1;
	v->a[786] = sym_word;
	v->a[787] = actions(85);
	v->a[788] = 1;
	v->a[789] = anon_sym_for;
	v->a[790] = actions(89);
	v->a[791] = 1;
	v->a[792] = anon_sym_if;
	v->a[793] = actions(91);
	v->a[794] = 1;
	v->a[795] = anon_sym_case;
	v->a[796] = actions(93);
	v->a[797] = 1;
	v->a[798] = anon_sym_LPAREN;
	v->a[799] = actions(95);
	small_parse_table_40(v);
}

/* EOF small_parse_table_7.c */
