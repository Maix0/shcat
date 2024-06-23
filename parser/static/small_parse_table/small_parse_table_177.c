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
	v->a[17700] = 8;
	v->a[17701] = anon_sym_LT;
	v->a[17702] = anon_sym_GT;
	v->a[17703] = anon_sym_GT_GT;
	v->a[17704] = anon_sym_AMP_GT;
	v->a[17705] = anon_sym_AMP_GT_GT;
	v->a[17706] = anon_sym_LT_AMP;
	v->a[17707] = anon_sym_GT_AMP;
	v->a[17708] = anon_sym_GT_PIPE;
	v->a[17709] = state(1676);
	v->a[17710] = 13;
	v->a[17711] = sym__statement_not_pipeline;
	v->a[17712] = sym_redirected_statement;
	v->a[17713] = sym_for_statement;
	v->a[17714] = sym_while_statement;
	v->a[17715] = sym_if_statement;
	v->a[17716] = sym_case_statement;
	v->a[17717] = sym_function_definition;
	v->a[17718] = sym_compound_statement;
	v->a[17719] = sym_subshell;
	small_parse_table_886(v);
}

void	small_parse_table_886(t_small_parse_table_array *v)
{
	v->a[17720] = sym_list;
	v->a[17721] = sym_negated_command;
	v->a[17722] = sym_command;
	v->a[17723] = sym__variable_assignments;
	v->a[17724] = 30;
	v->a[17725] = actions(3);
	v->a[17726] = 1;
	v->a[17727] = sym_comment;
	v->a[17728] = actions(325);
	v->a[17729] = 1;
	v->a[17730] = sym_word;
	v->a[17731] = actions(327);
	v->a[17732] = 1;
	v->a[17733] = anon_sym_for;
	v->a[17734] = actions(331);
	v->a[17735] = 1;
	v->a[17736] = anon_sym_if;
	v->a[17737] = actions(333);
	v->a[17738] = 1;
	v->a[17739] = anon_sym_case;
	small_parse_table_887(v);
}

void	small_parse_table_887(t_small_parse_table_array *v)
{
	v->a[17740] = actions(335);
	v->a[17741] = 1;
	v->a[17742] = anon_sym_LPAREN;
	v->a[17743] = actions(337);
	v->a[17744] = 1;
	v->a[17745] = anon_sym_LBRACE;
	v->a[17746] = actions(339);
	v->a[17747] = 1;
	v->a[17748] = anon_sym_BANG;
	v->a[17749] = actions(345);
	v->a[17750] = 1;
	v->a[17751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17752] = actions(347);
	v->a[17753] = 1;
	v->a[17754] = anon_sym_DOLLAR;
	v->a[17755] = actions(349);
	v->a[17756] = 1;
	v->a[17757] = anon_sym_DQUOTE;
	v->a[17758] = actions(353);
	v->a[17759] = 1;
	small_parse_table_888(v);
}

void	small_parse_table_888(t_small_parse_table_array *v)
{
	v->a[17760] = anon_sym_DOLLAR_LBRACE;
	v->a[17761] = actions(355);
	v->a[17762] = 1;
	v->a[17763] = anon_sym_DOLLAR_LPAREN;
	v->a[17764] = actions(357);
	v->a[17765] = 1;
	v->a[17766] = anon_sym_BQUOTE;
	v->a[17767] = actions(359);
	v->a[17768] = 1;
	v->a[17769] = sym_file_descriptor;
	v->a[17770] = actions(361);
	v->a[17771] = 1;
	v->a[17772] = sym_variable_name;
	v->a[17773] = state(298);
	v->a[17774] = 1;
	v->a[17775] = sym_command_name;
	v->a[17776] = state(665);
	v->a[17777] = 1;
	v->a[17778] = aux_sym_command_repeat1;
	v->a[17779] = state(789);
	small_parse_table_889(v);
}

void	small_parse_table_889(t_small_parse_table_array *v)
{
	v->a[17780] = 1;
	v->a[17781] = sym_variable_assignment;
	v->a[17782] = state(1070);
	v->a[17783] = 1;
	v->a[17784] = sym_concatenation;
	v->a[17785] = state(1093);
	v->a[17786] = 1;
	v->a[17787] = sym_file_redirect;
	v->a[17788] = state(1563);
	v->a[17789] = 1;
	v->a[17790] = sym_pipeline;
	v->a[17791] = state(1589);
	v->a[17792] = 1;
	v->a[17793] = aux_sym_redirected_statement_repeat2;
	v->a[17794] = state(2246);
	v->a[17795] = 1;
	v->a[17796] = sym__statement_not_pipeline;
	v->a[17797] = actions(329);
	v->a[17798] = 2;
	v->a[17799] = anon_sym_while;
	small_parse_table_890(v);
}

/* EOF small_parse_table_177.c */
