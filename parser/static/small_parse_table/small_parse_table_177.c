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
	v->a[17700] = actions(599);
	v->a[17701] = 1;
	v->a[17702] = sym_variable_name;
	v->a[17703] = state(428);
	v->a[17704] = 1;
	v->a[17705] = sym_terminator;
	v->a[17706] = actions(595);
	v->a[17707] = 2;
	v->a[17708] = anon_sym_AMP_AMP;
	v->a[17709] = anon_sym_PIPE_PIPE;
	v->a[17710] = state(963);
	v->a[17711] = 2;
	v->a[17712] = sym_variable_assignment;
	v->a[17713] = aux_sym__variable_assignments_repeat1;
	v->a[17714] = actions(593);
	v->a[17715] = 3;
	v->a[17716] = anon_sym_SEMI_SEMI;
	v->a[17717] = aux_sym_heredoc_redirect_token1;
	v->a[17718] = anon_sym_SEMI;
	v->a[17719] = state(916);
	small_parse_table_886(v);
}

void	small_parse_table_886(t_small_parse_table_array *v)
{
	v->a[17720] = 3;
	v->a[17721] = sym_file_redirect;
	v->a[17722] = sym_heredoc_redirect;
	v->a[17723] = aux_sym_redirected_statement_repeat1;
	v->a[17724] = actions(576);
	v->a[17725] = 12;
	v->a[17726] = anon_sym_LT;
	v->a[17727] = anon_sym_GT;
	v->a[17728] = anon_sym_GT_GT;
	v->a[17729] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17730] = anon_sym_DOLLAR;
	v->a[17731] = anon_sym_DQUOTE;
	v->a[17732] = sym_raw_string;
	v->a[17733] = sym_number;
	v->a[17734] = anon_sym_DOLLAR_LBRACE;
	v->a[17735] = anon_sym_DOLLAR_LPAREN;
	v->a[17736] = anon_sym_BQUOTE;
	v->a[17737] = sym_word;
	v->a[17738] = 11;
	v->a[17739] = actions(3);
	small_parse_table_887(v);
}

void	small_parse_table_887(t_small_parse_table_array *v)
{
	v->a[17740] = 1;
	v->a[17741] = sym_comment;
	v->a[17742] = actions(670);
	v->a[17743] = 1;
	v->a[17744] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17745] = actions(673);
	v->a[17746] = 1;
	v->a[17747] = anon_sym_DOLLAR;
	v->a[17748] = actions(676);
	v->a[17749] = 1;
	v->a[17750] = anon_sym_DQUOTE;
	v->a[17751] = actions(679);
	v->a[17752] = 1;
	v->a[17753] = anon_sym_DOLLAR_LBRACE;
	v->a[17754] = actions(682);
	v->a[17755] = 1;
	v->a[17756] = anon_sym_DOLLAR_LPAREN;
	v->a[17757] = actions(685);
	v->a[17758] = 1;
	v->a[17759] = anon_sym_BQUOTE;
	small_parse_table_888(v);
}

void	small_parse_table_888(t_small_parse_table_array *v)
{
	v->a[17760] = state(187);
	v->a[17761] = 2;
	v->a[17762] = sym_concatenation;
	v->a[17763] = aux_sym_for_statement_repeat1;
	v->a[17764] = actions(667);
	v->a[17765] = 3;
	v->a[17766] = sym_raw_string;
	v->a[17767] = sym_number;
	v->a[17768] = sym_word;
	v->a[17769] = state(362);
	v->a[17770] = 5;
	v->a[17771] = sym_arithmetic_expansion;
	v->a[17772] = sym_string;
	v->a[17773] = sym_simple_expansion;
	v->a[17774] = sym_expansion;
	v->a[17775] = sym_command_substitution;
	v->a[17776] = actions(428);
	v->a[17777] = 11;
	v->a[17778] = anon_sym_esac;
	v->a[17779] = anon_sym_PIPE;
	small_parse_table_889(v);
}

void	small_parse_table_889(t_small_parse_table_array *v)
{
	v->a[17780] = anon_sym_SEMI_SEMI;
	v->a[17781] = anon_sym_AMP_AMP;
	v->a[17782] = anon_sym_PIPE_PIPE;
	v->a[17783] = anon_sym_LT;
	v->a[17784] = anon_sym_GT;
	v->a[17785] = anon_sym_GT_GT;
	v->a[17786] = anon_sym_LT_LT;
	v->a[17787] = aux_sym_heredoc_redirect_token1;
	v->a[17788] = anon_sym_SEMI;
	v->a[17789] = 13;
	v->a[17790] = actions(3);
	v->a[17791] = 1;
	v->a[17792] = sym_comment;
	v->a[17793] = actions(53);
	v->a[17794] = 1;
	v->a[17795] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17796] = actions(55);
	v->a[17797] = 1;
	v->a[17798] = anon_sym_DOLLAR;
	v->a[17799] = actions(57);
	small_parse_table_890(v);
}

/* EOF small_parse_table_177.c */
