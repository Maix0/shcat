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
	v->a[17701] = sym_test_operator;
	v->a[17702] = actions(3632);
	v->a[17703] = 1;
	v->a[17704] = sym__brace_start;
	v->a[17705] = state(2270);
	v->a[17706] = 1;
	v->a[17707] = aux_sym__literal_repeat1;
	v->a[17708] = actions(2074);
	v->a[17709] = 2;
	v->a[17710] = sym_file_descriptor;
	v->a[17711] = aux_sym_heredoc_redirect_token1;
	v->a[17712] = actions(3608);
	v->a[17713] = 2;
	v->a[17714] = anon_sym_LPAREN_LPAREN;
	v->a[17715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17716] = actions(3628);
	v->a[17717] = 2;
	v->a[17718] = anon_sym_LT_LPAREN;
	v->a[17719] = anon_sym_GT_LPAREN;
	small_parse_table_886(v);
}

void	small_parse_table_886(t_small_parse_table_array *v)
{
	v->a[17720] = state(741);
	v->a[17721] = 2;
	v->a[17722] = sym_concatenation;
	v->a[17723] = aux_sym_for_statement_repeat1;
	v->a[17724] = actions(3606);
	v->a[17725] = 3;
	v->a[17726] = sym_raw_string;
	v->a[17727] = sym_ansi_c_string;
	v->a[17728] = sym_word;
	v->a[17729] = state(1839);
	v->a[17730] = 9;
	v->a[17731] = sym_arithmetic_expansion;
	v->a[17732] = sym_brace_expression;
	v->a[17733] = sym_string;
	v->a[17734] = sym_translated_string;
	v->a[17735] = sym_number;
	v->a[17736] = sym_simple_expansion;
	v->a[17737] = sym_expansion;
	v->a[17738] = sym_command_substitution;
	v->a[17739] = sym_process_substitution;
	small_parse_table_887(v);
}

void	small_parse_table_887(t_small_parse_table_array *v)
{
	v->a[17740] = actions(2072);
	v->a[17741] = 20;
	v->a[17742] = anon_sym_SEMI;
	v->a[17743] = anon_sym_PIPE_PIPE;
	v->a[17744] = anon_sym_AMP_AMP;
	v->a[17745] = anon_sym_PIPE;
	v->a[17746] = anon_sym_AMP;
	v->a[17747] = anon_sym_LT;
	v->a[17748] = anon_sym_GT;
	v->a[17749] = anon_sym_LT_LT;
	v->a[17750] = anon_sym_GT_GT;
	v->a[17751] = anon_sym_RPAREN;
	v->a[17752] = anon_sym_SEMI_SEMI;
	v->a[17753] = anon_sym_PIPE_AMP;
	v->a[17754] = anon_sym_AMP_GT;
	v->a[17755] = anon_sym_AMP_GT_GT;
	v->a[17756] = anon_sym_LT_AMP;
	v->a[17757] = anon_sym_GT_AMP;
	v->a[17758] = anon_sym_GT_PIPE;
	v->a[17759] = anon_sym_LT_AMP_DASH;
	small_parse_table_888(v);
}

void	small_parse_table_888(t_small_parse_table_array *v)
{
	v->a[17760] = anon_sym_GT_AMP_DASH;
	v->a[17761] = anon_sym_LT_LT_DASH;
	v->a[17762] = 21;
	v->a[17763] = actions(3);
	v->a[17764] = 1;
	v->a[17765] = sym_comment;
	v->a[17766] = actions(3233);
	v->a[17767] = 1;
	v->a[17768] = anon_sym_DOLLAR_LBRACK;
	v->a[17769] = actions(3236);
	v->a[17770] = 1;
	v->a[17771] = anon_sym_DOLLAR;
	v->a[17772] = actions(3242);
	v->a[17773] = 1;
	v->a[17774] = anon_sym_DQUOTE;
	v->a[17775] = actions(3245);
	v->a[17776] = 1;
	v->a[17777] = aux_sym_number_token1;
	v->a[17778] = actions(3248);
	v->a[17779] = 1;
	small_parse_table_889(v);
}

void	small_parse_table_889(t_small_parse_table_array *v)
{
	v->a[17780] = aux_sym_number_token2;
	v->a[17781] = actions(3251);
	v->a[17782] = 1;
	v->a[17783] = anon_sym_DOLLAR_LBRACE;
	v->a[17784] = actions(3254);
	v->a[17785] = 1;
	v->a[17786] = anon_sym_DOLLAR_LPAREN;
	v->a[17787] = actions(3257);
	v->a[17788] = 1;
	v->a[17789] = anon_sym_BQUOTE;
	v->a[17790] = actions(3260);
	v->a[17791] = 1;
	v->a[17792] = anon_sym_DOLLAR_BQUOTE;
	v->a[17793] = actions(3269);
	v->a[17794] = 1;
	v->a[17795] = sym__brace_start;
	v->a[17796] = actions(3637);
	v->a[17797] = 1;
	v->a[17798] = sym__special_character;
	v->a[17799] = actions(3640);
	small_parse_table_890(v);
}

/* EOF small_parse_table_177.c */
