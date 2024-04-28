/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_67.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_335(t_small_parse_table_array *v)
{
	v->a[6700] = anon_sym_GT_LPAREN;
	v->a[6701] = actions(2359);
	v->a[6702] = 3;
	v->a[6703] = sym_raw_string;
	v->a[6704] = sym_ansi_c_string;
	v->a[6705] = sym_word;
	v->a[6706] = state(612);
	v->a[6707] = 3;
	v->a[6708] = sym_variable_assignment;
	v->a[6709] = sym_concatenation;
	v->a[6710] = aux_sym_declaration_command_repeat1;
	v->a[6711] = state(1602);
	v->a[6712] = 9;
	v->a[6713] = sym_arithmetic_expansion;
	v->a[6714] = sym_brace_expression;
	v->a[6715] = sym_string;
	v->a[6716] = sym_translated_string;
	v->a[6717] = sym_number;
	v->a[6718] = sym_simple_expansion;
	v->a[6719] = sym_expansion;
	small_parse_table_336(v);
}

void	small_parse_table_336(t_small_parse_table_array *v)
{
	v->a[6720] = sym_command_substitution;
	v->a[6721] = sym_process_substitution;
	v->a[6722] = actions(1797);
	v->a[6723] = 20;
	v->a[6724] = anon_sym_SEMI;
	v->a[6725] = anon_sym_PIPE_PIPE;
	v->a[6726] = anon_sym_AMP_AMP;
	v->a[6727] = anon_sym_PIPE;
	v->a[6728] = anon_sym_AMP;
	v->a[6729] = anon_sym_LT;
	v->a[6730] = anon_sym_GT;
	v->a[6731] = anon_sym_LT_LT;
	v->a[6732] = anon_sym_GT_GT;
	v->a[6733] = anon_sym_SEMI_SEMI;
	v->a[6734] = anon_sym_PIPE_AMP;
	v->a[6735] = anon_sym_AMP_GT;
	v->a[6736] = anon_sym_AMP_GT_GT;
	v->a[6737] = anon_sym_LT_AMP;
	v->a[6738] = anon_sym_GT_AMP;
	v->a[6739] = anon_sym_GT_PIPE;
	small_parse_table_337(v);
}

void	small_parse_table_337(t_small_parse_table_array *v)
{
	v->a[6740] = anon_sym_LT_AMP_DASH;
	v->a[6741] = anon_sym_GT_AMP_DASH;
	v->a[6742] = anon_sym_LT_LT_DASH;
	v->a[6743] = anon_sym_BQUOTE;
	v->a[6744] = 21;
	v->a[6745] = actions(3);
	v->a[6746] = 1;
	v->a[6747] = sym_comment;
	v->a[6748] = actions(2333);
	v->a[6749] = 1;
	v->a[6750] = anon_sym_DOLLAR_LBRACK;
	v->a[6751] = actions(2335);
	v->a[6752] = 1;
	v->a[6753] = anon_sym_DOLLAR;
	v->a[6754] = actions(2337);
	v->a[6755] = 1;
	v->a[6756] = sym__special_character;
	v->a[6757] = actions(2339);
	v->a[6758] = 1;
	v->a[6759] = anon_sym_DQUOTE;
	small_parse_table_338(v);
}

void	small_parse_table_338(t_small_parse_table_array *v)
{
	v->a[6760] = actions(2341);
	v->a[6761] = 1;
	v->a[6762] = aux_sym_number_token1;
	v->a[6763] = actions(2343);
	v->a[6764] = 1;
	v->a[6765] = aux_sym_number_token2;
	v->a[6766] = actions(2345);
	v->a[6767] = 1;
	v->a[6768] = anon_sym_DOLLAR_LBRACE;
	v->a[6769] = actions(2347);
	v->a[6770] = 1;
	v->a[6771] = anon_sym_DOLLAR_LPAREN;
	v->a[6772] = actions(2349);
	v->a[6773] = 1;
	v->a[6774] = anon_sym_BQUOTE;
	v->a[6775] = actions(2351);
	v->a[6776] = 1;
	v->a[6777] = anon_sym_DOLLAR_BQUOTE;
	v->a[6778] = actions(2355);
	v->a[6779] = 1;
	small_parse_table_339(v);
}

void	small_parse_table_339(t_small_parse_table_array *v)
{
	v->a[6780] = sym_test_operator;
	v->a[6781] = actions(2357);
	v->a[6782] = 1;
	v->a[6783] = sym__brace_start;
	v->a[6784] = state(1658);
	v->a[6785] = 1;
	v->a[6786] = aux_sym__literal_repeat1;
	v->a[6787] = actions(2074);
	v->a[6788] = 2;
	v->a[6789] = sym_file_descriptor;
	v->a[6790] = aux_sym_heredoc_redirect_token1;
	v->a[6791] = actions(2331);
	v->a[6792] = 2;
	v->a[6793] = anon_sym_LPAREN_LPAREN;
	v->a[6794] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6795] = actions(2353);
	v->a[6796] = 2;
	v->a[6797] = anon_sym_LT_LPAREN;
	v->a[6798] = anon_sym_GT_LPAREN;
	v->a[6799] = state(593);
	small_parse_table_340(v);
}

/* EOF small_parse_table_67.c */
