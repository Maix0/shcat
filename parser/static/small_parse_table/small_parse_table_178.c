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
	v->a[17800] = 1;
	v->a[17801] = sym_variable_assignment;
	v->a[17802] = state(663);
	v->a[17803] = 1;
	v->a[17804] = aux_sym_command_repeat1;
	v->a[17805] = state(665);
	v->a[17806] = 1;
	v->a[17807] = sym_concatenation;
	v->a[17808] = state(749);
	v->a[17809] = 1;
	v->a[17810] = sym_file_redirect;
	v->a[17811] = state(1145);
	v->a[17812] = 1;
	v->a[17813] = aux_sym_redirected_statement_repeat2;
	v->a[17814] = state(1207);
	v->a[17815] = 1;
	v->a[17816] = sym_pipeline;
	v->a[17817] = state(2040);
	v->a[17818] = 1;
	v->a[17819] = sym__statement_not_pipeline;
	small_parse_table_891(v);
}

void	small_parse_table_891(t_small_parse_table_array *v)
{
	v->a[17820] = actions(99);
	v->a[17821] = 2;
	v->a[17822] = anon_sym_while;
	v->a[17823] = anon_sym_until;
	v->a[17824] = actions(115);
	v->a[17825] = 2;
	v->a[17826] = anon_sym_LT_AMP_DASH;
	v->a[17827] = anon_sym_GT_AMP_DASH;
	v->a[17828] = state(282);
	v->a[17829] = 6;
	v->a[17830] = sym_arithmetic_expansion;
	v->a[17831] = sym_string;
	v->a[17832] = sym_number;
	v->a[17833] = sym_simple_expansion;
	v->a[17834] = sym_expansion;
	v->a[17835] = sym_command_substitution;
	v->a[17836] = actions(113);
	v->a[17837] = 8;
	v->a[17838] = anon_sym_LT;
	v->a[17839] = anon_sym_GT;
	small_parse_table_892(v);
}

void	small_parse_table_892(t_small_parse_table_array *v)
{
	v->a[17840] = anon_sym_GT_GT;
	v->a[17841] = anon_sym_AMP_GT;
	v->a[17842] = anon_sym_AMP_GT_GT;
	v->a[17843] = anon_sym_LT_AMP;
	v->a[17844] = anon_sym_GT_AMP;
	v->a[17845] = anon_sym_GT_PIPE;
	v->a[17846] = state(1040);
	v->a[17847] = 12;
	v->a[17848] = sym_redirected_statement;
	v->a[17849] = sym_for_statement;
	v->a[17850] = sym_while_statement;
	v->a[17851] = sym_if_statement;
	v->a[17852] = sym_case_statement;
	v->a[17853] = sym_function_definition;
	v->a[17854] = sym_compound_statement;
	v->a[17855] = sym_subshell;
	v->a[17856] = sym_list;
	v->a[17857] = sym_negated_command;
	v->a[17858] = sym_command;
	v->a[17859] = sym_variable_assignments;
	small_parse_table_893(v);
}

void	small_parse_table_893(t_small_parse_table_array *v)
{
	v->a[17860] = 33;
	v->a[17861] = actions(3);
	v->a[17862] = 1;
	v->a[17863] = sym_comment;
	v->a[17864] = actions(7);
	v->a[17865] = 1;
	v->a[17866] = sym_word;
	v->a[17867] = actions(9);
	v->a[17868] = 1;
	v->a[17869] = anon_sym_for;
	v->a[17870] = actions(13);
	v->a[17871] = 1;
	v->a[17872] = anon_sym_if;
	v->a[17873] = actions(15);
	v->a[17874] = 1;
	v->a[17875] = anon_sym_case;
	v->a[17876] = actions(17);
	v->a[17877] = 1;
	v->a[17878] = anon_sym_LPAREN;
	v->a[17879] = actions(19);
	small_parse_table_894(v);
}

void	small_parse_table_894(t_small_parse_table_array *v)
{
	v->a[17880] = 1;
	v->a[17881] = anon_sym_LBRACE;
	v->a[17882] = actions(21);
	v->a[17883] = 1;
	v->a[17884] = anon_sym_BANG;
	v->a[17885] = actions(27);
	v->a[17886] = 1;
	v->a[17887] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17888] = actions(29);
	v->a[17889] = 1;
	v->a[17890] = anon_sym_DOLLAR;
	v->a[17891] = actions(31);
	v->a[17892] = 1;
	v->a[17893] = anon_sym_DQUOTE;
	v->a[17894] = actions(33);
	v->a[17895] = 1;
	v->a[17896] = sym_raw_string;
	v->a[17897] = actions(35);
	v->a[17898] = 1;
	v->a[17899] = aux_sym_number_token1;
	small_parse_table_895(v);
}

/* EOF small_parse_table_178.c */
