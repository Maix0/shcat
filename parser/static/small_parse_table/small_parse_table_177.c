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
	v->a[17700] = actions(97);
	v->a[17701] = 1;
	v->a[17702] = anon_sym_LPAREN;
	v->a[17703] = actions(101);
	v->a[17704] = 1;
	v->a[17705] = anon_sym_LBRACE;
	v->a[17706] = actions(107);
	v->a[17707] = 1;
	v->a[17708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17709] = actions(109);
	v->a[17710] = 1;
	v->a[17711] = anon_sym_DOLLAR;
	v->a[17712] = actions(111);
	v->a[17713] = 1;
	v->a[17714] = anon_sym_DQUOTE;
	v->a[17715] = actions(115);
	v->a[17716] = 1;
	v->a[17717] = anon_sym_DOLLAR_LBRACE;
	v->a[17718] = actions(117);
	v->a[17719] = 1;
	small_parse_table_886(v);
}

void	small_parse_table_886(t_small_parse_table_array *v)
{
	v->a[17720] = anon_sym_DOLLAR_LPAREN;
	v->a[17721] = actions(119);
	v->a[17722] = 1;
	v->a[17723] = anon_sym_BQUOTE;
	v->a[17724] = actions(121);
	v->a[17725] = 1;
	v->a[17726] = sym_file_descriptor;
	v->a[17727] = actions(359);
	v->a[17728] = 1;
	v->a[17729] = sym_variable_name;
	v->a[17730] = state(178);
	v->a[17731] = 1;
	v->a[17732] = sym_command_name;
	v->a[17733] = state(592);
	v->a[17734] = 1;
	v->a[17735] = sym_concatenation;
	v->a[17736] = state(641);
	v->a[17737] = 1;
	v->a[17738] = sym_file_redirect;
	v->a[17739] = state(662);
	small_parse_table_887(v);
}

void	small_parse_table_887(t_small_parse_table_array *v)
{
	v->a[17740] = 1;
	v->a[17741] = aux_sym_command_repeat1;
	v->a[17742] = state(1123);
	v->a[17743] = 1;
	v->a[17744] = aux_sym_redirected_statement_repeat2;
	v->a[17745] = state(1185);
	v->a[17746] = 1;
	v->a[17747] = sym_variable_assignment;
	v->a[17748] = actions(91);
	v->a[17749] = 2;
	v->a[17750] = anon_sym_while;
	v->a[17751] = anon_sym_until;
	v->a[17752] = actions(113);
	v->a[17753] = 3;
	v->a[17754] = sym_raw_string;
	v->a[17755] = sym_number;
	v->a[17756] = sym_word;
	v->a[17757] = state(359);
	v->a[17758] = 5;
	v->a[17759] = sym_arithmetic_expansion;
	small_parse_table_888(v);
}

void	small_parse_table_888(t_small_parse_table_array *v)
{
	v->a[17760] = sym_string;
	v->a[17761] = sym_simple_expansion;
	v->a[17762] = sym_expansion;
	v->a[17763] = sym_command_substitution;
	v->a[17764] = actions(105);
	v->a[17765] = 7;
	v->a[17766] = anon_sym_LT;
	v->a[17767] = anon_sym_GT;
	v->a[17768] = anon_sym_GT_GT;
	v->a[17769] = anon_sym_LT_AMP;
	v->a[17770] = anon_sym_GT_AMP;
	v->a[17771] = anon_sym_GT_PIPE;
	v->a[17772] = anon_sym_LT_GT;
	v->a[17773] = state(1234);
	v->a[17774] = 7;
	v->a[17775] = sym_for_statement;
	v->a[17776] = sym_while_statement;
	v->a[17777] = sym_if_statement;
	v->a[17778] = sym_compound_statement;
	v->a[17779] = sym_subshell;
	small_parse_table_889(v);
}

void	small_parse_table_889(t_small_parse_table_array *v)
{
	v->a[17780] = sym_command;
	v->a[17781] = sym__variable_assignments;
	v->a[17782] = 24;
	v->a[17783] = actions(3);
	v->a[17784] = 1;
	v->a[17785] = sym_comment;
	v->a[17786] = actions(9);
	v->a[17787] = 1;
	v->a[17788] = anon_sym_for;
	v->a[17789] = actions(13);
	v->a[17790] = 1;
	v->a[17791] = anon_sym_if;
	v->a[17792] = actions(17);
	v->a[17793] = 1;
	v->a[17794] = anon_sym_LPAREN;
	v->a[17795] = actions(19);
	v->a[17796] = 1;
	v->a[17797] = anon_sym_LBRACE;
	v->a[17798] = actions(55);
	v->a[17799] = 1;
	small_parse_table_890(v);
}

/* EOF small_parse_table_177.c */
