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
	v->a[17700] = sym_expansion;
	v->a[17701] = sym_command_substitution;
	v->a[17702] = actions(55);
	v->a[17703] = 8;
	v->a[17704] = anon_sym_LT;
	v->a[17705] = anon_sym_GT;
	v->a[17706] = anon_sym_GT_GT;
	v->a[17707] = anon_sym_AMP_GT;
	v->a[17708] = anon_sym_AMP_GT_GT;
	v->a[17709] = anon_sym_LT_AMP;
	v->a[17710] = anon_sym_GT_AMP;
	v->a[17711] = anon_sym_GT_PIPE;
	v->a[17712] = state(1181);
	v->a[17713] = 12;
	v->a[17714] = sym_redirected_statement;
	v->a[17715] = sym_for_statement;
	v->a[17716] = sym_while_statement;
	v->a[17717] = sym_if_statement;
	v->a[17718] = sym_case_statement;
	v->a[17719] = sym_function_definition;
	small_parse_table_886(v);
}

void	small_parse_table_886(t_small_parse_table_array *v)
{
	v->a[17720] = sym_compound_statement;
	v->a[17721] = sym_subshell;
	v->a[17722] = sym_list;
	v->a[17723] = sym_negated_command;
	v->a[17724] = sym_command;
	v->a[17725] = sym__variable_assignments;
	v->a[17726] = 30;
	v->a[17727] = actions(3);
	v->a[17728] = 1;
	v->a[17729] = sym_comment;
	v->a[17730] = actions(9);
	v->a[17731] = 1;
	v->a[17732] = anon_sym_for;
	v->a[17733] = actions(13);
	v->a[17734] = 1;
	v->a[17735] = anon_sym_if;
	v->a[17736] = actions(15);
	v->a[17737] = 1;
	v->a[17738] = anon_sym_case;
	v->a[17739] = actions(17);
	small_parse_table_887(v);
}

void	small_parse_table_887(t_small_parse_table_array *v)
{
	v->a[17740] = 1;
	v->a[17741] = anon_sym_LPAREN;
	v->a[17742] = actions(19);
	v->a[17743] = 1;
	v->a[17744] = anon_sym_LBRACE;
	v->a[17745] = actions(59);
	v->a[17746] = 1;
	v->a[17747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17748] = actions(61);
	v->a[17749] = 1;
	v->a[17750] = anon_sym_DOLLAR;
	v->a[17751] = actions(63);
	v->a[17752] = 1;
	v->a[17753] = anon_sym_DQUOTE;
	v->a[17754] = actions(67);
	v->a[17755] = 1;
	v->a[17756] = anon_sym_DOLLAR_LBRACE;
	v->a[17757] = actions(69);
	v->a[17758] = 1;
	v->a[17759] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_888(v);
}

void	small_parse_table_888(t_small_parse_table_array *v)
{
	v->a[17760] = actions(71);
	v->a[17761] = 1;
	v->a[17762] = anon_sym_BQUOTE;
	v->a[17763] = actions(363);
	v->a[17764] = 1;
	v->a[17765] = sym_word;
	v->a[17766] = actions(365);
	v->a[17767] = 1;
	v->a[17768] = anon_sym_BANG;
	v->a[17769] = actions(373);
	v->a[17770] = 1;
	v->a[17771] = sym_file_descriptor;
	v->a[17772] = actions(375);
	v->a[17773] = 1;
	v->a[17774] = sym_variable_name;
	v->a[17775] = state(259);
	v->a[17776] = 1;
	v->a[17777] = sym_command_name;
	v->a[17778] = state(618);
	v->a[17779] = 1;
	small_parse_table_889(v);
}

void	small_parse_table_889(t_small_parse_table_array *v)
{
	v->a[17780] = sym_variable_assignment;
	v->a[17781] = state(624);
	v->a[17782] = 1;
	v->a[17783] = sym_concatenation;
	v->a[17784] = state(713);
	v->a[17785] = 1;
	v->a[17786] = aux_sym_command_repeat1;
	v->a[17787] = state(726);
	v->a[17788] = 1;
	v->a[17789] = sym_file_redirect;
	v->a[17790] = state(1411);
	v->a[17791] = 1;
	v->a[17792] = sym_pipeline;
	v->a[17793] = state(1420);
	v->a[17794] = 1;
	v->a[17795] = aux_sym_redirected_statement_repeat2;
	v->a[17796] = state(2123);
	v->a[17797] = 1;
	v->a[17798] = sym__statement_not_pipeline;
	v->a[17799] = actions(11);
	small_parse_table_890(v);
}

/* EOF small_parse_table_177.c */
