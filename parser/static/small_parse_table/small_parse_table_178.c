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
	v->a[17800] = 2;
	v->a[17801] = anon_sym_while;
	v->a[17802] = anon_sym_until;
	v->a[17803] = actions(369);
	v->a[17804] = 2;
	v->a[17805] = anon_sym_LT_AMP_DASH;
	v->a[17806] = anon_sym_GT_AMP_DASH;
	v->a[17807] = actions(371);
	v->a[17808] = 2;
	v->a[17809] = sym_raw_string;
	v->a[17810] = sym_number;
	v->a[17811] = state(734);
	v->a[17812] = 5;
	v->a[17813] = sym_arithmetic_expansion;
	v->a[17814] = sym_string;
	v->a[17815] = sym_simple_expansion;
	v->a[17816] = sym_expansion;
	v->a[17817] = sym_command_substitution;
	v->a[17818] = actions(367);
	v->a[17819] = 8;
	small_parse_table_891(v);
}

void	small_parse_table_891(t_small_parse_table_array *v)
{
	v->a[17820] = anon_sym_LT;
	v->a[17821] = anon_sym_GT;
	v->a[17822] = anon_sym_GT_GT;
	v->a[17823] = anon_sym_AMP_GT;
	v->a[17824] = anon_sym_AMP_GT_GT;
	v->a[17825] = anon_sym_LT_AMP;
	v->a[17826] = anon_sym_GT_AMP;
	v->a[17827] = anon_sym_GT_PIPE;
	v->a[17828] = state(1395);
	v->a[17829] = 12;
	v->a[17830] = sym_redirected_statement;
	v->a[17831] = sym_for_statement;
	v->a[17832] = sym_while_statement;
	v->a[17833] = sym_if_statement;
	v->a[17834] = sym_case_statement;
	v->a[17835] = sym_function_definition;
	v->a[17836] = sym_compound_statement;
	v->a[17837] = sym_subshell;
	v->a[17838] = sym_list;
	v->a[17839] = sym_negated_command;
	small_parse_table_892(v);
}

void	small_parse_table_892(t_small_parse_table_array *v)
{
	v->a[17840] = sym_command;
	v->a[17841] = sym__variable_assignments;
	v->a[17842] = 30;
	v->a[17843] = actions(3);
	v->a[17844] = 1;
	v->a[17845] = sym_comment;
	v->a[17846] = actions(9);
	v->a[17847] = 1;
	v->a[17848] = anon_sym_for;
	v->a[17849] = actions(13);
	v->a[17850] = 1;
	v->a[17851] = anon_sym_if;
	v->a[17852] = actions(15);
	v->a[17853] = 1;
	v->a[17854] = anon_sym_case;
	v->a[17855] = actions(17);
	v->a[17856] = 1;
	v->a[17857] = anon_sym_LPAREN;
	v->a[17858] = actions(19);
	v->a[17859] = 1;
	small_parse_table_893(v);
}

void	small_parse_table_893(t_small_parse_table_array *v)
{
	v->a[17860] = anon_sym_LBRACE;
	v->a[17861] = actions(59);
	v->a[17862] = 1;
	v->a[17863] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17864] = actions(61);
	v->a[17865] = 1;
	v->a[17866] = anon_sym_DOLLAR;
	v->a[17867] = actions(63);
	v->a[17868] = 1;
	v->a[17869] = anon_sym_DQUOTE;
	v->a[17870] = actions(67);
	v->a[17871] = 1;
	v->a[17872] = anon_sym_DOLLAR_LBRACE;
	v->a[17873] = actions(69);
	v->a[17874] = 1;
	v->a[17875] = anon_sym_DOLLAR_LPAREN;
	v->a[17876] = actions(71);
	v->a[17877] = 1;
	v->a[17878] = anon_sym_BQUOTE;
	v->a[17879] = actions(363);
	small_parse_table_894(v);
}

void	small_parse_table_894(t_small_parse_table_array *v)
{
	v->a[17880] = 1;
	v->a[17881] = sym_word;
	v->a[17882] = actions(365);
	v->a[17883] = 1;
	v->a[17884] = anon_sym_BANG;
	v->a[17885] = actions(373);
	v->a[17886] = 1;
	v->a[17887] = sym_file_descriptor;
	v->a[17888] = actions(375);
	v->a[17889] = 1;
	v->a[17890] = sym_variable_name;
	v->a[17891] = state(259);
	v->a[17892] = 1;
	v->a[17893] = sym_command_name;
	v->a[17894] = state(620);
	v->a[17895] = 1;
	v->a[17896] = sym_variable_assignment;
	v->a[17897] = state(624);
	v->a[17898] = 1;
	v->a[17899] = sym_concatenation;
	small_parse_table_895(v);
}

/* EOF small_parse_table_178.c */
