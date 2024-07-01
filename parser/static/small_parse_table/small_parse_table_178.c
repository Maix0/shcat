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
	v->a[17800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17801] = actions(57);
	v->a[17802] = 1;
	v->a[17803] = anon_sym_DOLLAR;
	v->a[17804] = actions(59);
	v->a[17805] = 1;
	v->a[17806] = anon_sym_DQUOTE;
	v->a[17807] = actions(63);
	v->a[17808] = 1;
	v->a[17809] = anon_sym_DOLLAR_LBRACE;
	v->a[17810] = actions(65);
	v->a[17811] = 1;
	v->a[17812] = anon_sym_DOLLAR_LPAREN;
	v->a[17813] = actions(67);
	v->a[17814] = 1;
	v->a[17815] = anon_sym_BQUOTE;
	v->a[17816] = actions(355);
	v->a[17817] = 1;
	v->a[17818] = sym_file_descriptor;
	v->a[17819] = actions(359);
	small_parse_table_891(v);
}

void	small_parse_table_891(t_small_parse_table_array *v)
{
	v->a[17820] = 1;
	v->a[17821] = sym_variable_name;
	v->a[17822] = state(261);
	v->a[17823] = 1;
	v->a[17824] = sym_command_name;
	v->a[17825] = state(603);
	v->a[17826] = 1;
	v->a[17827] = sym_concatenation;
	v->a[17828] = state(644);
	v->a[17829] = 1;
	v->a[17830] = sym_file_redirect;
	v->a[17831] = state(705);
	v->a[17832] = 1;
	v->a[17833] = aux_sym_command_repeat1;
	v->a[17834] = state(1118);
	v->a[17835] = 1;
	v->a[17836] = sym_variable_assignment;
	v->a[17837] = state(1380);
	v->a[17838] = 1;
	v->a[17839] = aux_sym_redirected_statement_repeat2;
	small_parse_table_892(v);
}

void	small_parse_table_892(t_small_parse_table_array *v)
{
	v->a[17840] = actions(11);
	v->a[17841] = 2;
	v->a[17842] = anon_sym_while;
	v->a[17843] = anon_sym_until;
	v->a[17844] = actions(353);
	v->a[17845] = 3;
	v->a[17846] = sym_raw_string;
	v->a[17847] = sym_number;
	v->a[17848] = sym_word;
	v->a[17849] = state(625);
	v->a[17850] = 5;
	v->a[17851] = sym_arithmetic_expansion;
	v->a[17852] = sym_string;
	v->a[17853] = sym_simple_expansion;
	v->a[17854] = sym_expansion;
	v->a[17855] = sym_command_substitution;
	v->a[17856] = actions(351);
	v->a[17857] = 7;
	v->a[17858] = anon_sym_LT;
	v->a[17859] = anon_sym_GT;
	small_parse_table_893(v);
}

void	small_parse_table_893(t_small_parse_table_array *v)
{
	v->a[17860] = anon_sym_GT_GT;
	v->a[17861] = anon_sym_LT_AMP;
	v->a[17862] = anon_sym_GT_AMP;
	v->a[17863] = anon_sym_GT_PIPE;
	v->a[17864] = anon_sym_LT_GT;
	v->a[17865] = state(1115);
	v->a[17866] = 7;
	v->a[17867] = sym_for_statement;
	v->a[17868] = sym_while_statement;
	v->a[17869] = sym_if_statement;
	v->a[17870] = sym_compound_statement;
	v->a[17871] = sym_subshell;
	v->a[17872] = sym_command;
	v->a[17873] = sym__variable_assignments;
	v->a[17874] = 24;
	v->a[17875] = actions(3);
	v->a[17876] = 1;
	v->a[17877] = sym_comment;
	v->a[17878] = actions(9);
	v->a[17879] = 1;
	small_parse_table_894(v);
}

void	small_parse_table_894(t_small_parse_table_array *v)
{
	v->a[17880] = anon_sym_for;
	v->a[17881] = actions(13);
	v->a[17882] = 1;
	v->a[17883] = anon_sym_if;
	v->a[17884] = actions(17);
	v->a[17885] = 1;
	v->a[17886] = anon_sym_LPAREN;
	v->a[17887] = actions(19);
	v->a[17888] = 1;
	v->a[17889] = anon_sym_LBRACE;
	v->a[17890] = actions(55);
	v->a[17891] = 1;
	v->a[17892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17893] = actions(57);
	v->a[17894] = 1;
	v->a[17895] = anon_sym_DOLLAR;
	v->a[17896] = actions(59);
	v->a[17897] = 1;
	v->a[17898] = anon_sym_DQUOTE;
	v->a[17899] = actions(63);
	small_parse_table_895(v);
}

/* EOF small_parse_table_178.c */
