/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_177.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_885(t_small_parse_table_array *v)
{
	v->a[17700] = 2;
	v->a[17701] = anon_sym_LT_AMP_DASH;
	v->a[17702] = anon_sym_GT_AMP_DASH;
	v->a[17703] = state(397);
	v->a[17704] = 6;
	v->a[17705] = sym_arithmetic_expansion;
	v->a[17706] = sym_string;
	v->a[17707] = sym_number;
	v->a[17708] = sym_simple_expansion;
	v->a[17709] = sym_expansion;
	v->a[17710] = sym_command_substitution;
	v->a[17711] = actions(59);
	v->a[17712] = 8;
	v->a[17713] = anon_sym_LT;
	v->a[17714] = anon_sym_GT;
	v->a[17715] = anon_sym_GT_GT;
	v->a[17716] = anon_sym_AMP_GT;
	v->a[17717] = anon_sym_AMP_GT_GT;
	v->a[17718] = anon_sym_LT_AMP;
	v->a[17719] = anon_sym_GT_AMP;
	small_parse_table_886(v);
}

void	small_parse_table_886(t_small_parse_table_array *v)
{
	v->a[17720] = anon_sym_GT_PIPE;
	v->a[17721] = state(1121);
	v->a[17722] = 12;
	v->a[17723] = sym_redirected_statement;
	v->a[17724] = sym_for_statement;
	v->a[17725] = sym_while_statement;
	v->a[17726] = sym_if_statement;
	v->a[17727] = sym_case_statement;
	v->a[17728] = sym_function_definition;
	v->a[17729] = sym_compound_statement;
	v->a[17730] = sym_subshell;
	v->a[17731] = sym_list;
	v->a[17732] = sym_negated_command;
	v->a[17733] = sym_command;
	v->a[17734] = sym_variable_assignments;
	v->a[17735] = 33;
	v->a[17736] = actions(3);
	v->a[17737] = 1;
	v->a[17738] = sym_comment;
	v->a[17739] = actions(95);
	small_parse_table_887(v);
}

void	small_parse_table_887(t_small_parse_table_array *v)
{
	v->a[17740] = 1;
	v->a[17741] = sym_word;
	v->a[17742] = actions(97);
	v->a[17743] = 1;
	v->a[17744] = anon_sym_for;
	v->a[17745] = actions(101);
	v->a[17746] = 1;
	v->a[17747] = anon_sym_if;
	v->a[17748] = actions(103);
	v->a[17749] = 1;
	v->a[17750] = anon_sym_case;
	v->a[17751] = actions(105);
	v->a[17752] = 1;
	v->a[17753] = anon_sym_LPAREN;
	v->a[17754] = actions(109);
	v->a[17755] = 1;
	v->a[17756] = anon_sym_LBRACE;
	v->a[17757] = actions(111);
	v->a[17758] = 1;
	v->a[17759] = anon_sym_BANG;
	small_parse_table_888(v);
}

void	small_parse_table_888(t_small_parse_table_array *v)
{
	v->a[17760] = actions(117);
	v->a[17761] = 1;
	v->a[17762] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17763] = actions(119);
	v->a[17764] = 1;
	v->a[17765] = anon_sym_DOLLAR;
	v->a[17766] = actions(121);
	v->a[17767] = 1;
	v->a[17768] = anon_sym_DQUOTE;
	v->a[17769] = actions(123);
	v->a[17770] = 1;
	v->a[17771] = sym_raw_string;
	v->a[17772] = actions(125);
	v->a[17773] = 1;
	v->a[17774] = aux_sym_number_token1;
	v->a[17775] = actions(127);
	v->a[17776] = 1;
	v->a[17777] = aux_sym_number_token2;
	v->a[17778] = actions(129);
	v->a[17779] = 1;
	small_parse_table_889(v);
}

void	small_parse_table_889(t_small_parse_table_array *v)
{
	v->a[17780] = anon_sym_DOLLAR_LBRACE;
	v->a[17781] = actions(131);
	v->a[17782] = 1;
	v->a[17783] = anon_sym_DOLLAR_LPAREN;
	v->a[17784] = actions(133);
	v->a[17785] = 1;
	v->a[17786] = anon_sym_BQUOTE;
	v->a[17787] = actions(135);
	v->a[17788] = 1;
	v->a[17789] = sym_file_descriptor;
	v->a[17790] = actions(137);
	v->a[17791] = 1;
	v->a[17792] = sym_variable_name;
	v->a[17793] = state(135);
	v->a[17794] = 1;
	v->a[17795] = aux_sym__statements_repeat1;
	v->a[17796] = state(173);
	v->a[17797] = 1;
	v->a[17798] = sym_command_name;
	v->a[17799] = state(262);
	small_parse_table_890(v);
}

/* EOF small_parse_table_177.c */
