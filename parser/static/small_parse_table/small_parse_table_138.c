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
	v->a[13800] = sym_word;
	v->a[13801] = actions(9);
	v->a[13802] = 1;
	v->a[13803] = anon_sym_for;
	v->a[13804] = actions(13);
	v->a[13805] = 1;
	v->a[13806] = anon_sym_if;
	v->a[13807] = actions(15);
	v->a[13808] = 1;
	v->a[13809] = anon_sym_case;
	v->a[13810] = actions(17);
	v->a[13811] = 1;
	v->a[13812] = anon_sym_LPAREN;
	v->a[13813] = actions(19);
	v->a[13814] = 1;
	v->a[13815] = anon_sym_LBRACE;
	v->a[13816] = actions(21);
	v->a[13817] = 1;
	v->a[13818] = anon_sym_BANG;
	v->a[13819] = actions(25);
	small_parse_table_691(v);
}

void	small_parse_table_691(t_small_parse_table_array *v)
{
	v->a[13820] = 1;
	v->a[13821] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13822] = actions(27);
	v->a[13823] = 1;
	v->a[13824] = anon_sym_DOLLAR;
	v->a[13825] = actions(29);
	v->a[13826] = 1;
	v->a[13827] = anon_sym_DQUOTE;
	v->a[13828] = actions(33);
	v->a[13829] = 1;
	v->a[13830] = anon_sym_DOLLAR_LBRACE;
	v->a[13831] = actions(35);
	v->a[13832] = 1;
	v->a[13833] = anon_sym_DOLLAR_LPAREN;
	v->a[13834] = actions(37);
	v->a[13835] = 1;
	v->a[13836] = anon_sym_BQUOTE;
	v->a[13837] = actions(39);
	v->a[13838] = 1;
	v->a[13839] = sym_variable_name;
	small_parse_table_692(v);
}

void	small_parse_table_692(t_small_parse_table_array *v)
{
	v->a[13840] = state(166);
	v->a[13841] = 1;
	v->a[13842] = sym_command_name;
	v->a[13843] = state(234);
	v->a[13844] = 1;
	v->a[13845] = sym_variable_assignment;
	v->a[13846] = state(398);
	v->a[13847] = 1;
	v->a[13848] = aux_sym_command_repeat1;
	v->a[13849] = state(549);
	v->a[13850] = 1;
	v->a[13851] = sym_concatenation;
	v->a[13852] = state(556);
	v->a[13853] = 1;
	v->a[13854] = sym_file_redirect;
	v->a[13855] = state(957);
	v->a[13856] = 1;
	v->a[13857] = sym_pipeline;
	v->a[13858] = state(999);
	v->a[13859] = 1;
	small_parse_table_693(v);
}

void	small_parse_table_693(t_small_parse_table_array *v)
{
	v->a[13860] = aux_sym_redirected_statement_repeat2;
	v->a[13861] = state(1558);
	v->a[13862] = 1;
	v->a[13863] = sym__statement_not_pipeline;
	v->a[13864] = actions(11);
	v->a[13865] = 2;
	v->a[13866] = anon_sym_while;
	v->a[13867] = anon_sym_until;
	v->a[13868] = actions(31);
	v->a[13869] = 2;
	v->a[13870] = sym_raw_string;
	v->a[13871] = sym_number;
	v->a[13872] = actions(23);
	v->a[13873] = 3;
	v->a[13874] = anon_sym_LT;
	v->a[13875] = anon_sym_GT;
	v->a[13876] = anon_sym_GT_GT;
	v->a[13877] = state(280);
	v->a[13878] = 5;
	v->a[13879] = sym_arithmetic_expansion;
	small_parse_table_694(v);
}

void	small_parse_table_694(t_small_parse_table_array *v)
{
	v->a[13880] = sym_string;
	v->a[13881] = sym_simple_expansion;
	v->a[13882] = sym_expansion;
	v->a[13883] = sym_command_substitution;
	v->a[13884] = state(956);
	v->a[13885] = 12;
	v->a[13886] = sym_redirected_statement;
	v->a[13887] = sym_for_statement;
	v->a[13888] = sym_while_statement;
	v->a[13889] = sym_if_statement;
	v->a[13890] = sym_case_statement;
	v->a[13891] = sym_function_definition;
	v->a[13892] = sym_compound_statement;
	v->a[13893] = sym_subshell;
	v->a[13894] = sym_list;
	v->a[13895] = sym_negated_command;
	v->a[13896] = sym_command;
	v->a[13897] = sym__variable_assignments;
	v->a[13898] = 27;
	v->a[13899] = actions(3);
	small_parse_table_695(v);
}

/* EOF small_parse_table_138.c */
