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
	v->a[13800] = sym_compound_statement;
	v->a[13801] = sym_subshell;
	v->a[13802] = sym_list;
	v->a[13803] = sym_negated_command;
	v->a[13804] = sym_command;
	v->a[13805] = sym_variable_assignments;
	v->a[13806] = 34;
	v->a[13807] = actions(3);
	v->a[13808] = 1;
	v->a[13809] = sym_comment;
	v->a[13810] = actions(9);
	v->a[13811] = 1;
	v->a[13812] = anon_sym_for;
	v->a[13813] = actions(13);
	v->a[13814] = 1;
	v->a[13815] = anon_sym_if;
	v->a[13816] = actions(15);
	v->a[13817] = 1;
	v->a[13818] = anon_sym_case;
	v->a[13819] = actions(17);
	small_parse_table_691(v);
}

void	small_parse_table_691(t_small_parse_table_array *v)
{
	v->a[13820] = 1;
	v->a[13821] = anon_sym_LPAREN;
	v->a[13822] = actions(19);
	v->a[13823] = 1;
	v->a[13824] = anon_sym_LBRACE;
	v->a[13825] = actions(63);
	v->a[13826] = 1;
	v->a[13827] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13828] = actions(65);
	v->a[13829] = 1;
	v->a[13830] = anon_sym_DOLLAR;
	v->a[13831] = actions(67);
	v->a[13832] = 1;
	v->a[13833] = anon_sym_DQUOTE;
	v->a[13834] = actions(69);
	v->a[13835] = 1;
	v->a[13836] = sym_raw_string;
	v->a[13837] = actions(71);
	v->a[13838] = 1;
	v->a[13839] = aux_sym_number_token1;
	small_parse_table_692(v);
}

void	small_parse_table_692(t_small_parse_table_array *v)
{
	v->a[13840] = actions(73);
	v->a[13841] = 1;
	v->a[13842] = aux_sym_number_token2;
	v->a[13843] = actions(75);
	v->a[13844] = 1;
	v->a[13845] = anon_sym_DOLLAR_LBRACE;
	v->a[13846] = actions(77);
	v->a[13847] = 1;
	v->a[13848] = anon_sym_DOLLAR_LPAREN;
	v->a[13849] = actions(79);
	v->a[13850] = 1;
	v->a[13851] = anon_sym_BQUOTE;
	v->a[13852] = actions(81);
	v->a[13853] = 1;
	v->a[13854] = sym_file_descriptor;
	v->a[13855] = actions(83);
	v->a[13856] = 1;
	v->a[13857] = sym_variable_name;
	v->a[13858] = actions(238);
	v->a[13859] = 1;
	small_parse_table_693(v);
}

void	small_parse_table_693(t_small_parse_table_array *v)
{
	v->a[13860] = sym_word;
	v->a[13861] = actions(240);
	v->a[13862] = 1;
	v->a[13863] = anon_sym_BANG;
	v->a[13864] = state(132);
	v->a[13865] = 1;
	v->a[13866] = aux_sym__statements_repeat1;
	v->a[13867] = state(185);
	v->a[13868] = 1;
	v->a[13869] = sym_command_name;
	v->a[13870] = state(297);
	v->a[13871] = 1;
	v->a[13872] = sym_variable_assignment;
	v->a[13873] = state(582);
	v->a[13874] = 1;
	v->a[13875] = sym_concatenation;
	v->a[13876] = state(614);
	v->a[13877] = 1;
	v->a[13878] = aux_sym_command_repeat1;
	v->a[13879] = state(769);
	small_parse_table_694(v);
}

void	small_parse_table_694(t_small_parse_table_array *v)
{
	v->a[13880] = 1;
	v->a[13881] = sym_file_redirect;
	v->a[13882] = state(1133);
	v->a[13883] = 1;
	v->a[13884] = aux_sym_redirected_statement_repeat2;
	v->a[13885] = state(1142);
	v->a[13886] = 1;
	v->a[13887] = sym_pipeline;
	v->a[13888] = state(2041);
	v->a[13889] = 1;
	v->a[13890] = sym__statement_not_pipeline;
	v->a[13891] = state(2196);
	v->a[13892] = 1;
	v->a[13893] = sym__statements;
	v->a[13894] = actions(11);
	v->a[13895] = 2;
	v->a[13896] = anon_sym_while;
	v->a[13897] = anon_sym_until;
	v->a[13898] = actions(61);
	v->a[13899] = 2;
	small_parse_table_695(v);
}

/* EOF small_parse_table_138.c */
