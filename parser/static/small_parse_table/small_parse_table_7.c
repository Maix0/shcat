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
	v->a[701] = anon_sym_DOLLAR;
	v->a[702] = actions(63);
	v->a[703] = 1;
	v->a[704] = anon_sym_DQUOTE;
	v->a[705] = actions(67);
	v->a[706] = 1;
	v->a[707] = anon_sym_DOLLAR_LBRACE;
	v->a[708] = actions(69);
	v->a[709] = 1;
	v->a[710] = anon_sym_DOLLAR_LPAREN;
	v->a[711] = actions(71);
	v->a[712] = 1;
	v->a[713] = anon_sym_BQUOTE;
	v->a[714] = actions(73);
	v->a[715] = 1;
	v->a[716] = sym_file_descriptor;
	v->a[717] = actions(75);
	v->a[718] = 1;
	v->a[719] = sym_variable_name;
	small_parse_table_36(v);
}

void	small_parse_table_36(t_small_parse_table_array *v)
{
	v->a[720] = actions(85);
	v->a[721] = 1;
	v->a[722] = anon_sym_fi;
	v->a[723] = state(2);
	v->a[724] = 1;
	v->a[725] = aux_sym__terminated_statement;
	v->a[726] = state(189);
	v->a[727] = 1;
	v->a[728] = sym_command_name;
	v->a[729] = state(273);
	v->a[730] = 1;
	v->a[731] = sym_variable_assignment;
	v->a[732] = state(650);
	v->a[733] = 1;
	v->a[734] = sym_concatenation;
	v->a[735] = state(712);
	v->a[736] = 1;
	v->a[737] = sym_file_redirect;
	v->a[738] = state(713);
	v->a[739] = 1;
	small_parse_table_37(v);
}

void	small_parse_table_37(t_small_parse_table_array *v)
{
	v->a[740] = aux_sym_command_repeat1;
	v->a[741] = state(1196);
	v->a[742] = 1;
	v->a[743] = sym_pipeline;
	v->a[744] = state(1333);
	v->a[745] = 1;
	v->a[746] = aux_sym_redirected_statement_repeat2;
	v->a[747] = state(2103);
	v->a[748] = 1;
	v->a[749] = sym__statement_not_pipeline;
	v->a[750] = state(2259);
	v->a[751] = 1;
	v->a[752] = sym_else_clause;
	v->a[753] = actions(11);
	v->a[754] = 2;
	v->a[755] = anon_sym_while;
	v->a[756] = anon_sym_until;
	v->a[757] = actions(57);
	v->a[758] = 2;
	v->a[759] = anon_sym_LT_AMP_DASH;
	small_parse_table_38(v);
}

void	small_parse_table_38(t_small_parse_table_array *v)
{
	v->a[760] = anon_sym_GT_AMP_DASH;
	v->a[761] = actions(65);
	v->a[762] = 2;
	v->a[763] = sym_raw_string;
	v->a[764] = sym_number;
	v->a[765] = state(2000);
	v->a[766] = 2;
	v->a[767] = sym_elif_clause;
	v->a[768] = aux_sym_if_statement_repeat1;
	v->a[769] = state(443);
	v->a[770] = 5;
	v->a[771] = sym_arithmetic_expansion;
	v->a[772] = sym_string;
	v->a[773] = sym_simple_expansion;
	v->a[774] = sym_expansion;
	v->a[775] = sym_command_substitution;
	v->a[776] = actions(55);
	v->a[777] = 6;
	v->a[778] = anon_sym_LT;
	v->a[779] = anon_sym_GT;
	small_parse_table_39(v);
}

void	small_parse_table_39(t_small_parse_table_array *v)
{
	v->a[780] = anon_sym_GT_GT;
	v->a[781] = anon_sym_LT_AMP;
	v->a[782] = anon_sym_GT_AMP;
	v->a[783] = anon_sym_GT_PIPE;
	v->a[784] = state(1187);
	v->a[785] = 12;
	v->a[786] = sym_redirected_statement;
	v->a[787] = sym_for_statement;
	v->a[788] = sym_while_statement;
	v->a[789] = sym_if_statement;
	v->a[790] = sym_case_statement;
	v->a[791] = sym_function_definition;
	v->a[792] = sym_compound_statement;
	v->a[793] = sym_subshell;
	v->a[794] = sym_list;
	v->a[795] = sym_negated_command;
	v->a[796] = sym_command;
	v->a[797] = sym__variable_assignments;
	v->a[798] = 34;
	v->a[799] = actions(3);
	small_parse_table_40(v);
}

/* EOF small_parse_table_7.c */
