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
	v->a[17700] = 1;
	v->a[17701] = sym_word;
	v->a[17702] = actions(365);
	v->a[17703] = 1;
	v->a[17704] = anon_sym_BANG;
	v->a[17705] = actions(373);
	v->a[17706] = 1;
	v->a[17707] = sym_file_descriptor;
	v->a[17708] = actions(375);
	v->a[17709] = 1;
	v->a[17710] = sym_variable_name;
	v->a[17711] = state(308);
	v->a[17712] = 1;
	v->a[17713] = sym_command_name;
	v->a[17714] = state(643);
	v->a[17715] = 1;
	v->a[17716] = sym_variable_assignment;
	v->a[17717] = state(650);
	v->a[17718] = 1;
	v->a[17719] = sym_concatenation;
	small_parse_table_886(v);
}

void	small_parse_table_886(t_small_parse_table_array *v)
{
	v->a[17720] = state(669);
	v->a[17721] = 1;
	v->a[17722] = aux_sym_command_repeat1;
	v->a[17723] = state(712);
	v->a[17724] = 1;
	v->a[17725] = sym_file_redirect;
	v->a[17726] = state(1441);
	v->a[17727] = 1;
	v->a[17728] = aux_sym_redirected_statement_repeat2;
	v->a[17729] = state(1466);
	v->a[17730] = 1;
	v->a[17731] = sym_pipeline;
	v->a[17732] = state(2106);
	v->a[17733] = 1;
	v->a[17734] = sym__statement_not_pipeline;
	v->a[17735] = actions(11);
	v->a[17736] = 2;
	v->a[17737] = anon_sym_while;
	v->a[17738] = anon_sym_until;
	v->a[17739] = actions(369);
	small_parse_table_887(v);
}

void	small_parse_table_887(t_small_parse_table_array *v)
{
	v->a[17740] = 2;
	v->a[17741] = anon_sym_LT_AMP_DASH;
	v->a[17742] = anon_sym_GT_AMP_DASH;
	v->a[17743] = actions(371);
	v->a[17744] = 2;
	v->a[17745] = sym_raw_string;
	v->a[17746] = sym_number;
	v->a[17747] = state(711);
	v->a[17748] = 5;
	v->a[17749] = sym_arithmetic_expansion;
	v->a[17750] = sym_string;
	v->a[17751] = sym_simple_expansion;
	v->a[17752] = sym_expansion;
	v->a[17753] = sym_command_substitution;
	v->a[17754] = actions(367);
	v->a[17755] = 6;
	v->a[17756] = anon_sym_LT;
	v->a[17757] = anon_sym_GT;
	v->a[17758] = anon_sym_GT_GT;
	v->a[17759] = anon_sym_LT_AMP;
	small_parse_table_888(v);
}

void	small_parse_table_888(t_small_parse_table_array *v)
{
	v->a[17760] = anon_sym_GT_AMP;
	v->a[17761] = anon_sym_GT_PIPE;
	v->a[17762] = state(1400);
	v->a[17763] = 12;
	v->a[17764] = sym_redirected_statement;
	v->a[17765] = sym_for_statement;
	v->a[17766] = sym_while_statement;
	v->a[17767] = sym_if_statement;
	v->a[17768] = sym_case_statement;
	v->a[17769] = sym_function_definition;
	v->a[17770] = sym_compound_statement;
	v->a[17771] = sym_subshell;
	v->a[17772] = sym_list;
	v->a[17773] = sym_negated_command;
	v->a[17774] = sym_command;
	v->a[17775] = sym__variable_assignments;
	v->a[17776] = 30;
	v->a[17777] = actions(3);
	v->a[17778] = 1;
	v->a[17779] = sym_comment;
	small_parse_table_889(v);
}

void	small_parse_table_889(t_small_parse_table_array *v)
{
	v->a[17780] = actions(9);
	v->a[17781] = 1;
	v->a[17782] = anon_sym_for;
	v->a[17783] = actions(13);
	v->a[17784] = 1;
	v->a[17785] = anon_sym_if;
	v->a[17786] = actions(15);
	v->a[17787] = 1;
	v->a[17788] = anon_sym_case;
	v->a[17789] = actions(17);
	v->a[17790] = 1;
	v->a[17791] = anon_sym_LPAREN;
	v->a[17792] = actions(19);
	v->a[17793] = 1;
	v->a[17794] = anon_sym_LBRACE;
	v->a[17795] = actions(45);
	v->a[17796] = 1;
	v->a[17797] = sym_word;
	v->a[17798] = actions(53);
	v->a[17799] = 1;
	small_parse_table_890(v);
}

/* EOF small_parse_table_177.c */
