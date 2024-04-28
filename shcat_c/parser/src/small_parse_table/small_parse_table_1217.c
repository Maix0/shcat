/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1217.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6085(t_small_parse_table_array *v)
{
	v->a[121700] = sym_word;
	v->a[121701] = 3;
	v->a[121702] = actions(71);
	v->a[121703] = 1;
	v->a[121704] = sym_comment;
	v->a[121705] = actions(1356);
	v->a[121706] = 15;
	v->a[121707] = anon_sym_PIPE;
	v->a[121708] = anon_sym_EQ_EQ;
	v->a[121709] = anon_sym_LT;
	v->a[121710] = anon_sym_GT;
	v->a[121711] = anon_sym_LT_LT;
	v->a[121712] = anon_sym_EQ_TILDE;
	v->a[121713] = anon_sym_AMP_GT;
	v->a[121714] = anon_sym_LT_AMP;
	v->a[121715] = anon_sym_GT_AMP;
	v->a[121716] = anon_sym_DOLLAR;
	v->a[121717] = aux_sym_number_token1;
	v->a[121718] = aux_sym_number_token2;
	v->a[121719] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6086(v);
}

void	small_parse_table_6086(t_small_parse_table_array *v)
{
	v->a[121720] = anon_sym_BQUOTE;
	v->a[121721] = sym_word;
	v->a[121722] = actions(1358);
	v->a[121723] = 27;
	v->a[121724] = sym_file_descriptor;
	v->a[121725] = sym__concat;
	v->a[121726] = sym_test_operator;
	v->a[121727] = sym__bare_dollar;
	v->a[121728] = sym__brace_start;
	v->a[121729] = anon_sym_LPAREN_LPAREN;
	v->a[121730] = anon_sym_PIPE_PIPE;
	v->a[121731] = anon_sym_AMP_AMP;
	v->a[121732] = anon_sym_GT_GT;
	v->a[121733] = anon_sym_PIPE_AMP;
	v->a[121734] = anon_sym_AMP_GT_GT;
	v->a[121735] = anon_sym_GT_PIPE;
	v->a[121736] = anon_sym_LT_AMP_DASH;
	v->a[121737] = anon_sym_GT_AMP_DASH;
	v->a[121738] = anon_sym_LT_LT_DASH;
	v->a[121739] = anon_sym_LT_LT_LT;
	small_parse_table_6087(v);
}

void	small_parse_table_6087(t_small_parse_table_array *v)
{
	v->a[121740] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121741] = anon_sym_DOLLAR_LBRACK;
	v->a[121742] = aux_sym_concatenation_token1;
	v->a[121743] = sym__special_character;
	v->a[121744] = anon_sym_DQUOTE;
	v->a[121745] = sym_raw_string;
	v->a[121746] = sym_ansi_c_string;
	v->a[121747] = anon_sym_DOLLAR_LBRACE;
	v->a[121748] = anon_sym_DOLLAR_BQUOTE;
	v->a[121749] = anon_sym_LT_LPAREN;
	v->a[121750] = anon_sym_GT_LPAREN;
	v->a[121751] = 6;
	v->a[121752] = actions(3);
	v->a[121753] = 1;
	v->a[121754] = sym_comment;
	v->a[121755] = actions(5638);
	v->a[121756] = 1;
	v->a[121757] = aux_sym_concatenation_token1;
	v->a[121758] = actions(5640);
	v->a[121759] = 1;
	small_parse_table_6088(v);
}

void	small_parse_table_6088(t_small_parse_table_array *v)
{
	v->a[121760] = sym__concat;
	v->a[121761] = state(2290);
	v->a[121762] = 1;
	v->a[121763] = aux_sym_concatenation_repeat1;
	v->a[121764] = actions(4469);
	v->a[121765] = 5;
	v->a[121766] = sym_file_descriptor;
	v->a[121767] = sym_variable_name;
	v->a[121768] = sym_test_operator;
	v->a[121769] = sym__brace_start;
	v->a[121770] = aux_sym_heredoc_redirect_token1;
	v->a[121771] = actions(4467);
	v->a[121772] = 34;
	v->a[121773] = anon_sym_LPAREN_LPAREN;
	v->a[121774] = anon_sym_PIPE_PIPE;
	v->a[121775] = anon_sym_AMP_AMP;
	v->a[121776] = anon_sym_PIPE;
	v->a[121777] = anon_sym_LT;
	v->a[121778] = anon_sym_GT;
	v->a[121779] = anon_sym_LT_LT;
	small_parse_table_6089(v);
}

void	small_parse_table_6089(t_small_parse_table_array *v)
{
	v->a[121780] = anon_sym_GT_GT;
	v->a[121781] = anon_sym_PIPE_AMP;
	v->a[121782] = anon_sym_AMP_GT;
	v->a[121783] = anon_sym_AMP_GT_GT;
	v->a[121784] = anon_sym_LT_AMP;
	v->a[121785] = anon_sym_GT_AMP;
	v->a[121786] = anon_sym_GT_PIPE;
	v->a[121787] = anon_sym_LT_AMP_DASH;
	v->a[121788] = anon_sym_GT_AMP_DASH;
	v->a[121789] = anon_sym_LT_LT_DASH;
	v->a[121790] = anon_sym_LT_LT_LT;
	v->a[121791] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121792] = anon_sym_DOLLAR_LBRACK;
	v->a[121793] = anon_sym_DOLLAR;
	v->a[121794] = sym__special_character;
	v->a[121795] = anon_sym_DQUOTE;
	v->a[121796] = sym_raw_string;
	v->a[121797] = sym_ansi_c_string;
	v->a[121798] = aux_sym_number_token1;
	v->a[121799] = aux_sym_number_token2;
	small_parse_table_6090(v);
}

/* EOF small_parse_table_1217.c */
