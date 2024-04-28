/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1197.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5985(t_small_parse_table_array *v)
{
	v->a[119700] = anon_sym_DQUOTE;
	v->a[119701] = sym_raw_string;
	v->a[119702] = sym_ansi_c_string;
	v->a[119703] = anon_sym_DOLLAR_LBRACE;
	v->a[119704] = anon_sym_DOLLAR_BQUOTE;
	v->a[119705] = anon_sym_LT_LPAREN;
	v->a[119706] = anon_sym_GT_LPAREN;
	v->a[119707] = 6;
	v->a[119708] = actions(3);
	v->a[119709] = 1;
	v->a[119710] = sym_comment;
	v->a[119711] = actions(5638);
	v->a[119712] = 1;
	v->a[119713] = aux_sym_concatenation_token1;
	v->a[119714] = actions(5640);
	v->a[119715] = 1;
	v->a[119716] = sym__concat;
	v->a[119717] = state(2290);
	v->a[119718] = 1;
	v->a[119719] = aux_sym_concatenation_repeat1;
	small_parse_table_5986(v);
}

void	small_parse_table_5986(t_small_parse_table_array *v)
{
	v->a[119720] = actions(4566);
	v->a[119721] = 5;
	v->a[119722] = sym_file_descriptor;
	v->a[119723] = sym_variable_name;
	v->a[119724] = sym_test_operator;
	v->a[119725] = sym__brace_start;
	v->a[119726] = aux_sym_heredoc_redirect_token1;
	v->a[119727] = actions(4564);
	v->a[119728] = 34;
	v->a[119729] = anon_sym_LPAREN_LPAREN;
	v->a[119730] = anon_sym_PIPE_PIPE;
	v->a[119731] = anon_sym_AMP_AMP;
	v->a[119732] = anon_sym_PIPE;
	v->a[119733] = anon_sym_LT;
	v->a[119734] = anon_sym_GT;
	v->a[119735] = anon_sym_LT_LT;
	v->a[119736] = anon_sym_GT_GT;
	v->a[119737] = anon_sym_PIPE_AMP;
	v->a[119738] = anon_sym_AMP_GT;
	v->a[119739] = anon_sym_AMP_GT_GT;
	small_parse_table_5987(v);
}

void	small_parse_table_5987(t_small_parse_table_array *v)
{
	v->a[119740] = anon_sym_LT_AMP;
	v->a[119741] = anon_sym_GT_AMP;
	v->a[119742] = anon_sym_GT_PIPE;
	v->a[119743] = anon_sym_LT_AMP_DASH;
	v->a[119744] = anon_sym_GT_AMP_DASH;
	v->a[119745] = anon_sym_LT_LT_DASH;
	v->a[119746] = anon_sym_LT_LT_LT;
	v->a[119747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119748] = anon_sym_DOLLAR_LBRACK;
	v->a[119749] = anon_sym_DOLLAR;
	v->a[119750] = sym__special_character;
	v->a[119751] = anon_sym_DQUOTE;
	v->a[119752] = sym_raw_string;
	v->a[119753] = sym_ansi_c_string;
	v->a[119754] = aux_sym_number_token1;
	v->a[119755] = aux_sym_number_token2;
	v->a[119756] = anon_sym_DOLLAR_LBRACE;
	v->a[119757] = anon_sym_DOLLAR_LPAREN;
	v->a[119758] = anon_sym_BQUOTE;
	v->a[119759] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5988(v);
}

void	small_parse_table_5988(t_small_parse_table_array *v)
{
	v->a[119760] = anon_sym_LT_LPAREN;
	v->a[119761] = anon_sym_GT_LPAREN;
	v->a[119762] = sym_word;
	v->a[119763] = 3;
	v->a[119764] = actions(71);
	v->a[119765] = 1;
	v->a[119766] = sym_comment;
	v->a[119767] = actions(1292);
	v->a[119768] = 15;
	v->a[119769] = anon_sym_PIPE;
	v->a[119770] = anon_sym_EQ_EQ;
	v->a[119771] = anon_sym_LT;
	v->a[119772] = anon_sym_GT;
	v->a[119773] = anon_sym_LT_LT;
	v->a[119774] = anon_sym_EQ_TILDE;
	v->a[119775] = anon_sym_AMP_GT;
	v->a[119776] = anon_sym_LT_AMP;
	v->a[119777] = anon_sym_GT_AMP;
	v->a[119778] = anon_sym_DOLLAR;
	v->a[119779] = aux_sym_number_token1;
	small_parse_table_5989(v);
}

void	small_parse_table_5989(t_small_parse_table_array *v)
{
	v->a[119780] = aux_sym_number_token2;
	v->a[119781] = anon_sym_DOLLAR_LPAREN;
	v->a[119782] = anon_sym_BQUOTE;
	v->a[119783] = sym_word;
	v->a[119784] = actions(1294);
	v->a[119785] = 27;
	v->a[119786] = sym_file_descriptor;
	v->a[119787] = sym__concat;
	v->a[119788] = sym_test_operator;
	v->a[119789] = sym__bare_dollar;
	v->a[119790] = sym__brace_start;
	v->a[119791] = anon_sym_LPAREN_LPAREN;
	v->a[119792] = anon_sym_PIPE_PIPE;
	v->a[119793] = anon_sym_AMP_AMP;
	v->a[119794] = anon_sym_GT_GT;
	v->a[119795] = anon_sym_PIPE_AMP;
	v->a[119796] = anon_sym_AMP_GT_GT;
	v->a[119797] = anon_sym_GT_PIPE;
	v->a[119798] = anon_sym_LT_AMP_DASH;
	v->a[119799] = anon_sym_GT_AMP_DASH;
	small_parse_table_5990(v);
}

/* EOF small_parse_table_1197.c */
