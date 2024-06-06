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
	v->a[17700] = anon_sym_AMP_GT;
	v->a[17701] = anon_sym_AMP_GT_GT;
	v->a[17702] = anon_sym_LT_AMP;
	v->a[17703] = anon_sym_GT_AMP;
	v->a[17704] = anon_sym_GT_PIPE;
	v->a[17705] = anon_sym_LT_AMP_DASH;
	v->a[17706] = anon_sym_GT_AMP_DASH;
	v->a[17707] = anon_sym_LT_LT;
	v->a[17708] = anon_sym_LT_LT_DASH;
	v->a[17709] = 19;
	v->a[17710] = actions(3);
	v->a[17711] = 1;
	v->a[17712] = sym_comment;
	v->a[17713] = actions(1811);
	v->a[17714] = 1;
	v->a[17715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17716] = actions(1814);
	v->a[17717] = 1;
	v->a[17718] = anon_sym_DOLLAR;
	v->a[17719] = actions(1820);
	small_parse_table_886(v);
}

void	small_parse_table_886(t_small_parse_table_array *v)
{
	v->a[17720] = 1;
	v->a[17721] = anon_sym_DQUOTE;
	v->a[17722] = actions(1823);
	v->a[17723] = 1;
	v->a[17724] = aux_sym_number_token1;
	v->a[17725] = actions(1826);
	v->a[17726] = 1;
	v->a[17727] = aux_sym_number_token2;
	v->a[17728] = actions(1829);
	v->a[17729] = 1;
	v->a[17730] = anon_sym_DOLLAR_LBRACE;
	v->a[17731] = actions(1832);
	v->a[17732] = 1;
	v->a[17733] = anon_sym_DOLLAR_LPAREN;
	v->a[17734] = actions(1835);
	v->a[17735] = 1;
	v->a[17736] = anon_sym_BQUOTE;
	v->a[17737] = actions(1838);
	v->a[17738] = 1;
	v->a[17739] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_887(v);
}

void	small_parse_table_887(t_small_parse_table_array *v)
{
	v->a[17740] = actions(1844);
	v->a[17741] = 1;
	v->a[17742] = sym__brace_start;
	v->a[17743] = actions(2737);
	v->a[17744] = 1;
	v->a[17745] = sym__special_character;
	v->a[17746] = actions(2740);
	v->a[17747] = 1;
	v->a[17748] = sym_test_operator;
	v->a[17749] = state(1237);
	v->a[17750] = 1;
	v->a[17751] = aux_sym__literal_repeat1;
	v->a[17752] = actions(2734);
	v->a[17753] = 2;
	v->a[17754] = sym_raw_string;
	v->a[17755] = sym_word;
	v->a[17756] = state(491);
	v->a[17757] = 2;
	v->a[17758] = sym_concatenation;
	v->a[17759] = aux_sym_for_statement_repeat1;
	small_parse_table_888(v);
}

void	small_parse_table_888(t_small_parse_table_array *v)
{
	v->a[17760] = actions(1287);
	v->a[17761] = 3;
	v->a[17762] = sym_file_descriptor;
	v->a[17763] = sym_variable_name;
	v->a[17764] = aux_sym_heredoc_redirect_token1;
	v->a[17765] = state(1343);
	v->a[17766] = 7;
	v->a[17767] = sym_arithmetic_expansion;
	v->a[17768] = sym_brace_expression;
	v->a[17769] = sym_string;
	v->a[17770] = sym_number;
	v->a[17771] = sym_simple_expansion;
	v->a[17772] = sym_expansion;
	v->a[17773] = sym_command_substitution;
	v->a[17774] = actions(1285);
	v->a[17775] = 16;
	v->a[17776] = anon_sym_PIPE;
	v->a[17777] = anon_sym_PIPE_AMP;
	v->a[17778] = anon_sym_AMP_AMP;
	v->a[17779] = anon_sym_PIPE_PIPE;
	small_parse_table_889(v);
}

void	small_parse_table_889(t_small_parse_table_array *v)
{
	v->a[17780] = anon_sym_LT;
	v->a[17781] = anon_sym_GT;
	v->a[17782] = anon_sym_GT_GT;
	v->a[17783] = anon_sym_AMP_GT;
	v->a[17784] = anon_sym_AMP_GT_GT;
	v->a[17785] = anon_sym_LT_AMP;
	v->a[17786] = anon_sym_GT_AMP;
	v->a[17787] = anon_sym_GT_PIPE;
	v->a[17788] = anon_sym_LT_AMP_DASH;
	v->a[17789] = anon_sym_GT_AMP_DASH;
	v->a[17790] = anon_sym_LT_LT;
	v->a[17791] = anon_sym_LT_LT_DASH;
	v->a[17792] = 12;
	v->a[17793] = actions(3);
	v->a[17794] = 1;
	v->a[17795] = sym_comment;
	v->a[17796] = actions(2714);
	v->a[17797] = 1;
	v->a[17798] = sym_variable_name;
	v->a[17799] = actions(2743);
	small_parse_table_890(v);
}

/* EOF small_parse_table_177.c */
