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
	v->a[700] = actions(11);
	v->a[701] = 2;
	v->a[702] = anon_sym_while;
	v->a[703] = anon_sym_until;
	v->a[704] = actions(59);
	v->a[705] = 2;
	v->a[706] = sym_raw_string;
	v->a[707] = sym_number;
	v->a[708] = state(1467);
	v->a[709] = 2;
	v->a[710] = sym_elif_clause;
	v->a[711] = aux_sym_if_statement_repeat1;
	v->a[712] = actions(51);
	v->a[713] = 3;
	v->a[714] = anon_sym_LT;
	v->a[715] = anon_sym_GT;
	v->a[716] = anon_sym_GT_GT;
	v->a[717] = state(401);
	v->a[718] = 5;
	v->a[719] = sym_arithmetic_expansion;
	small_parse_table_36(v);
}

void	small_parse_table_36(t_small_parse_table_array *v)
{
	v->a[720] = sym_string;
	v->a[721] = sym_simple_expansion;
	v->a[722] = sym_expansion;
	v->a[723] = sym_command_substitution;
	v->a[724] = state(905);
	v->a[725] = 12;
	v->a[726] = sym_redirected_statement;
	v->a[727] = sym_for_statement;
	v->a[728] = sym_while_statement;
	v->a[729] = sym_if_statement;
	v->a[730] = sym_case_statement;
	v->a[731] = sym_function_definition;
	v->a[732] = sym_compound_statement;
	v->a[733] = sym_subshell;
	v->a[734] = sym_list;
	v->a[735] = sym_negated_command;
	v->a[736] = sym_command;
	v->a[737] = sym__variable_assignments;
	v->a[738] = 32;
	v->a[739] = actions(3);
	small_parse_table_37(v);
}

void	small_parse_table_37(t_small_parse_table_array *v)
{
	v->a[740] = 1;
	v->a[741] = sym_comment;
	v->a[742] = actions(79);
	v->a[743] = 1;
	v->a[744] = sym_word;
	v->a[745] = actions(81);
	v->a[746] = 1;
	v->a[747] = anon_sym_for;
	v->a[748] = actions(85);
	v->a[749] = 1;
	v->a[750] = anon_sym_if;
	v->a[751] = actions(87);
	v->a[752] = 1;
	v->a[753] = anon_sym_case;
	v->a[754] = actions(89);
	v->a[755] = 1;
	v->a[756] = anon_sym_LPAREN;
	v->a[757] = actions(91);
	v->a[758] = 1;
	v->a[759] = anon_sym_LF;
	small_parse_table_38(v);
}

void	small_parse_table_38(t_small_parse_table_array *v)
{
	v->a[760] = actions(93);
	v->a[761] = 1;
	v->a[762] = anon_sym_LBRACE;
	v->a[763] = actions(95);
	v->a[764] = 1;
	v->a[765] = anon_sym_BANG;
	v->a[766] = actions(99);
	v->a[767] = 1;
	v->a[768] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[769] = actions(101);
	v->a[770] = 1;
	v->a[771] = anon_sym_DOLLAR;
	v->a[772] = actions(103);
	v->a[773] = 1;
	v->a[774] = anon_sym_DQUOTE;
	v->a[775] = actions(107);
	v->a[776] = 1;
	v->a[777] = anon_sym_DOLLAR_LBRACE;
	v->a[778] = actions(109);
	v->a[779] = 1;
	small_parse_table_39(v);
}

void	small_parse_table_39(t_small_parse_table_array *v)
{
	v->a[780] = anon_sym_DOLLAR_LPAREN;
	v->a[781] = actions(111);
	v->a[782] = 1;
	v->a[783] = anon_sym_BQUOTE;
	v->a[784] = actions(113);
	v->a[785] = 1;
	v->a[786] = sym_variable_name;
	v->a[787] = state(31);
	v->a[788] = 1;
	v->a[789] = aux_sym__case_item_last_repeat2;
	v->a[790] = state(104);
	v->a[791] = 1;
	v->a[792] = aux_sym__statements_repeat1;
	v->a[793] = state(170);
	v->a[794] = 1;
	v->a[795] = sym_command_name;
	v->a[796] = state(177);
	v->a[797] = 1;
	v->a[798] = sym_variable_assignment;
	v->a[799] = state(408);
	small_parse_table_40(v);
}

/* EOF small_parse_table_7.c */
