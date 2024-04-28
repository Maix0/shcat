/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_517.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2585(t_small_parse_table_array *v)
{
	v->a[51700] = aux_sym_number_token2;
	v->a[51701] = anon_sym_DOLLAR_LBRACE;
	v->a[51702] = anon_sym_DOLLAR_LPAREN;
	v->a[51703] = anon_sym_BQUOTE;
	v->a[51704] = anon_sym_DOLLAR_BQUOTE;
	v->a[51705] = anon_sym_LT_LPAREN;
	v->a[51706] = anon_sym_GT_LPAREN;
	v->a[51707] = sym_word;
	v->a[51708] = 6;
	v->a[51709] = actions(3);
	v->a[51710] = 1;
	v->a[51711] = sym_comment;
	v->a[51712] = actions(5464);
	v->a[51713] = 1;
	v->a[51714] = aux_sym_concatenation_token1;
	v->a[51715] = actions(5466);
	v->a[51716] = 1;
	v->a[51717] = sym__concat;
	v->a[51718] = state(1245);
	v->a[51719] = 1;
	small_parse_table_2586(v);
}

void	small_parse_table_2586(t_small_parse_table_array *v)
{
	v->a[51720] = aux_sym_concatenation_repeat1;
	v->a[51721] = actions(5069);
	v->a[51722] = 5;
	v->a[51723] = sym_file_descriptor;
	v->a[51724] = sym_variable_name;
	v->a[51725] = sym_test_operator;
	v->a[51726] = sym__brace_start;
	v->a[51727] = aux_sym_heredoc_redirect_token1;
	v->a[51728] = actions(5067);
	v->a[51729] = 39;
	v->a[51730] = anon_sym_LPAREN_LPAREN;
	v->a[51731] = anon_sym_SEMI;
	v->a[51732] = anon_sym_PIPE_PIPE;
	v->a[51733] = anon_sym_AMP_AMP;
	v->a[51734] = anon_sym_PIPE;
	v->a[51735] = anon_sym_AMP;
	v->a[51736] = anon_sym_LT;
	v->a[51737] = anon_sym_GT;
	v->a[51738] = anon_sym_LT_LT;
	v->a[51739] = anon_sym_GT_GT;
	small_parse_table_2587(v);
}

void	small_parse_table_2587(t_small_parse_table_array *v)
{
	v->a[51740] = anon_sym_SEMI_SEMI;
	v->a[51741] = anon_sym_SEMI_AMP;
	v->a[51742] = anon_sym_SEMI_SEMI_AMP;
	v->a[51743] = anon_sym_PIPE_AMP;
	v->a[51744] = anon_sym_AMP_GT;
	v->a[51745] = anon_sym_AMP_GT_GT;
	v->a[51746] = anon_sym_LT_AMP;
	v->a[51747] = anon_sym_GT_AMP;
	v->a[51748] = anon_sym_GT_PIPE;
	v->a[51749] = anon_sym_LT_AMP_DASH;
	v->a[51750] = anon_sym_GT_AMP_DASH;
	v->a[51751] = anon_sym_LT_LT_DASH;
	v->a[51752] = anon_sym_LT_LT_LT;
	v->a[51753] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51754] = anon_sym_DOLLAR_LBRACK;
	v->a[51755] = anon_sym_DOLLAR;
	v->a[51756] = sym__special_character;
	v->a[51757] = anon_sym_DQUOTE;
	v->a[51758] = sym_raw_string;
	v->a[51759] = sym_ansi_c_string;
	small_parse_table_2588(v);
}

void	small_parse_table_2588(t_small_parse_table_array *v)
{
	v->a[51760] = aux_sym_number_token1;
	v->a[51761] = aux_sym_number_token2;
	v->a[51762] = anon_sym_DOLLAR_LBRACE;
	v->a[51763] = anon_sym_DOLLAR_LPAREN;
	v->a[51764] = anon_sym_BQUOTE;
	v->a[51765] = anon_sym_DOLLAR_BQUOTE;
	v->a[51766] = anon_sym_LT_LPAREN;
	v->a[51767] = anon_sym_GT_LPAREN;
	v->a[51768] = sym_word;
	v->a[51769] = 3;
	v->a[51770] = actions(3);
	v->a[51771] = 1;
	v->a[51772] = sym_comment;
	v->a[51773] = actions(1346);
	v->a[51774] = 7;
	v->a[51775] = sym_file_descriptor;
	v->a[51776] = sym__concat;
	v->a[51777] = sym_test_operator;
	v->a[51778] = sym__bare_dollar;
	v->a[51779] = sym__brace_start;
	small_parse_table_2589(v);
}

void	small_parse_table_2589(t_small_parse_table_array *v)
{
	v->a[51780] = ts_builtin_sym_end;
	v->a[51781] = aux_sym_heredoc_redirect_token1;
	v->a[51782] = actions(1344);
	v->a[51783] = 40;
	v->a[51784] = anon_sym_LPAREN_LPAREN;
	v->a[51785] = anon_sym_SEMI;
	v->a[51786] = anon_sym_PIPE_PIPE;
	v->a[51787] = anon_sym_AMP_AMP;
	v->a[51788] = anon_sym_PIPE;
	v->a[51789] = anon_sym_AMP;
	v->a[51790] = anon_sym_EQ_EQ;
	v->a[51791] = anon_sym_LT;
	v->a[51792] = anon_sym_GT;
	v->a[51793] = anon_sym_LT_LT;
	v->a[51794] = anon_sym_GT_GT;
	v->a[51795] = anon_sym_SEMI_SEMI;
	v->a[51796] = anon_sym_PIPE_AMP;
	v->a[51797] = anon_sym_EQ_TILDE;
	v->a[51798] = anon_sym_AMP_GT;
	v->a[51799] = anon_sym_AMP_GT_GT;
	small_parse_table_2590(v);
}

/* EOF small_parse_table_517.c */
