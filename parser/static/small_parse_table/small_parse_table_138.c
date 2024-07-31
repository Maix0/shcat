/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_138.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_690(t_small_parse_table_array *v)
{
	v->a[13800] = sym_command_name;
	v->a[13801] = state(406);
	v->a[13802] = 1;
	v->a[13803] = sym_variable_assignment;
	v->a[13804] = state(471);
	v->a[13805] = 1;
	v->a[13806] = aux_sym_command_repeat1;
	v->a[13807] = state(600);
	v->a[13808] = 1;
	v->a[13809] = sym_file_redirect;
	v->a[13810] = state(602);
	v->a[13811] = 1;
	v->a[13812] = sym_concatenation;
	v->a[13813] = state(1201);
	v->a[13814] = 1;
	v->a[13815] = aux_sym_redirected_statement_repeat2;
	v->a[13816] = state(1221);
	v->a[13817] = 1;
	v->a[13818] = sym_pipeline;
	v->a[13819] = state(1603);
	small_parse_table_691(v);
}

void	small_parse_table_691(t_small_parse_table_array *v)
{
	v->a[13820] = 1;
	v->a[13821] = sym__statement_not_pipeline;
	v->a[13822] = actions(11);
	v->a[13823] = 2;
	v->a[13824] = anon_sym_while;
	v->a[13825] = anon_sym_until;
	v->a[13826] = actions(303);
	v->a[13827] = 2;
	v->a[13828] = sym_raw_string;
	v->a[13829] = sym_number;
	v->a[13830] = state(603);
	v->a[13831] = 5;
	v->a[13832] = sym_arithmetic_expansion;
	v->a[13833] = sym_string;
	v->a[13834] = sym_simple_expansion;
	v->a[13835] = sym_expansion;
	v->a[13836] = sym_command_substitution;
	v->a[13837] = actions(301);
	v->a[13838] = 7;
	v->a[13839] = anon_sym_LT;
	small_parse_table_692(v);
}

void	small_parse_table_692(t_small_parse_table_array *v)
{
	v->a[13840] = anon_sym_GT;
	v->a[13841] = anon_sym_GT_GT;
	v->a[13842] = anon_sym_LT_AMP;
	v->a[13843] = anon_sym_GT_AMP;
	v->a[13844] = anon_sym_GT_PIPE;
	v->a[13845] = anon_sym_LT_GT;
	v->a[13846] = state(1168);
	v->a[13847] = 12;
	v->a[13848] = sym_redirected_statement;
	v->a[13849] = sym_for_statement;
	v->a[13850] = sym_while_statement;
	v->a[13851] = sym_if_statement;
	v->a[13852] = sym_case_statement;
	v->a[13853] = sym_function_definition;
	v->a[13854] = sym_compound_statement;
	v->a[13855] = sym_subshell;
	v->a[13856] = sym_list;
	v->a[13857] = sym_negated_command;
	v->a[13858] = sym_command;
	v->a[13859] = sym__variable_assignments;
	small_parse_table_693(v);
}

void	small_parse_table_693(t_small_parse_table_array *v)
{
	v->a[13860] = 27;
	v->a[13861] = actions(3);
	v->a[13862] = 1;
	v->a[13863] = sym_comment;
	v->a[13864] = actions(79);
	v->a[13865] = 1;
	v->a[13866] = sym_word;
	v->a[13867] = actions(81);
	v->a[13868] = 1;
	v->a[13869] = anon_sym_for;
	v->a[13870] = actions(85);
	v->a[13871] = 1;
	v->a[13872] = anon_sym_if;
	v->a[13873] = actions(87);
	v->a[13874] = 1;
	v->a[13875] = anon_sym_case;
	v->a[13876] = actions(89);
	v->a[13877] = 1;
	v->a[13878] = anon_sym_LPAREN;
	v->a[13879] = actions(93);
	small_parse_table_694(v);
}

void	small_parse_table_694(t_small_parse_table_array *v)
{
	v->a[13880] = 1;
	v->a[13881] = anon_sym_LBRACE;
	v->a[13882] = actions(95);
	v->a[13883] = 1;
	v->a[13884] = anon_sym_BANG;
	v->a[13885] = actions(99);
	v->a[13886] = 1;
	v->a[13887] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13888] = actions(101);
	v->a[13889] = 1;
	v->a[13890] = anon_sym_DOLLAR;
	v->a[13891] = actions(103);
	v->a[13892] = 1;
	v->a[13893] = anon_sym_DQUOTE;
	v->a[13894] = actions(107);
	v->a[13895] = 1;
	v->a[13896] = anon_sym_DOLLAR_LBRACE;
	v->a[13897] = actions(109);
	v->a[13898] = 1;
	v->a[13899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_695(v);
}

/* EOF small_parse_table_138.c */
