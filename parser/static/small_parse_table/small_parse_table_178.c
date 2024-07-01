/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_178.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_890(t_small_parse_table_array *v)
{
	v->a[17800] = anon_sym_BANG;
	v->a[17801] = actions(59);
	v->a[17802] = 1;
	v->a[17803] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17804] = actions(61);
	v->a[17805] = 1;
	v->a[17806] = anon_sym_DOLLAR;
	v->a[17807] = actions(63);
	v->a[17808] = 1;
	v->a[17809] = anon_sym_DQUOTE;
	v->a[17810] = actions(67);
	v->a[17811] = 1;
	v->a[17812] = anon_sym_DOLLAR_LBRACE;
	v->a[17813] = actions(69);
	v->a[17814] = 1;
	v->a[17815] = anon_sym_DOLLAR_LPAREN;
	v->a[17816] = actions(71);
	v->a[17817] = 1;
	v->a[17818] = anon_sym_BQUOTE;
	v->a[17819] = actions(73);
	small_parse_table_891(v);
}

void	small_parse_table_891(t_small_parse_table_array *v)
{
	v->a[17820] = 1;
	v->a[17821] = sym_file_descriptor;
	v->a[17822] = actions(75);
	v->a[17823] = 1;
	v->a[17824] = sym_variable_name;
	v->a[17825] = state(189);
	v->a[17826] = 1;
	v->a[17827] = sym_command_name;
	v->a[17828] = state(397);
	v->a[17829] = 1;
	v->a[17830] = sym_variable_assignment;
	v->a[17831] = state(650);
	v->a[17832] = 1;
	v->a[17833] = sym_concatenation;
	v->a[17834] = state(712);
	v->a[17835] = 1;
	v->a[17836] = sym_file_redirect;
	v->a[17837] = state(713);
	v->a[17838] = 1;
	v->a[17839] = aux_sym_command_repeat1;
	small_parse_table_892(v);
}

void	small_parse_table_892(t_small_parse_table_array *v)
{
	v->a[17840] = state(1315);
	v->a[17841] = 1;
	v->a[17842] = sym_pipeline;
	v->a[17843] = state(1333);
	v->a[17844] = 1;
	v->a[17845] = aux_sym_redirected_statement_repeat2;
	v->a[17846] = state(2103);
	v->a[17847] = 1;
	v->a[17848] = sym__statement_not_pipeline;
	v->a[17849] = actions(11);
	v->a[17850] = 2;
	v->a[17851] = anon_sym_while;
	v->a[17852] = anon_sym_until;
	v->a[17853] = actions(57);
	v->a[17854] = 2;
	v->a[17855] = anon_sym_LT_AMP_DASH;
	v->a[17856] = anon_sym_GT_AMP_DASH;
	v->a[17857] = actions(65);
	v->a[17858] = 2;
	v->a[17859] = sym_raw_string;
	small_parse_table_893(v);
}

void	small_parse_table_893(t_small_parse_table_array *v)
{
	v->a[17860] = sym_number;
	v->a[17861] = state(443);
	v->a[17862] = 5;
	v->a[17863] = sym_arithmetic_expansion;
	v->a[17864] = sym_string;
	v->a[17865] = sym_simple_expansion;
	v->a[17866] = sym_expansion;
	v->a[17867] = sym_command_substitution;
	v->a[17868] = actions(55);
	v->a[17869] = 6;
	v->a[17870] = anon_sym_LT;
	v->a[17871] = anon_sym_GT;
	v->a[17872] = anon_sym_GT_GT;
	v->a[17873] = anon_sym_LT_AMP;
	v->a[17874] = anon_sym_GT_AMP;
	v->a[17875] = anon_sym_GT_PIPE;
	v->a[17876] = state(1320);
	v->a[17877] = 12;
	v->a[17878] = sym_redirected_statement;
	v->a[17879] = sym_for_statement;
	small_parse_table_894(v);
}

void	small_parse_table_894(t_small_parse_table_array *v)
{
	v->a[17880] = sym_while_statement;
	v->a[17881] = sym_if_statement;
	v->a[17882] = sym_case_statement;
	v->a[17883] = sym_function_definition;
	v->a[17884] = sym_compound_statement;
	v->a[17885] = sym_subshell;
	v->a[17886] = sym_list;
	v->a[17887] = sym_negated_command;
	v->a[17888] = sym_command;
	v->a[17889] = sym__variable_assignments;
	v->a[17890] = 30;
	v->a[17891] = actions(3);
	v->a[17892] = 1;
	v->a[17893] = sym_comment;
	v->a[17894] = actions(9);
	v->a[17895] = 1;
	v->a[17896] = anon_sym_for;
	v->a[17897] = actions(13);
	v->a[17898] = 1;
	v->a[17899] = anon_sym_if;
	small_parse_table_895(v);
}

/* EOF small_parse_table_178.c */
