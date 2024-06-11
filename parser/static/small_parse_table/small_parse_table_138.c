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
	v->a[13800] = 1;
	v->a[13801] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13802] = actions(61);
	v->a[13803] = 1;
	v->a[13804] = anon_sym_DOLLAR;
	v->a[13805] = actions(63);
	v->a[13806] = 1;
	v->a[13807] = anon_sym_DQUOTE;
	v->a[13808] = actions(67);
	v->a[13809] = 1;
	v->a[13810] = anon_sym_DOLLAR_LBRACE;
	v->a[13811] = actions(69);
	v->a[13812] = 1;
	v->a[13813] = anon_sym_DOLLAR_LPAREN;
	v->a[13814] = actions(71);
	v->a[13815] = 1;
	v->a[13816] = anon_sym_BQUOTE;
	v->a[13817] = actions(73);
	v->a[13818] = 1;
	v->a[13819] = sym_file_descriptor;
	small_parse_table_691(v);
}

void	small_parse_table_691(t_small_parse_table_array *v)
{
	v->a[13820] = actions(75);
	v->a[13821] = 1;
	v->a[13822] = sym_variable_name;
	v->a[13823] = actions(236);
	v->a[13824] = 1;
	v->a[13825] = sym_word;
	v->a[13826] = actions(238);
	v->a[13827] = 1;
	v->a[13828] = anon_sym_BANG;
	v->a[13829] = state(140);
	v->a[13830] = 1;
	v->a[13831] = aux_sym__statements_repeat1;
	v->a[13832] = state(189);
	v->a[13833] = 1;
	v->a[13834] = sym_command_name;
	v->a[13835] = state(286);
	v->a[13836] = 1;
	v->a[13837] = sym_variable_assignment;
	v->a[13838] = state(647);
	v->a[13839] = 1;
	small_parse_table_692(v);
}

void	small_parse_table_692(t_small_parse_table_array *v)
{
	v->a[13840] = sym_concatenation;
	v->a[13841] = state(746);
	v->a[13842] = 1;
	v->a[13843] = aux_sym_command_repeat1;
	v->a[13844] = state(905);
	v->a[13845] = 1;
	v->a[13846] = sym_file_redirect;
	v->a[13847] = state(1422);
	v->a[13848] = 1;
	v->a[13849] = sym_pipeline;
	v->a[13850] = state(1429);
	v->a[13851] = 1;
	v->a[13852] = aux_sym_redirected_statement_repeat2;
	v->a[13853] = state(2271);
	v->a[13854] = 1;
	v->a[13855] = sym__statement_not_pipeline;
	v->a[13856] = state(2409);
	v->a[13857] = 1;
	v->a[13858] = sym__statements;
	v->a[13859] = actions(11);
	small_parse_table_693(v);
}

void	small_parse_table_693(t_small_parse_table_array *v)
{
	v->a[13860] = 2;
	v->a[13861] = anon_sym_while;
	v->a[13862] = anon_sym_until;
	v->a[13863] = actions(57);
	v->a[13864] = 2;
	v->a[13865] = anon_sym_LT_AMP_DASH;
	v->a[13866] = anon_sym_GT_AMP_DASH;
	v->a[13867] = actions(65);
	v->a[13868] = 2;
	v->a[13869] = sym_raw_string;
	v->a[13870] = sym_number;
	v->a[13871] = state(394);
	v->a[13872] = 5;
	v->a[13873] = sym_arithmetic_expansion;
	v->a[13874] = sym_string;
	v->a[13875] = sym_simple_expansion;
	v->a[13876] = sym_expansion;
	v->a[13877] = sym_command_substitution;
	v->a[13878] = actions(55);
	v->a[13879] = 8;
	small_parse_table_694(v);
}

void	small_parse_table_694(t_small_parse_table_array *v)
{
	v->a[13880] = anon_sym_LT;
	v->a[13881] = anon_sym_GT;
	v->a[13882] = anon_sym_GT_GT;
	v->a[13883] = anon_sym_AMP_GT;
	v->a[13884] = anon_sym_AMP_GT_GT;
	v->a[13885] = anon_sym_LT_AMP;
	v->a[13886] = anon_sym_GT_AMP;
	v->a[13887] = anon_sym_GT_PIPE;
	v->a[13888] = state(1211);
	v->a[13889] = 12;
	v->a[13890] = sym_redirected_statement;
	v->a[13891] = sym_for_statement;
	v->a[13892] = sym_while_statement;
	v->a[13893] = sym_if_statement;
	v->a[13894] = sym_case_statement;
	v->a[13895] = sym_function_definition;
	v->a[13896] = sym_compound_statement;
	v->a[13897] = sym_subshell;
	v->a[13898] = sym_list;
	v->a[13899] = sym_negated_command;
	small_parse_table_695(v);
}

/* EOF small_parse_table_138.c */
