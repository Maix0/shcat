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
	v->a[701] = aux_sym_command_repeat1;
	v->a[702] = state(600);
	v->a[703] = 1;
	v->a[704] = sym_file_redirect;
	v->a[705] = state(602);
	v->a[706] = 1;
	v->a[707] = sym_concatenation;
	v->a[708] = state(992);
	v->a[709] = 1;
	v->a[710] = sym_pipeline;
	v->a[711] = state(1068);
	v->a[712] = 1;
	v->a[713] = aux_sym_redirected_statement_repeat2;
	v->a[714] = state(1609);
	v->a[715] = 1;
	v->a[716] = sym__statement_not_pipeline;
	v->a[717] = state(1747);
	v->a[718] = 1;
	v->a[719] = sym_else_clause;
	small_parse_table_36(v);
}

void	small_parse_table_36(t_small_parse_table_array *v)
{
	v->a[720] = actions(11);
	v->a[721] = 2;
	v->a[722] = anon_sym_while;
	v->a[723] = anon_sym_until;
	v->a[724] = actions(59);
	v->a[725] = 2;
	v->a[726] = sym_raw_string;
	v->a[727] = sym_number;
	v->a[728] = state(1499);
	v->a[729] = 2;
	v->a[730] = sym_elif_clause;
	v->a[731] = aux_sym_if_statement_repeat1;
	v->a[732] = state(425);
	v->a[733] = 5;
	v->a[734] = sym_arithmetic_expansion;
	v->a[735] = sym_string;
	v->a[736] = sym_simple_expansion;
	v->a[737] = sym_expansion;
	v->a[738] = sym_command_substitution;
	v->a[739] = actions(51);
	small_parse_table_37(v);
}

void	small_parse_table_37(t_small_parse_table_array *v)
{
	v->a[740] = 7;
	v->a[741] = anon_sym_LT;
	v->a[742] = anon_sym_GT;
	v->a[743] = anon_sym_GT_GT;
	v->a[744] = anon_sym_LT_AMP;
	v->a[745] = anon_sym_GT_AMP;
	v->a[746] = anon_sym_GT_PIPE;
	v->a[747] = anon_sym_LT_GT;
	v->a[748] = state(949);
	v->a[749] = 12;
	v->a[750] = sym_redirected_statement;
	v->a[751] = sym_for_statement;
	v->a[752] = sym_while_statement;
	v->a[753] = sym_if_statement;
	v->a[754] = sym_case_statement;
	v->a[755] = sym_function_definition;
	v->a[756] = sym_compound_statement;
	v->a[757] = sym_subshell;
	v->a[758] = sym_list;
	v->a[759] = sym_negated_command;
	small_parse_table_38(v);
}

void	small_parse_table_38(t_small_parse_table_array *v)
{
	v->a[760] = sym_command;
	v->a[761] = sym__variable_assignments;
	v->a[762] = 32;
	v->a[763] = actions(3);
	v->a[764] = 1;
	v->a[765] = sym_comment;
	v->a[766] = actions(79);
	v->a[767] = 1;
	v->a[768] = sym_word;
	v->a[769] = actions(81);
	v->a[770] = 1;
	v->a[771] = anon_sym_for;
	v->a[772] = actions(85);
	v->a[773] = 1;
	v->a[774] = anon_sym_if;
	v->a[775] = actions(87);
	v->a[776] = 1;
	v->a[777] = anon_sym_case;
	v->a[778] = actions(89);
	v->a[779] = 1;
	small_parse_table_39(v);
}

void	small_parse_table_39(t_small_parse_table_array *v)
{
	v->a[780] = anon_sym_LPAREN;
	v->a[781] = actions(91);
	v->a[782] = 1;
	v->a[783] = anon_sym_LF;
	v->a[784] = actions(93);
	v->a[785] = 1;
	v->a[786] = anon_sym_LBRACE;
	v->a[787] = actions(95);
	v->a[788] = 1;
	v->a[789] = anon_sym_BANG;
	v->a[790] = actions(99);
	v->a[791] = 1;
	v->a[792] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[793] = actions(101);
	v->a[794] = 1;
	v->a[795] = anon_sym_DOLLAR;
	v->a[796] = actions(103);
	v->a[797] = 1;
	v->a[798] = anon_sym_DQUOTE;
	v->a[799] = actions(107);
	small_parse_table_40(v);
}

/* EOF small_parse_table_7.c */
