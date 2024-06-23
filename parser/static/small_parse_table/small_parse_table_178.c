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
	v->a[17800] = anon_sym_until;
	v->a[17801] = actions(343);
	v->a[17802] = 2;
	v->a[17803] = anon_sym_LT_AMP_DASH;
	v->a[17804] = anon_sym_GT_AMP_DASH;
	v->a[17805] = actions(351);
	v->a[17806] = 2;
	v->a[17807] = sym_raw_string;
	v->a[17808] = sym_number;
	v->a[17809] = state(903);
	v->a[17810] = 5;
	v->a[17811] = sym_arithmetic_expansion;
	v->a[17812] = sym_string;
	v->a[17813] = sym_simple_expansion;
	v->a[17814] = sym_expansion;
	v->a[17815] = sym_command_substitution;
	v->a[17816] = actions(341);
	v->a[17817] = 8;
	v->a[17818] = anon_sym_LT;
	v->a[17819] = anon_sym_GT;
	small_parse_table_891(v);
}

void	small_parse_table_891(t_small_parse_table_array *v)
{
	v->a[17820] = anon_sym_GT_GT;
	v->a[17821] = anon_sym_AMP_GT;
	v->a[17822] = anon_sym_AMP_GT_GT;
	v->a[17823] = anon_sym_LT_AMP;
	v->a[17824] = anon_sym_GT_AMP;
	v->a[17825] = anon_sym_GT_PIPE;
	v->a[17826] = state(1561);
	v->a[17827] = 12;
	v->a[17828] = sym_redirected_statement;
	v->a[17829] = sym_for_statement;
	v->a[17830] = sym_while_statement;
	v->a[17831] = sym_if_statement;
	v->a[17832] = sym_case_statement;
	v->a[17833] = sym_function_definition;
	v->a[17834] = sym_compound_statement;
	v->a[17835] = sym_subshell;
	v->a[17836] = sym_list;
	v->a[17837] = sym_negated_command;
	v->a[17838] = sym_command;
	v->a[17839] = sym__variable_assignments;
	small_parse_table_892(v);
}

void	small_parse_table_892(t_small_parse_table_array *v)
{
	v->a[17840] = 29;
	v->a[17841] = actions(3);
	v->a[17842] = 1;
	v->a[17843] = sym_comment;
	v->a[17844] = actions(9);
	v->a[17845] = 1;
	v->a[17846] = anon_sym_for;
	v->a[17847] = actions(13);
	v->a[17848] = 1;
	v->a[17849] = anon_sym_if;
	v->a[17850] = actions(15);
	v->a[17851] = 1;
	v->a[17852] = anon_sym_case;
	v->a[17853] = actions(17);
	v->a[17854] = 1;
	v->a[17855] = anon_sym_LPAREN;
	v->a[17856] = actions(19);
	v->a[17857] = 1;
	v->a[17858] = anon_sym_LBRACE;
	v->a[17859] = actions(59);
	small_parse_table_893(v);
}

void	small_parse_table_893(t_small_parse_table_array *v)
{
	v->a[17860] = 1;
	v->a[17861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17862] = actions(61);
	v->a[17863] = 1;
	v->a[17864] = anon_sym_DOLLAR;
	v->a[17865] = actions(63);
	v->a[17866] = 1;
	v->a[17867] = anon_sym_DQUOTE;
	v->a[17868] = actions(67);
	v->a[17869] = 1;
	v->a[17870] = anon_sym_DOLLAR_LBRACE;
	v->a[17871] = actions(69);
	v->a[17872] = 1;
	v->a[17873] = anon_sym_DOLLAR_LPAREN;
	v->a[17874] = actions(71);
	v->a[17875] = 1;
	v->a[17876] = anon_sym_BQUOTE;
	v->a[17877] = actions(220);
	v->a[17878] = 1;
	v->a[17879] = sym_word;
	small_parse_table_894(v);
}

void	small_parse_table_894(t_small_parse_table_array *v)
{
	v->a[17880] = actions(222);
	v->a[17881] = 1;
	v->a[17882] = anon_sym_BANG;
	v->a[17883] = actions(230);
	v->a[17884] = 1;
	v->a[17885] = sym_file_descriptor;
	v->a[17886] = actions(232);
	v->a[17887] = 1;
	v->a[17888] = sym_variable_name;
	v->a[17889] = state(184);
	v->a[17890] = 1;
	v->a[17891] = sym_command_name;
	v->a[17892] = state(256);
	v->a[17893] = 1;
	v->a[17894] = sym_variable_assignment;
	v->a[17895] = state(647);
	v->a[17896] = 1;
	v->a[17897] = sym_concatenation;
	v->a[17898] = state(738);
	v->a[17899] = 1;
	small_parse_table_895(v);
}

/* EOF small_parse_table_178.c */
